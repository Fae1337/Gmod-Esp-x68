#include "memory.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <Windows.h>
#include <windowsx.h>
#include "vector.h"
#include <inttypes.h>
#include <dxgi.h>
#include <d3d9.h>
#include <dwmapi.h>
#include <d3dcommon.h>
#include <d3d11.h>
#include "offsets.h"
#include <cstdio>

#include "imgui/imgui.h"
#include "imgui/imgui_impl_dx11.h"
#include "imgui/imgui_impl_win32.h"

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dwmapi.lib")

#define _CRT_SECURE_NO_WARNINGS

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

LRESULT CALLBACK window_procedure(HWND window, UINT message, WPARAM w_param, LPARAM l_param) {
    if (ImGui_ImplWin32_WndProcHandler(window, message, w_param, l_param)) {
        return 0L;
    }
    if (message == WM_DESTROY) {
        PostQuitMessage(0);
        return 0L;
    }
    switch (message)
    {
    case WM_NCHITTEST: {
        const LONG borderWidth = screenWidth;
        const LONG titleBarHeight = screenHeight;
        POINT cursorPos{ GET_X_LPARAM(w_param), GET_X_LPARAM(l_param) };
        RECT windowRect;
        GetWindowRect(window, &windowRect);

        if (cursorPos.y >= windowRect.top && cursorPos.y < windowRect.top + titleBarHeight) {
            return HTCAPTION;
        }
        break;
    }
    case WM_DESTROY: {
        PostQuitMessage(0);
        return 0;
    }
    }
    return DefWindowProc(window, message, w_param, l_param);
}

INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, PSTR, INT cmdShow)
{
    WNDCLASSEXW wc{};
    wc.cbSize = sizeof(WNDCLASSEXW);
    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc = window_procedure;
    wc.hInstance = hInstance;
    wc.lpszClassName = L"idk lol";

    RegisterClassExW(&wc);

    const HWND overlay = CreateWindowExW(
        WS_EX_TOPMOST | WS_EX_TRANSPARENT | WS_EX_LAYERED,
        wc.lpszClassName,
        L"idk lol",
        WS_POPUP,
        0,
        0,
        screenWidth,
        screenHeight,
        nullptr,
        nullptr,
        wc.hInstance,
        nullptr
    );

    SetLayeredWindowAttributes(overlay, RGB(0, 0, 0), BYTE(255), LWA_ALPHA);
    {
        RECT client_area{};
        GetClientRect(overlay, &client_area);

        RECT window_area{};
        GetWindowRect(overlay, &window_area);

        POINT diff{};
        ClientToScreen(overlay, &diff);

        const MARGINS margins{
            window_area.left + (diff.x - window_area.left),
            window_area.top + (diff.y - window_area.top),
            client_area.right,
            client_area.bottom,
        };

        DwmExtendFrameIntoClientArea(overlay, &margins);
    }

    DXGI_SWAP_CHAIN_DESC sd{};
    sd.BufferDesc.RefreshRate.Numerator = 60U;
    sd.BufferDesc.RefreshRate.Denominator = 1U;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.SampleDesc.Count = 1U;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.BufferCount = 2U;
    sd.OutputWindow = overlay;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;

    constexpr D3D_FEATURE_LEVEL levels[2]{
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_10_0,
    };
    ID3D11Device* device{ nullptr };
    ID3D11DeviceContext* device_context{ nullptr };
    IDXGISwapChain* swap_chain{ nullptr };
    ID3D11RenderTargetView* render_target_view{ nullptr }; D3D_FEATURE_LEVEL level{};

    D3D11CreateDeviceAndSwapChain(
        nullptr,
        D3D_DRIVER_TYPE_HARDWARE,
        nullptr,
        0U,
        levels,
        2U,
        D3D11_SDK_VERSION,
        &sd,
        &swap_chain,
        &device,
        &level,
        &device_context
    );

    ID3D11Texture2D* back_buffer(nullptr);
    swap_chain->GetBuffer(0U, IID_PPV_ARGS(&back_buffer));

    if (back_buffer) {
        device->CreateRenderTargetView(back_buffer, nullptr, &render_target_view);
        back_buffer->Release();
    }
    else
        return 1;

    ShowWindow(overlay, cmdShow);
    UpdateWindow(overlay);

    ImGui::CreateContext();
    ImGui::StyleColorsClassic();

    ImGui_ImplWin32_Init(overlay);
    ImGui_ImplDX11_Init(device, device_context);

    while (true) {
        MSG msg;
        while (PeekMessage(&msg, nullptr, 0U, 0U, PM_REMOVE)) {
            TranslateMessage(&msg);
            DispatchMessage(&msg);

            if (msg.message == WM_QUIT) {
                break;
            }
        }
        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();

        ImDrawList* drawList = ImGui::GetBackgroundDrawList();

        Memory mem("gmod.exe");

        auto client_dll = mem.GetModuleAddress("client.dll");
        auto engine_dll = mem.GetModuleAddress("engine.dll");

        uint64_t entity_list = client_dll + Offsets::CClientEntityList;
        uint64_t localplayer = client_dll + Offsets::CLocalPlayer;

        uint64_t crender = mem.Read<uint64_t>(engine_dll + Offsets::CRender);
        uint64_t matrixcase = mem.Read<uint64_t>(crender + 0xD8);

        view_matrix_t viewmatrix_base = mem.Read<view_matrix_t>(matrixcase + 0x2D4);

        for (int index = 0; index < 128; index++) {
            uint64_t ent_addr = mem.Read<uint64_t>(entity_list + 0x8 + (0x20 * index));
            if (!ent_addr || ent_addr == localplayer) {
                continue;
            }

            int hp_entity = mem.Read<int>(ent_addr + NetVars::DT_BaseEntity::m_iHealth);
            if (!hp_entity || hp_entity < 0) {
                continue;
            }
            char health_ent[10];
            sprintf_s(health_ent, "%d", hp_entity);

            int armor_entity = mem.Read<int>(ent_addr + NetVars::DT_GMOD_Player::m_iMaxArmor);
            if (!armor_entity || armor_entity < 0) {
                continue;
            }
            char armor_ent[10];
            sprintf_s(armor_ent, "%d", armor_entity);

            Vector3 ent_pos = mem.Read<Vector3>(ent_addr + NetVars::DT_BaseEntity::m_vecOrigin);

            Vector3 head = {
                ent_pos.x, ent_pos.y, ent_pos.z + 75.f
            };
            Vector3 screenPos = ent_pos.WTS(viewmatrix_base);
            Vector3 screenHead = head.WTS(viewmatrix_base);

            float height = screenPos.y - screenHead.y;
            float width = height / 2.1f;

            float x = screenHead.x - width / 2;
            float y = screenHead.y;

            float x2 = height;
            float y2 = width;

            if (screenHead.x - width / 2 >= 0 &&
                screenHead.x + width / 2 <= screenWidth &&
                screenHead.y >= 0 &&
                screenHead.y + height <= screenHeight &&
                screenHead.z > 0) {

                drawList->AddRect(
                    ImVec2(x, y),
                    ImVec2(x + y2, y + x2),
                    IM_COL32(255, 0, 0, 255),
                    0.0f,
                    0,
                    1.5f
                );
                /*
                drawList->AddLine(
                    ImVec2(screenWidth / 2, screenHeight),
                    ImVec2(screenPos.x, screenPos.y),
                    IM_COL32(255, 0, 0, 255),
                    1.5f
                );*/
                drawList->AddText( // health entity
                    ImVec2(x - 20, y),
                    IM_COL32(255, 0, 0, 255),
                    health_ent
                );
                drawList->AddText( // armor entity
                    ImVec2(x - 20, y + 10),
                    IM_COL32(255, 0, 0, 255),
                    armor_ent
                );
            }
        }

        ImGui::Render();
        float color[4]{ 0,0,0,0 };
        device_context->OMSetRenderTargets(1U, &render_target_view, nullptr);
        device_context->ClearRenderTargetView(render_target_view, color);

        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
        swap_chain->Present(0U, 0U);
    }
    if (swap_chain) {
        swap_chain->Release();
    }

    if (device_context) {
        device_context->Release();
    }

    if (device) {
        device->Release();
    }

    if (render_target_view) {
        render_target_view->Release();
    }

    DestroyWindow(overlay);
    UnregisterClassW(wc.lpszClassName, wc.hInstance);

    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    return 0;
}
