#pragma once
#include <cstdint>

namespace Offsets {
	inline constexpr uintptr_t CClientState = 0x63CB80;
	inline constexpr uintptr_t CClientEntityList = 0x95B2A0;
	inline constexpr uintptr_t CViewSetup = 0xA2F898;
	inline constexpr uintptr_t CLocalPlayer = 0x939400;
	inline constexpr uintptr_t ViewMatrix = 0x4BDDD8;
	inline constexpr uintptr_t CRender = 0x4BDE28;
	inline constexpr uintptr_t BSendPacket = 0x96B00;
	inline constexpr uintptr_t ViewAngles = 0x65D764;
	inline constexpr uintptr_t GlobalVars = 0x875DE8;
	inline constexpr uintptr_t ForceJump = 0xA26560;
	inline constexpr uintptr_t LocalPlayerHeadPos = 0x89A0B8;
}

namespace NetVars {

	namespace DT_AI_BaseNPC {
		inline constexpr uintptr_t m_bFadeCorpse = 0x2932;
		inline constexpr uintptr_t m_bImportanRagdoll = 0x2933;
		inline constexpr uintptr_t m_bIsMoving = 0x2931;
		inline constexpr uintptr_t m_bPerformAvoidance = 0x2930;
		inline constexpr uintptr_t m_iDeathFrame = 0x292C;
		inline constexpr uintptr_t m_iDeathPose = 0x2928;
		inline constexpr uintptr_t m_lifeState = 0xD7;
	}

	namespace DT_AR2Explosion {
		inline constexpr uintptr_t m_szMaterialName = 0x1808;
	}

	namespace DT_AlyxEmpEffect {
		inline constexpr uintptr_t m_flDuration = 0x16C4;
		inline constexpr uintptr_t m_flStartTime = 0x16C8;
		inline constexpr uintptr_t m_nState = 0x16C0;
	}

	namespace DT_AnimTimeMustBeFirst {
		inline constexpr uintptr_t AnimTimeMustBeFirst_m_flAnimTime = 0xA0;
	}

	namespace DT_BCCLocalPlayerExclusive {
		inline constexpr uintptr_t bcc_localdata_m_flNextAttack = 0x2118;
	}

	namespace DT_Barnacle {
		inline constexpr uintptr_t m_flAltitude = 0x2968;
		inline constexpr uintptr_t m_vecRoot = 0x2944;
		inline constexpr uintptr_t m_vecTip = 0x2950;
		inline constexpr uintptr_t m_vecTipDrawOffset = 0x295C;
	}

	namespace DT_BaseAnimating {
		inline constexpr uintptr_t m_OverrideViewTarget = 0x1AF8;
		inline constexpr uintptr_t m_bClientSideAnimation = 0x19F9;
		inline constexpr uintptr_t m_bClientSideFrameReset = 0x17B6;
		inline constexpr uintptr_t m_fadeMaxDist = 0x17A4;
		inline constexpr uintptr_t m_fadeMinDist = 0x17A0;
		inline constexpr uintptr_t m_flFadeScale = 0x17A8;
		inline constexpr uintptr_t m_flModelScale = 0x1810;
		inline constexpr uintptr_t m_flModelWidthScale = 0x1810;
		inline constexpr uintptr_t m_flPlaybackRate = 0x170C;
		inline constexpr uintptr_t m_hLightingOrigin = 0x1AD0;
		inline constexpr uintptr_t m_hLightingOriginRelative = 0x1AD4;
		inline constexpr uintptr_t m_nBody = 0x16D4;
		inline constexpr uintptr_t m_nForceBone = 0x1724;
		inline constexpr uintptr_t m_nHitboxSet = 0x16D8;
		inline constexpr uintptr_t m_nMuzzleFlashParity = 0x1AD8;
		inline constexpr uintptr_t m_nNewSequenceParity = 0x19D0;
		inline constexpr uintptr_t m_nResetEventsParity = 0x19D4;
		inline constexpr uintptr_t m_nSequence = 0x19FC;
		inline constexpr uintptr_t m_nSkin = 0x16D0;
		inline constexpr uintptr_t m_pBoneManipulator = 0x1B84;
		inline constexpr uintptr_t m_pFlexManipulator = 0x1B8C;
		inline constexpr uintptr_t m_vecForce = 0x1718;
	}

	namespace DT_BaseBeam {
		inline constexpr uintptr_t a = 0x50;
		inline constexpr uintptr_t b = 0x4C;
		inline constexpr uintptr_t g = 0x48;
		inline constexpr uintptr_t m_fAmplitude = 0x40;
		inline constexpr uintptr_t m_fEndWidth = 0x38;
		inline constexpr uintptr_t m_fLife = 0x30;
		inline constexpr uintptr_t m_fWidth = 0x34;
		inline constexpr uintptr_t m_nFadeLength = 0x3C;
		inline constexpr uintptr_t m_nFlags = 0x58;
		inline constexpr uintptr_t m_nFrameRate = 0x2C;
		inline constexpr uintptr_t m_nHaloIndex = 0x24;
		inline constexpr uintptr_t m_nModelIndex = 0x20;
		inline constexpr uintptr_t m_nSpeed = 0x54;
		inline constexpr uintptr_t m_nStartFrame = 0x28;
		inline constexpr uintptr_t r = 0x44;
	}

	namespace DT_BaseCombatCharacter {
		inline constexpr uintptr_t m_bloodColor = 0x2120;
		inline constexpr uintptr_t m_hActiveWeapon = 0x2924;
	}

	namespace DT_BaseCombatWeapon {
		inline constexpr uintptr_t m_hOwner = 0x1BD8;
		inline constexpr uintptr_t m_iState = 0x1C24;
		inline constexpr uintptr_t m_iViewModelIndex = 0x1C00;
		inline constexpr uintptr_t m_iWorldModelIndex = 0x1C04;
	}

	namespace DT_BaseEntity {
		inline constexpr uintptr_t m_CollisionGroup = 0x454;
		inline constexpr uintptr_t m_CreationTime = 0x77C;
		inline constexpr uintptr_t m_GMOD_DataTable = 0x1648;
		inline constexpr uintptr_t m_GMOD_String0 = 0xE48;
		inline constexpr uintptr_t m_GMOD_String1 = 0x1048;
		inline constexpr uintptr_t m_GMOD_String2 = 0x1248;
		inline constexpr uintptr_t m_GMOD_String3 = 0x1448;
		inline constexpr uintptr_t m_OverrideMaterial = 0x784;
		inline constexpr uintptr_t m_OverrideSubMaterials_0[] = {
			0x0,
			0x790
		};
		inline constexpr uintptr_t m_OverrideSubMaterials_1 = 0x4;
		inline constexpr uintptr_t m_OverrideSubMaterials_10 = 0x28;
		inline constexpr uintptr_t m_OverrideSubMaterials_11 = 0x2C;
		inline constexpr uintptr_t m_OverrideSubMaterials_12 = 0x30;
		inline constexpr uintptr_t m_OverrideSubMaterials_13 = 0x34;
		inline constexpr uintptr_t m_OverrideSubMaterials_14 = 0x38;
		inline constexpr uintptr_t m_OverrideSubMaterials_15 = 0x3C;
		inline constexpr uintptr_t m_OverrideSubMaterials_16 = 0x40;
		inline constexpr uintptr_t m_OverrideSubMaterials_17 = 0x44;
		inline constexpr uintptr_t m_OverrideSubMaterials_18 = 0x48;
		inline constexpr uintptr_t m_OverrideSubMaterials_19 = 0x4C;
		inline constexpr uintptr_t m_OverrideSubMaterials_2 = 0x8;
		inline constexpr uintptr_t m_OverrideSubMaterials_20 = 0x50;
		inline constexpr uintptr_t m_OverrideSubMaterials_21 = 0x54;
		inline constexpr uintptr_t m_OverrideSubMaterials_22 = 0x58;
		inline constexpr uintptr_t m_OverrideSubMaterials_23 = 0x5C;
		inline constexpr uintptr_t m_OverrideSubMaterials_24 = 0x60;
		inline constexpr uintptr_t m_OverrideSubMaterials_25 = 0x64;
		inline constexpr uintptr_t m_OverrideSubMaterials_26 = 0x68;
		inline constexpr uintptr_t m_OverrideSubMaterials_27 = 0x6C;
		inline constexpr uintptr_t m_OverrideSubMaterials_28 = 0x70;
		inline constexpr uintptr_t m_OverrideSubMaterials_29 = 0x74;
		inline constexpr uintptr_t m_OverrideSubMaterials_3 = 0xC;
		inline constexpr uintptr_t m_OverrideSubMaterials_30 = 0x78;
		inline constexpr uintptr_t m_OverrideSubMaterials_31 = 0x7C;
		inline constexpr uintptr_t m_OverrideSubMaterials_4 = 0x10;
		inline constexpr uintptr_t m_OverrideSubMaterials_5 = 0x14;
		inline constexpr uintptr_t m_OverrideSubMaterials_6 = 0x18;
		inline constexpr uintptr_t m_OverrideSubMaterials_7 = 0x1C;
		inline constexpr uintptr_t m_OverrideSubMaterials_8 = 0x20;
		inline constexpr uintptr_t m_OverrideSubMaterials_9 = 0x24;
		inline constexpr uintptr_t m_RealClassName = 0x780;
		inline constexpr uintptr_t m_angRotation = 0x444;
		inline constexpr uintptr_t m_bAlternateSorting = 0x737;
		inline constexpr uintptr_t m_bAnimatedEveryTick = 0x736;
		inline constexpr uintptr_t m_bOnFire = 0x77A;
		inline constexpr uintptr_t m_bSimulatedEveryTick = 0x735;
		inline constexpr uintptr_t m_clrRender = 0x90;
		inline constexpr uintptr_t m_fEffects = 0xC4;
		inline constexpr uintptr_t m_flElasticity = 0x300;
		inline constexpr uintptr_t m_flShadowCastDistance = 0x304;
		inline constexpr uintptr_t m_flSimulationTime = 0xB0;
		inline constexpr uintptr_t m_hEffectEntity = 0x748;
		inline constexpr uintptr_t m_hOwnerEntity = 0x744;
		inline constexpr uintptr_t m_iCreationID = 0x16B4;
		inline constexpr uintptr_t m_iGModFlags = 0x938;
		inline constexpr uintptr_t m_iHealth = 0xD8;
		inline constexpr uintptr_t m_iMapCreatedID = 0x16B8;
		inline constexpr uintptr_t m_iMaxHealth = 0xDC;
		inline constexpr uintptr_t m_iParentAttachment = 0x1FE;
		inline constexpr uintptr_t m_iTeamNum = 0xE4;
		inline constexpr uintptr_t m_iTextureFrameIndex = 0x738;
		inline constexpr uintptr_t m_nModelIndex = 0xD4;
		inline constexpr uintptr_t m_nRenderFX = 0x8C;
		inline constexpr uintptr_t m_nRenderMode = 0xC2;
		inline constexpr uintptr_t m_spawnflags = 0x934;
		inline constexpr uintptr_t m_takedamage = 0xD6;
		inline constexpr uintptr_t m_ubInterpolationFrame = 0xC0;
		inline constexpr uintptr_t m_vecOrigin = 0x438;
		inline constexpr uintptr_t m_vecVelocity_0 = 0x150;
		inline constexpr uintptr_t m_vecVelocity_1 = 0x154;
		inline constexpr uintptr_t m_vecVelocity_2 = 0x158;
		inline constexpr uintptr_t movecollide = 0x0;
		inline constexpr uintptr_t moveparent = 0x21C;
		inline constexpr uintptr_t movetype = 0x0;
	}

	namespace DT_BaseFlex {
		inline constexpr uintptr_t m_blinktoggle = 0x1E90;
		inline constexpr uintptr_t m_vecLean = 0x2050;
		inline constexpr uintptr_t m_vecShift = 0x20B0;
		inline constexpr uintptr_t m_vecViewOffset_0 = 0x144;
		inline constexpr uintptr_t m_vecViewOffset_1 = 0x148;
		inline constexpr uintptr_t m_vecViewOffset_2 = 0x14C;
		inline constexpr uintptr_t m_viewtarget = 0x1C60;
	}

	namespace DT_BaseGrenade {
		inline constexpr uintptr_t m_DmgRadius = 0x1BDC;
		inline constexpr uintptr_t m_bIsLive = 0x1BD9;
		inline constexpr uintptr_t m_fFlags = 0x450;
		inline constexpr uintptr_t m_flDamage = 0x1BF8;
		inline constexpr uintptr_t m_hThrower = 0x1C0C;
		inline constexpr uintptr_t m_vecVelocity = 0x150;
	}

	namespace DT_BaseHelicopter {
		inline constexpr uintptr_t m_flStartupTime = 0x2938;
	}

	namespace DT_BasePlayer {
		inline constexpr uintptr_t m_bUseWeaponsInVehicle = 0x2D43;
		inline constexpr uintptr_t m_fFlags = 0x450;
		inline constexpr uintptr_t m_flFOVTime = 0x2C28;
		inline constexpr uintptr_t m_flMaxspeed = 0x2CAC;
		inline constexpr uintptr_t m_hColorCorrectionCtrl = 0x34F8;
		inline constexpr uintptr_t m_hObserverTarget = 0x2C78;
		inline constexpr uintptr_t m_hUseEntity = 0x2CA8;
		inline constexpr uintptr_t m_hVehicle = 0x2CA0;
		inline constexpr uintptr_t m_hViewModel_0[] = {
			0x0,
			0x2D78
		};
		inline constexpr uintptr_t m_hViewModel_1 = 0x4;
		inline constexpr uintptr_t m_hViewModel_2 = 0x8;
		inline constexpr uintptr_t m_hZoomOwner = 0x2C34;
		inline constexpr uintptr_t m_iDefaultFOV = 0x2C30;
		inline constexpr uintptr_t m_iFOV = 0x2C20;
		inline constexpr uintptr_t m_iFOVStart = 0x2C24;
		inline constexpr uintptr_t m_iObserverMode = 0x2C74;
		inline constexpr uintptr_t m_lifeState = 0xD7;
	}

	namespace DT_BasePropDoor {
		inline constexpr uintptr_t m_bLocked = 0x1BF9;
		inline constexpr uintptr_t m_eDoorState = 0x1BFC;
	}

	namespace DT_BaseToggle {
		inline constexpr uintptr_t m_flMoveTargetTime = 0x16E4;
		inline constexpr uintptr_t m_movementType = 0x16E0;
		inline constexpr uintptr_t m_vecFinalDest = 0x16D4;
	}

	namespace DT_BaseTrigger {
		inline constexpr uintptr_t m_bClientSidePredicted = 0x16F0;
		inline constexpr uintptr_t m_spawnflags = 0x934;
	}

	namespace DT_BaseViewModel {
		inline constexpr uintptr_t m_fEffects = 0xC4;
		inline constexpr uintptr_t m_flPlaybackRate = 0x170C;
		inline constexpr uintptr_t m_flPoseParameter_0[] = {
			0x0,
			0x1814
		};
		inline constexpr uintptr_t m_flPoseParameter_1 = 0x4;
		inline constexpr uintptr_t m_flPoseParameter_10 = 0x28;
		inline constexpr uintptr_t m_flPoseParameter_11 = 0x2C;
		inline constexpr uintptr_t m_flPoseParameter_12 = 0x30;
		inline constexpr uintptr_t m_flPoseParameter_13 = 0x34;
		inline constexpr uintptr_t m_flPoseParameter_14 = 0x38;
		inline constexpr uintptr_t m_flPoseParameter_15 = 0x3C;
		inline constexpr uintptr_t m_flPoseParameter_16 = 0x40;
		inline constexpr uintptr_t m_flPoseParameter_17 = 0x44;
		inline constexpr uintptr_t m_flPoseParameter_18 = 0x48;
		inline constexpr uintptr_t m_flPoseParameter_19 = 0x4C;
		inline constexpr uintptr_t m_flPoseParameter_2 = 0x8;
		inline constexpr uintptr_t m_flPoseParameter_20 = 0x50;
		inline constexpr uintptr_t m_flPoseParameter_21 = 0x54;
		inline constexpr uintptr_t m_flPoseParameter_22 = 0x58;
		inline constexpr uintptr_t m_flPoseParameter_23 = 0x5C;
		inline constexpr uintptr_t m_flPoseParameter_3 = 0xC;
		inline constexpr uintptr_t m_flPoseParameter_4 = 0x10;
		inline constexpr uintptr_t m_flPoseParameter_5 = 0x14;
		inline constexpr uintptr_t m_flPoseParameter_6 = 0x18;
		inline constexpr uintptr_t m_flPoseParameter_7 = 0x1C;
		inline constexpr uintptr_t m_flPoseParameter_8 = 0x20;
		inline constexpr uintptr_t m_flPoseParameter_9 = 0x24;
		inline constexpr uintptr_t m_hOwner = 0x1BF0;
		inline constexpr uintptr_t m_hWeapon = 0x1C14;
		inline constexpr uintptr_t m_nAnimationParity = 0x1C04;
		inline constexpr uintptr_t m_nBody = 0x16D4;
		inline constexpr uintptr_t m_nModelIndex = 0xD4;
		inline constexpr uintptr_t m_nMuzzleFlashParity = 0x1AD8;
		inline constexpr uintptr_t m_nNewSequenceParity = 0x19D0;
		inline constexpr uintptr_t m_nResetEventsParity = 0x19D4;
		inline constexpr uintptr_t m_nSequence = 0x19FC;
		inline constexpr uintptr_t m_nSkin = 0x16D0;
		inline constexpr uintptr_t m_nViewModelIndex = 0x1BEC;
	}

	namespace DT_Beam {
		inline constexpr uintptr_t m_clrRender = 0x90;
		inline constexpr uintptr_t m_fAmplitude = 0x1748;
		inline constexpr uintptr_t m_fEndWidth = 0x173C;
		inline constexpr uintptr_t m_fFadeLength = 0x1740;
		inline constexpr uintptr_t m_fHaloScale = 0x1744;
		inline constexpr uintptr_t m_fSpeed = 0x1750;
		inline constexpr uintptr_t m_fStartFrame = 0x174C;
		inline constexpr uintptr_t m_fWidth = 0x1738;
		inline constexpr uintptr_t m_flFrame = 0x1758;
		inline constexpr uintptr_t m_flFrameRate = 0x16C0;
		inline constexpr uintptr_t m_flHDRColorScale = 0x16C4;
		inline constexpr uintptr_t m_nBeamFlags = 0x16E4;
		inline constexpr uintptr_t m_nBeamType = 0x16E0;
		inline constexpr uintptr_t m_nHaloIndex = 0x16DC;
		inline constexpr uintptr_t m_nMinDXLevel = 0x1754;
		inline constexpr uintptr_t m_nModelIndex = 0xD4;
		inline constexpr uintptr_t m_nNumBeamEnts = 0x16D4;
		inline constexpr uintptr_t m_nRenderFX = 0x8C;
		inline constexpr uintptr_t m_nRenderMode = 0xC2;
		inline constexpr uintptr_t m_vecEndPos = 0x175C;
		inline constexpr uintptr_t m_vecOrigin = 0x438;
		inline constexpr uintptr_t moveparent = 0x21C;
	}

	namespace DT_BeamPredictableId {
		inline constexpr uintptr_t beampredictable_id_m_PredictableID = 0xE8;
		inline constexpr uintptr_t beampredictable_id_m_bIsPlayerSimulated = 0x734;
	}

	namespace DT_BeamSpotlight {
		inline constexpr uintptr_t m_bHasDynamicLight = 0x16CD;
		inline constexpr uintptr_t m_bSpotlightOn = 0x16CC;
		inline constexpr uintptr_t m_flHDRColorScale = 0x16D8;
		inline constexpr uintptr_t m_flRotationSpeed = 0x16C8;
		inline constexpr uintptr_t m_flSpotlightGoalWidth = 0x16D4;
		inline constexpr uintptr_t m_flSpotlightMaxLength = 0x16D0;
		inline constexpr uintptr_t m_nHaloIndex = 0x16C0;
		inline constexpr uintptr_t m_nRotationAxis = 0x16C4;
	}

	namespace DT_BoneFollower {
		inline constexpr uintptr_t m_modelIndex = 0x16C0;
		inline constexpr uintptr_t m_solidIndex = 0x16C4;
	}

	namespace DT_BreakableSurface {
		inline constexpr uintptr_t m_bIsBroken = 0x16F0;
		inline constexpr uintptr_t m_flPanelHeight = 0x16D4;
		inline constexpr uintptr_t m_flPanelWidth = 0x16D0;
		inline constexpr uintptr_t m_nNumHigh = 0x16CC;
		inline constexpr uintptr_t m_nNumWide = 0x16C8;
		inline constexpr uintptr_t m_nSurfaceType = 0x16F4;
		inline constexpr uintptr_t m_vCorner = 0x16E4;
		inline constexpr uintptr_t m_vNormal = 0x16D8;
	}

	namespace DT_CFish {
		inline constexpr uintptr_t m_angle = 0x1C2C;
		inline constexpr uintptr_t m_lifeState = 0xD7;
		inline constexpr uintptr_t m_nModelIndex = 0xD4;
		inline constexpr uintptr_t m_poolOrigin = 0x1C34;
		inline constexpr uintptr_t m_waterLevel = 0x1C40;
		inline constexpr uintptr_t m_x = 0x1C1C;
		inline constexpr uintptr_t m_y = 0x1C20;
		inline constexpr uintptr_t m_z = 0x1C24;
	}

	namespace DT_CPropJeepEpisodic {
		inline constexpr uintptr_t m_iNumRadarContacts = 0x1D60;
		inline constexpr uintptr_t m_iRadarContactType_0[] = {
			0x0,
			0x1E84
		};
		inline constexpr uintptr_t m_iRadarContactType_1 = 0x4;
		inline constexpr uintptr_t m_iRadarContactType_10 = 0x28;
		inline constexpr uintptr_t m_iRadarContactType_11 = 0x2C;
		inline constexpr uintptr_t m_iRadarContactType_12 = 0x30;
		inline constexpr uintptr_t m_iRadarContactType_13 = 0x34;
		inline constexpr uintptr_t m_iRadarContactType_14 = 0x38;
		inline constexpr uintptr_t m_iRadarContactType_15 = 0x3C;
		inline constexpr uintptr_t m_iRadarContactType_16 = 0x40;
		inline constexpr uintptr_t m_iRadarContactType_17 = 0x44;
		inline constexpr uintptr_t m_iRadarContactType_18 = 0x48;
		inline constexpr uintptr_t m_iRadarContactType_19 = 0x4C;
		inline constexpr uintptr_t m_iRadarContactType_2 = 0x8;
		inline constexpr uintptr_t m_iRadarContactType_20 = 0x50;
		inline constexpr uintptr_t m_iRadarContactType_21 = 0x54;
		inline constexpr uintptr_t m_iRadarContactType_22 = 0x58;
		inline constexpr uintptr_t m_iRadarContactType_23 = 0x5C;
		inline constexpr uintptr_t m_iRadarContactType_3 = 0xC;
		inline constexpr uintptr_t m_iRadarContactType_4 = 0x10;
		inline constexpr uintptr_t m_iRadarContactType_5 = 0x14;
		inline constexpr uintptr_t m_iRadarContactType_6 = 0x18;
		inline constexpr uintptr_t m_iRadarContactType_7 = 0x1C;
		inline constexpr uintptr_t m_iRadarContactType_8 = 0x20;
		inline constexpr uintptr_t m_iRadarContactType_9 = 0x24;
		inline constexpr uintptr_t m_vecRadarContactPos_0[] = {
			0x0,
			0x1D64
		};
		inline constexpr uintptr_t m_vecRadarContactPos_1 = 0xC;
		inline constexpr uintptr_t m_vecRadarContactPos_10 = 0x78;
		inline constexpr uintptr_t m_vecRadarContactPos_11 = 0x84;
		inline constexpr uintptr_t m_vecRadarContactPos_12 = 0x90;
		inline constexpr uintptr_t m_vecRadarContactPos_13 = 0x9C;
		inline constexpr uintptr_t m_vecRadarContactPos_14 = 0xA8;
		inline constexpr uintptr_t m_vecRadarContactPos_15 = 0xB4;
		inline constexpr uintptr_t m_vecRadarContactPos_16 = 0xC0;
		inline constexpr uintptr_t m_vecRadarContactPos_17 = 0xCC;
		inline constexpr uintptr_t m_vecRadarContactPos_18 = 0xD8;
		inline constexpr uintptr_t m_vecRadarContactPos_19 = 0xE4;
		inline constexpr uintptr_t m_vecRadarContactPos_2 = 0x18;
		inline constexpr uintptr_t m_vecRadarContactPos_20 = 0xF0;
		inline constexpr uintptr_t m_vecRadarContactPos_21 = 0xFC;
		inline constexpr uintptr_t m_vecRadarContactPos_22 = 0x108;
		inline constexpr uintptr_t m_vecRadarContactPos_23 = 0x114;
		inline constexpr uintptr_t m_vecRadarContactPos_3 = 0x24;
		inline constexpr uintptr_t m_vecRadarContactPos_4 = 0x30;
		inline constexpr uintptr_t m_vecRadarContactPos_5 = 0x3C;
		inline constexpr uintptr_t m_vecRadarContactPos_6 = 0x48;
		inline constexpr uintptr_t m_vecRadarContactPos_7 = 0x54;
		inline constexpr uintptr_t m_vecRadarContactPos_8 = 0x60;
		inline constexpr uintptr_t m_vecRadarContactPos_9 = 0x6C;
	}

	namespace DT_CitadelEnergyCore {
		inline constexpr uintptr_t m_flDuration = 0x16C8;
		inline constexpr uintptr_t m_flScale = 0x16C0;
		inline constexpr uintptr_t m_flStartTime = 0x16CC;
		inline constexpr uintptr_t m_nState = 0x16C4;
		inline constexpr uintptr_t m_spawnflags = 0x16D0;
	}

	namespace DT_CollisionProperty {
		inline constexpr uintptr_t m_Collision_m_nSolidType = 0x279;
		inline constexpr uintptr_t m_Collision_m_nSurroundType = 0x278;
		inline constexpr uintptr_t m_Collision_m_triggerBloat = 0x27A;
		inline constexpr uintptr_t m_Collision_m_usSolidFlags = 0x274;
		inline constexpr uintptr_t m_Collision_m_vecMaxs = 0x264;
		inline constexpr uintptr_t m_Collision_m_vecMaxsPreScaled = 0x24C;
		inline constexpr uintptr_t m_Collision_m_vecMins = 0x258;
		inline constexpr uintptr_t m_Collision_m_vecMinsPreScaled = 0x240;
		inline constexpr uintptr_t m_Collision_m_vecSpecifiedSurroundingMaxs = 0x2A0;
		inline constexpr uintptr_t m_Collision_m_vecSpecifiedSurroundingMaxsPreScaled = 0x288;
		inline constexpr uintptr_t m_Collision_m_vecSpecifiedSurroundingMins = 0x294;
		inline constexpr uintptr_t m_Collision_m_vecSpecifiedSurroundingMinsPreScaled = 0x27C;
	}

	namespace DT_ColorCorrection {
		inline constexpr uintptr_t m_bClientSide = 0x17E9;
		inline constexpr uintptr_t m_bEnabled = 0x17E8;
		inline constexpr uintptr_t m_bExclusive = 0x17EA;
		inline constexpr uintptr_t m_flCurWeight = 0x16E0;
		inline constexpr uintptr_t m_flFadeInDuration = 0x16D4;
		inline constexpr uintptr_t m_flFadeOutDuration = 0x16D8;
		inline constexpr uintptr_t m_flMaxWeight = 0x16DC;
		inline constexpr uintptr_t m_maxFalloff = 0x16D0;
		inline constexpr uintptr_t m_minFalloff = 0x16CC;
		inline constexpr uintptr_t m_netLookupFilename = 0x16E4;
		inline constexpr uintptr_t m_vecOrigin = 0x16C0;
	}

	namespace DT_ColorCorrectionVolume {
		inline constexpr uintptr_t m_FadeDuration = 0x1710;
		inline constexpr uintptr_t m_MaxWeight = 0x170C;
		inline constexpr uintptr_t m_Weight = 0x1714;
		inline constexpr uintptr_t m_bEnabled = 0x1708;
		inline constexpr uintptr_t m_lookupFilename = 0x1718;
		inline constexpr uintptr_t m_nModelIndex = 0xD4;
	}

	namespace DT_CombineGunship {
		inline constexpr uintptr_t m_vecHitPos = 0x2998;
	}

	namespace DT_Corpse {
		inline constexpr uintptr_t m_nReferencePlayer = 0x1BD8;
	}

	namespace DT_DetailController {
		inline constexpr uintptr_t m_flFadeEndDist = 0x16C4;
		inline constexpr uintptr_t m_flFadeStartDist = 0x16C0;
	}

	namespace DT_DustTrail {
		inline constexpr uintptr_t m_Color = 0x17FC;
		inline constexpr uintptr_t m_EndSize = 0x182C;
		inline constexpr uintptr_t m_MaxDirectedSpeed = 0x1824;
		inline constexpr uintptr_t m_MaxSpeed = 0x181C;
		inline constexpr uintptr_t m_MinDirectedSpeed = 0x1820;
		inline constexpr uintptr_t m_MinSpeed = 0x1818;
		inline constexpr uintptr_t m_Opacity = 0x1808;
		inline constexpr uintptr_t m_ParticleLifetime = 0x180C;
		inline constexpr uintptr_t m_SpawnRadius = 0x1830;
		inline constexpr uintptr_t m_SpawnRate = 0x17F8;
		inline constexpr uintptr_t m_StartSize = 0x1828;
		inline constexpr uintptr_t m_StopEmitTime = 0x1814;
		inline constexpr uintptr_t m_bEmit = 0x1840;
	}

	namespace DT_DynamicLight {
		inline constexpr uintptr_t m_Exponent = 0x16C8;
		inline constexpr uintptr_t m_Flags = 0x16C0;
		inline constexpr uintptr_t m_InnerAngle = 0x16CC;
		inline constexpr uintptr_t m_LightStyle = 0x16C1;
		inline constexpr uintptr_t m_OuterAngle = 0x16D0;
		inline constexpr uintptr_t m_Radius = 0x16C4;
		inline constexpr uintptr_t m_SpotRadius = 0x16D4;
	}

	namespace DT_DynamicProp {
		inline constexpr uintptr_t m_bUseHitboxesForRenderBox = 0x1BD8;
	}

	namespace DT_EffectData {
		inline constexpr uintptr_t m_EffectData_entindex = 0x20;
		inline constexpr uintptr_t m_EffectData_m_ControlPoint1_m_eParticleAttachment = 0x98;
		inline constexpr uintptr_t m_EffectData_m_ControlPoint1_m_vecOffset_0 = 0x9C;
		inline constexpr uintptr_t m_EffectData_m_ControlPoint1_m_vecOffset_1 = 0xA0;
		inline constexpr uintptr_t m_EffectData_m_ControlPoint1_m_vecOffset_2 = 0xA4;
		inline constexpr uintptr_t m_EffectData_m_CustomColors_m_vecColor1 = 0x7C;
		inline constexpr uintptr_t m_EffectData_m_CustomColors_m_vecColor2 = 0x88;
		inline constexpr uintptr_t m_EffectData_m_bAllowOverride = 0xA8;
		inline constexpr uintptr_t m_EffectData_m_bControlPoint1 = 0x94;
		inline constexpr uintptr_t m_EffectData_m_bCustomColors = 0x79;
		inline constexpr uintptr_t m_EffectData_m_fFlags = 0x50;
		inline constexpr uintptr_t m_EffectData_m_flMagnitude = 0x5C;
		inline constexpr uintptr_t m_EffectData_m_flRadius = 0x60;
		inline constexpr uintptr_t m_EffectData_m_flScale = 0x58;
		inline constexpr uintptr_t m_EffectData_m_iEffectName = 0xAC;
		inline constexpr uintptr_t m_EffectData_m_nAttachmentIndex = 0x64;
		inline constexpr uintptr_t m_EffectData_m_nColor = 0x78;
		inline constexpr uintptr_t m_EffectData_m_nDamageType = 0x70;
		inline constexpr uintptr_t m_EffectData_m_nHitBox = 0x74;
		inline constexpr uintptr_t m_EffectData_m_nMaterial = 0x6C;
		inline constexpr uintptr_t m_EffectData_m_nSurfaceProp = 0x68;
		inline constexpr uintptr_t m_EffectData_m_vAngles = 0x44;
		inline constexpr uintptr_t m_EffectData_m_vNormal = 0x38;
		inline constexpr uintptr_t m_EffectData_m_vOrigin_0 = 0x20;
		inline constexpr uintptr_t m_EffectData_m_vOrigin_1 = 0x24;
		inline constexpr uintptr_t m_EffectData_m_vOrigin_2 = 0x28;
		inline constexpr uintptr_t m_EffectData_m_vStart_0 = 0x2C;
		inline constexpr uintptr_t m_EffectData_m_vStart_1 = 0x30;
		inline constexpr uintptr_t m_EffectData_m_vStart_2 = 0x34;
	}

	namespace DT_Embers {
		inline constexpr uintptr_t m_bEmit = 0x16CC;
		inline constexpr uintptr_t m_nDensity = 0x16C0;
		inline constexpr uintptr_t m_nLifetime = 0x16C4;
		inline constexpr uintptr_t m_nSpeed = 0x16C8;
	}

	namespace DT_EntityDissolve {
		inline constexpr uintptr_t m_flFadeInLength = 0x16E0;
		inline constexpr uintptr_t m_flFadeInStart = 0x16DC;
		inline constexpr uintptr_t m_flFadeOutLength = 0x16D0;
		inline constexpr uintptr_t m_flFadeOutModelLength = 0x16D8;
		inline constexpr uintptr_t m_flFadeOutModelStart = 0x16D4;
		inline constexpr uintptr_t m_flFadeOutStart = 0x16CC;
		inline constexpr uintptr_t m_flStartTime = 0x16C8;
		inline constexpr uintptr_t m_nDissolveType = 0x16E4;
		inline constexpr uintptr_t m_nMagnitude = 0x1704;
		inline constexpr uintptr_t m_vDissolverOrigin = 0x16F8;
	}

	namespace DT_EntityFlame {
		inline constexpr uintptr_t m_hEntAttached = 0x16C8;
	}

	namespace DT_EntityParticleTrail {
		inline constexpr uintptr_t m_hConstraintEntity = 0x1818;
		inline constexpr uintptr_t m_iMaterialName = 0x17F0;
	}

	namespace DT_EntityParticleTrailInfo {
		inline constexpr uintptr_t m_Info_m_flEndSize = 0x1810;
		inline constexpr uintptr_t m_Info_m_flLifetime = 0x1808;
		inline constexpr uintptr_t m_Info_m_flStartSize = 0x180C;
	}

	namespace DT_EnvAmbientLight {
		inline constexpr uintptr_t m_vecColor = 0x17E8;
	}

	namespace DT_EnvHeadcrabCanister {
		inline constexpr uintptr_t m_bLanded = 0x1C58;
	}

	namespace DT_EnvHeadcrabCanisterShared {
		inline constexpr uintptr_t m_Shared_m_bInSkybox = 0x1C50;
		inline constexpr uintptr_t m_Shared_m_bLaunchedFromWithinWorld = 0x1C2C;
		inline constexpr uintptr_t m_Shared_m_flFlightSpeed = 0x1C14;
		inline constexpr uintptr_t m_Shared_m_flFlightTime = 0x1C10;
		inline constexpr uintptr_t m_Shared_m_flHorizSpeed = 0x1C28;
		inline constexpr uintptr_t m_Shared_m_flInitialZSpeed = 0x1C20;
		inline constexpr uintptr_t m_Shared_m_flLaunchTime = 0x1C18;
		inline constexpr uintptr_t m_Shared_m_flSkyboxScale = 0x1C4C;
		inline constexpr uintptr_t m_Shared_m_flWorldEnterTime = 0x1C3C;
		inline constexpr uintptr_t m_Shared_m_flZAcceleration = 0x1C24;
		inline constexpr uintptr_t m_Shared_m_vecDirection = 0x1BF8;
		inline constexpr uintptr_t m_Shared_m_vecEnterWorldPosition = 0x1BEC;
		inline constexpr uintptr_t m_Shared_m_vecParabolaDirection = 0x1C30;
		inline constexpr uintptr_t m_Shared_m_vecSkyboxOrigin = 0x1C40;
		inline constexpr uintptr_t m_Shared_m_vecStartAngles = 0x1C04;
		inline constexpr uintptr_t m_Shared_m_vecStartPosition = 0x1BE0;
	}

	namespace DT_EnvParticleScript {
		inline constexpr uintptr_t m_flSequenceScale = 0x1D08;
	}

	namespace DT_EnvProjectedTexture {
		inline constexpr uintptr_t m_LinearFloatLightColor = 0x16D4;
		inline constexpr uintptr_t m_SpotlightTextureName = 0x16E8;
		inline constexpr uintptr_t m_bCameraSpace = 0x16D3;
		inline constexpr uintptr_t m_bEnableShadows = 0x16D0;
		inline constexpr uintptr_t m_bLightOnlyTarget = 0x16D1;
		inline constexpr uintptr_t m_bLightWorld = 0x16D2;
		inline constexpr uintptr_t m_bState = 0x16C8;
		inline constexpr uintptr_t m_flFarZ = 0x16E4;
		inline constexpr uintptr_t m_flLightFOV = 0x16CC;
		inline constexpr uintptr_t m_flNearZ = 0x16E0;
		inline constexpr uintptr_t m_hTargetEntity = 0x16C4;
		inline constexpr uintptr_t m_iStyle = 0x17F8;
		inline constexpr uintptr_t m_nShadowQuality = 0x17F0;
		inline constexpr uintptr_t m_nSpotlightTextureFrame = 0x17EC;
	}

	namespace DT_EnvScreenEffect {
		inline constexpr uintptr_t m_flDuration = 0x16C0;
		inline constexpr uintptr_t m_nType = 0x16C4;
	}

	namespace DT_EnvScreenOverlay {
		inline constexpr uintptr_t m_bIsActive = 0x20E8;
		inline constexpr uintptr_t m_flOverlayTimes_0[] = {
			0x0,
			0x20B8
		};
		inline constexpr uintptr_t m_flOverlayTimes_1 = 0x4;
		inline constexpr uintptr_t m_flOverlayTimes_2 = 0x8;
		inline constexpr uintptr_t m_flOverlayTimes_3 = 0xC;
		inline constexpr uintptr_t m_flOverlayTimes_4 = 0x10;
		inline constexpr uintptr_t m_flOverlayTimes_5 = 0x14;
		inline constexpr uintptr_t m_flOverlayTimes_6 = 0x18;
		inline constexpr uintptr_t m_flOverlayTimes_7 = 0x1C;
		inline constexpr uintptr_t m_flOverlayTimes_8 = 0x20;
		inline constexpr uintptr_t m_flOverlayTimes_9 = 0x24;
		inline constexpr uintptr_t m_flStartTime = 0x20E0;
		inline constexpr uintptr_t m_iDesiredOverlay = 0x20E4;
		inline constexpr uintptr_t m_iszOverlayNames_0[] = {
			0x0,
			0x16C0
		};
		inline constexpr uintptr_t m_iszOverlayNames_1 = 0xFF;
		inline constexpr uintptr_t m_iszOverlayNames_2 = 0x1FE;
		inline constexpr uintptr_t m_iszOverlayNames_3 = 0x2FD;
		inline constexpr uintptr_t m_iszOverlayNames_4 = 0x3FC;
		inline constexpr uintptr_t m_iszOverlayNames_5 = 0x4FB;
		inline constexpr uintptr_t m_iszOverlayNames_6 = 0x5FA;
		inline constexpr uintptr_t m_iszOverlayNames_7 = 0x6F9;
		inline constexpr uintptr_t m_iszOverlayNames_8 = 0x7F8;
		inline constexpr uintptr_t m_iszOverlayNames_9 = 0x8F7;
	}

	namespace DT_EnvStarfield {
		inline constexpr uintptr_t m_bOn = 0x16C8;
		inline constexpr uintptr_t m_flDensity = 0x16CC;
	}

	namespace DT_EnvTonemapController {
		inline constexpr uintptr_t m_bUseCustomAutoExposureMax = 0x16C1;
		inline constexpr uintptr_t m_bUseCustomAutoExposureMin = 0x16C0;
		inline constexpr uintptr_t m_bUseCustomBloomScale = 0x16C2;
		inline constexpr uintptr_t m_flCustomAutoExposureMax = 0x16C8;
		inline constexpr uintptr_t m_flCustomAutoExposureMin = 0x16C4;
		inline constexpr uintptr_t m_flCustomBloomScale = 0x16CC;
		inline constexpr uintptr_t m_flCustomBloomScaleMinimum = 0x16D0;
	}

	namespace DT_EnvWindShared {
		inline constexpr uintptr_t m_EnvWindShared_m_flGustDuration = 0x16EC;
		inline constexpr uintptr_t m_EnvWindShared_m_flInitialWindSpeed = 0x1734;
		inline constexpr uintptr_t m_EnvWindShared_m_flMaxGustDelay = 0x16E8;
		inline constexpr uintptr_t m_EnvWindShared_m_flMinGustDelay = 0x16E4;
		inline constexpr uintptr_t m_EnvWindShared_m_flStartTime = 0x16C8;
		inline constexpr uintptr_t m_EnvWindShared_m_iGustDirChange = 0x16F0;
		inline constexpr uintptr_t m_EnvWindShared_m_iInitialWindDir = 0x1730;
		inline constexpr uintptr_t m_EnvWindShared_m_iMaxGust = 0x16E0;
		inline constexpr uintptr_t m_EnvWindShared_m_iMaxWind = 0x16D4;
		inline constexpr uintptr_t m_EnvWindShared_m_iMinGust = 0x16DC;
		inline constexpr uintptr_t m_EnvWindShared_m_iMinWind = 0x16D0;
		inline constexpr uintptr_t m_EnvWindShared_m_iWindSeed = 0x16CC;
		inline constexpr uintptr_t m_EnvWindShared_m_windRadius = 0x16D8;
	}

	namespace DT_FireSmoke {
		inline constexpr uintptr_t m_flScale = 0x16C4;
		inline constexpr uintptr_t m_flScaleTime = 0x16C8;
		inline constexpr uintptr_t m_flStartScale = 0x16C0;
		inline constexpr uintptr_t m_nFlags = 0x16CC;
		inline constexpr uintptr_t m_nFlameFromAboveModelIndex = 0x16D4;
		inline constexpr uintptr_t m_nFlameModelIndex = 0x16D0;
	}

	namespace DT_FireTrail {
		inline constexpr uintptr_t m_flLifetime = 0x17FC;
		inline constexpr uintptr_t m_nAttachment = 0x17F8;
	}

	namespace DT_Flare {
		inline constexpr uintptr_t m_bLight = 0x2A88;
		inline constexpr uintptr_t m_bPropFlare = 0x2A8A;
		inline constexpr uintptr_t m_bSmoke = 0x2A89;
		inline constexpr uintptr_t m_flScale = 0x2A84;
		inline constexpr uintptr_t m_flTimeBurnOut = 0x2A80;
	}

	namespace DT_FleshEffectTarget {
		inline constexpr uintptr_t m_flRadius = 0x16C0;
		inline constexpr uintptr_t m_flScaleTime = 0x16CC;
	}

	namespace DT_FlexManipulate {
		inline constexpr uintptr_t m_EyesLocalTarget = 0x1844;
		inline constexpr uintptr_t m_flexScale = 0x1840;
	}

	namespace DT_FogController {
		inline constexpr uintptr_t m_fog_HDRColorScale = 0x1714;
		inline constexpr uintptr_t m_fog_blend = 0x1711;
		inline constexpr uintptr_t m_fog_colorPrimary = 0x16D4;
		inline constexpr uintptr_t m_fog_colorPrimaryHDR = 0x16DC;
		inline constexpr uintptr_t m_fog_colorPrimaryLerpTo = 0x16E4;
		inline constexpr uintptr_t m_fog_colorSecondary = 0x16D8;
		inline constexpr uintptr_t m_fog_colorSecondaryHDR = 0x16E0;
		inline constexpr uintptr_t m_fog_colorSecondaryLerpTo = 0x16E8;
		inline constexpr uintptr_t m_fog_dirPrimary = 0x16C8;
		inline constexpr uintptr_t m_fog_duration = 0x170C;
		inline constexpr uintptr_t m_fog_enable = 0x1710;
		inline constexpr uintptr_t m_fog_end = 0x16F0;
		inline constexpr uintptr_t m_fog_endLerpTo = 0x1700;
		inline constexpr uintptr_t m_fog_farz = 0x16F4;
		inline constexpr uintptr_t m_fog_lerptime = 0x1708;
		inline constexpr uintptr_t m_fog_maxdensity = 0x16F8;
		inline constexpr uintptr_t m_fog_maxdensityLerpTo = 0x1704;
		inline constexpr uintptr_t m_fog_radial = 0x1712;
		inline constexpr uintptr_t m_fog_start = 0x16EC;
		inline constexpr uintptr_t m_fog_startLerpTo = 0x16FC;
	}

	namespace DT_FuncAreaPortalWindow {
		inline constexpr uintptr_t m_flFadeDist = 0x16C4;
		inline constexpr uintptr_t m_flFadeStartDist = 0x16C0;
		inline constexpr uintptr_t m_flTranslucencyLimit = 0x16C8;
		inline constexpr uintptr_t m_iBackgroundModelIndex = 0x16CC;
	}

	namespace DT_FuncConveyor {
		inline constexpr uintptr_t m_flConveyorSpeed = 0x16C0;
	}

	namespace DT_FuncLadder {
		inline constexpr uintptr_t m_bFakeLadder = 0x1709;
		inline constexpr uintptr_t m_vecLadderDir = 0x16C0;
		inline constexpr uintptr_t m_vecPlayerMountPositionBottom = 0x16FC;
		inline constexpr uintptr_t m_vecPlayerMountPositionTop = 0x16F0;
	}

	namespace DT_FuncOccluder {
		inline constexpr uintptr_t m_bActive = 0x16C4;
		inline constexpr uintptr_t m_nOccluderIndex = 0x16C0;
	}

	namespace DT_FuncRotating {
		inline constexpr uintptr_t m_angRotation_0 = 0x444;
		inline constexpr uintptr_t m_angRotation_1 = 0x448;
		inline constexpr uintptr_t m_angRotation_2 = 0x44C;
		inline constexpr uintptr_t m_flSimulationTime = 0xB0;
		inline constexpr uintptr_t m_vecOrigin = 0x438;
	}

	namespace DT_FuncSmokeVolume {
		inline constexpr uintptr_t m_Color1 = 0x17F8;
		inline constexpr uintptr_t m_Color2 = 0x17FC;
		inline constexpr uintptr_t m_Density = 0x1914;
		inline constexpr uintptr_t m_DensityRampSpeed = 0x1908;
		inline constexpr uintptr_t m_MaterialName = 0x1800;
		inline constexpr uintptr_t m_MovementSpeed = 0x1910;
		inline constexpr uintptr_t m_ParticleDrawWidth = 0x1900;
		inline constexpr uintptr_t m_ParticleSpacingDistance = 0x1904;
		inline constexpr uintptr_t m_RotationSpeed = 0x190C;
		inline constexpr uintptr_t m_spawnflags = 0x1918;
	}

	namespace DT_Func_Dust {
		inline constexpr uintptr_t m_Color = 0x16C0;
		inline constexpr uintptr_t m_DistMax = 0x16DC;
		inline constexpr uintptr_t m_DustFlags = 0x16E8;
		inline constexpr uintptr_t m_FallSpeed = 0x16E0;
		inline constexpr uintptr_t m_LifetimeMax = 0x16D8;
		inline constexpr uintptr_t m_LifetimeMin = 0x16D4;
		inline constexpr uintptr_t m_SpawnRate = 0x16C4;
		inline constexpr uintptr_t m_SpeedMax = 0x16D0;
		inline constexpr uintptr_t m_bAffectedByWind = 0x16E4;
		inline constexpr uintptr_t m_flSizeMax = 0x16CC;
		inline constexpr uintptr_t m_flSizeMin = 0x16C8;
		inline constexpr uintptr_t m_nModelIndex = 0xD4;
	}

	namespace DT_Func_LOD {
		inline constexpr uintptr_t m_fDisappearMaxDist = 0x16C4;
		inline constexpr uintptr_t m_fDisappearMinDist = 0x16C0;
	}

	namespace DT_GMODRules {
		inline constexpr uintptr_t gmod_gamerules_data_m_fTimeScale = 0x40;
		inline constexpr uintptr_t gmod_gamerules_data_m_iSkillLevel = 0x44;
	}

	namespace DT_GMOD_Player {
		inline constexpr uintptr_t m_Driving = 0x3888;
		inline constexpr uintptr_t m_DrivingMode = 0x388C;
		inline constexpr uintptr_t m_Hands = 0x3890;
		inline constexpr uintptr_t m_HoveredWidget = 0x3880;
		inline constexpr uintptr_t m_JumpPower = 0x38BC;
		inline constexpr uintptr_t m_PlayerClass = 0x3894;
		inline constexpr uintptr_t m_PlayerColor = 0x389C;
		inline constexpr uintptr_t m_PressedWidget = 0x3884;
		inline constexpr uintptr_t m_StepSize = 0x38B8;
		inline constexpr uintptr_t m_ViewOffset = 0x38C0;
		inline constexpr uintptr_t m_ViewOffsetDucked = 0x38CC;
		inline constexpr uintptr_t m_WeaponColor = 0x38A8;
		inline constexpr uintptr_t m_bCanWalk = 0x38B6;
		inline constexpr uintptr_t m_bCanZoom = 0x38B5;
		inline constexpr uintptr_t m_bIsTyping = 0x38B7;
		inline constexpr uintptr_t m_bSprintEnabled = 0x38B4;
		inline constexpr uintptr_t m_fGestureEndTime = 0x38D8;
		inline constexpr uintptr_t m_flGravity = 0x1E4;
		inline constexpr uintptr_t m_iGModPlayerFlags = 0x36B8;
		inline constexpr uintptr_t m_iMaxArmor = 0x3898;
		inline constexpr uintptr_t m_nWaterLevel = 0x200;
	}

	namespace DT_HL2Local {
		inline constexpr uintptr_t m_HL2Local_m_bDisplayReticle = 0x356B;
		inline constexpr uintptr_t m_HL2Local_m_bWeaponLowered = 0x356A;
		inline constexpr uintptr_t m_HL2Local_m_bZooming = 0x3569;
		inline constexpr uintptr_t m_HL2Local_m_bitsActiveDevices = 0x355C;
		inline constexpr uintptr_t m_HL2Local_m_fSquadInFollowMode = 0x3568;
		inline constexpr uintptr_t m_HL2Local_m_flSuitPower = 0x3558;
		inline constexpr uintptr_t m_HL2Local_m_hLadder = 0x356C;
		inline constexpr uintptr_t m_HL2Local_m_iSquadMedicCount = 0x3564;
		inline constexpr uintptr_t m_HL2Local_m_iSquadMemberCount = 0x3560;
	}

	namespace DT_HL2MPLocalPlayerExclusive {
		inline constexpr uintptr_t hl2mplocaldata_m_angEyeAngles_0 = 0x35E0;
		inline constexpr uintptr_t hl2mplocaldata_m_angEyeAngles_1 = 0x35E4;
		inline constexpr uintptr_t hl2mplocaldata_m_vecOrigin = 0x438;
	}

	namespace DT_HL2MPMachineGun {
		inline constexpr uintptr_t m_nShotsFired = 0x1CB0;
	}

	namespace DT_HL2MPNonLocalPlayerExclusive {
		inline constexpr uintptr_t hl2mpnonlocaldata_m_angEyeAngles_0 = 0x35E0;
		inline constexpr uintptr_t hl2mpnonlocaldata_m_angEyeAngles_1 = 0x35E4;
		inline constexpr uintptr_t hl2mpnonlocaldata_m_vecOrigin = 0x438;
	}

	namespace DT_HL2MPRagdoll {
		inline constexpr uintptr_t m_hPlayer = 0x1C58;
		inline constexpr uintptr_t m_nForceBone = 0x1724;
		inline constexpr uintptr_t m_nModelIndex = 0xD4;
		inline constexpr uintptr_t m_vecForce = 0x1718;
		inline constexpr uintptr_t m_vecRagdollOrigin = 0x1C68;
		inline constexpr uintptr_t m_vecRagdollVelocity = 0x1C5C;
	}

	namespace DT_HL2MPRules {
		inline constexpr uintptr_t hl2mp_gamerules_data_m_bTeamPlayEnabled = 0x38;
	}

	namespace DT_HL2MP_Player {
		inline constexpr uintptr_t m_fIsWalking = 0x365C;
		inline constexpr uintptr_t m_hRagdoll = 0x3640;
		inline constexpr uintptr_t m_iSpawnInterpCounter = 0x3684;
	}

	namespace DT_HL2_Player {
		inline constexpr uintptr_t m_fIsSprinting = 0x35B0;
	}

	namespace DT_InfoLightingRelative {
		inline constexpr uintptr_t m_hLightingLandmark = 0x16C0;
	}

	namespace DT_InfoOverlayAccessor {
		inline constexpr uintptr_t m_iOverlayID = 0x16C0;
		inline constexpr uintptr_t m_iTextureFrameIndex = 0x738;
	}

	namespace DT_InfoTeleporterCountdown {
		inline constexpr uintptr_t m_bCountdownStarted = 0x16C0;
		inline constexpr uintptr_t m_bDisabled = 0x16C1;
		inline constexpr uintptr_t m_flStartTime = 0x16C4;
		inline constexpr uintptr_t m_flTimeRemaining = 0x16C8;
	}

	namespace DT_LaserDot_HL1 {
		inline constexpr uintptr_t m_bIsOn = 0x16D9;
	}

	namespace DT_LightGlow {
		inline constexpr uintptr_t HDRColorScale = 0x0;
		inline constexpr uintptr_t m_angRotation = 0x444;
		inline constexpr uintptr_t m_clrRender = 0x90;
		inline constexpr uintptr_t m_flGlowProxySize = 0x17D0;
		inline constexpr uintptr_t m_nHorizontalSize = 0x16C0;
		inline constexpr uintptr_t m_nMaxDist = 0x16CC;
		inline constexpr uintptr_t m_nMinDist = 0x16C8;
		inline constexpr uintptr_t m_nOuterMaxDist = 0x16D0;
		inline constexpr uintptr_t m_nVerticalSize = 0x16C4;
		inline constexpr uintptr_t m_spawnflags = 0x16D4;
		inline constexpr uintptr_t m_vecOrigin = 0x438;
		inline constexpr uintptr_t moveparent = 0x21C;
	}

	namespace DT_Local {
		inline constexpr uintptr_t localdata_m_Local_m_PlayerFog_m_hCtrl = 0x2B48;
		inline constexpr uintptr_t localdata_m_Local_m_audio_ent = 0x2BD8;
		inline constexpr uintptr_t localdata_m_Local_m_audio_localBits = 0x2BD4;
		inline constexpr uintptr_t localdata_m_Local_m_audio_localSound_0 = 0x2B70;
		inline constexpr uintptr_t localdata_m_Local_m_audio_localSound_1 = 0x2B7C;
		inline constexpr uintptr_t localdata_m_Local_m_audio_localSound_2 = 0x2B88;
		inline constexpr uintptr_t localdata_m_Local_m_audio_localSound_3 = 0x2B94;
		inline constexpr uintptr_t localdata_m_Local_m_audio_localSound_4 = 0x2BA0;
		inline constexpr uintptr_t localdata_m_Local_m_audio_localSound_5 = 0x2BAC;
		inline constexpr uintptr_t localdata_m_Local_m_audio_localSound_6 = 0x2BB8;
		inline constexpr uintptr_t localdata_m_Local_m_audio_localSound_7 = 0x2BC4;
		inline constexpr uintptr_t localdata_m_Local_m_audio_soundscapeIndex = 0x2BD0;
		inline constexpr uintptr_t localdata_m_Local_m_bAllowAutoMovement = 0x2AC3;
		inline constexpr uintptr_t localdata_m_Local_m_bDrawViewmodel = 0x2AC0;
		inline constexpr uintptr_t localdata_m_Local_m_bDuckToggled = 0x2BE1;
		inline constexpr uintptr_t localdata_m_Local_m_bDucked = 0x29D8;
		inline constexpr uintptr_t localdata_m_Local_m_bDucking = 0x29D9;
		inline constexpr uintptr_t localdata_m_Local_m_bInDuckJump = 0x29DA;
		inline constexpr uintptr_t localdata_m_Local_m_bPoisoned = 0x2AC2;
		inline constexpr uintptr_t localdata_m_Local_m_bWearingSuit = 0x2AC1;
		inline constexpr uintptr_t localdata_m_Local_m_fCrouchedWalkSpeed = 0x2BF4;
		inline constexpr uintptr_t localdata_m_Local_m_fDuckSpeed = 0x2BF8;
		inline constexpr uintptr_t localdata_m_Local_m_fLadderSpeed = 0x2BF0;
		inline constexpr uintptr_t localdata_m_Local_m_fSlowWalkSpeed = 0x2BEC;
		inline constexpr uintptr_t localdata_m_Local_m_fSprintSpeed = 0x2BE4;
		inline constexpr uintptr_t localdata_m_Local_m_fUnDuckSpeed = 0x2BFC;
		inline constexpr uintptr_t localdata_m_Local_m_fWalkSpeed = 0x2BE8;
		inline constexpr uintptr_t localdata_m_Local_m_flDuckJumpTime = 0x29E0;
		inline constexpr uintptr_t localdata_m_Local_m_flDucktime = 0x29DC;
		inline constexpr uintptr_t localdata_m_Local_m_flFOVRate = 0x29D4;
		inline constexpr uintptr_t localdata_m_Local_m_flFallVelocity = 0x29EC;
		inline constexpr uintptr_t localdata_m_Local_m_flJumpTime = 0x29E4;
		inline constexpr uintptr_t localdata_m_Local_m_flStepSize = 0x2AC4;
		inline constexpr uintptr_t localdata_m_Local_m_iHideHUD = 0x29D0;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_area = 0x2AE0;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_fog_HDRColorScale = 0x2B3C;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_fog_blend = 0x2B39;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_fog_colorPrimary = 0x2AFC;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_fog_colorPrimaryHDR = 0x2B04;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_fog_colorSecondary = 0x2B00;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_fog_colorSecondaryHDR = 0x2B08;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_fog_dirPrimary = 0x2AF0;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_fog_enable = 0x2B38;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_fog_end = 0x2B18;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_fog_maxdensity = 0x2B20;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_fog_radial = 0x2B3A;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_fog_start = 0x2B14;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_origin = 0x2AD4;
		inline constexpr uintptr_t localdata_m_Local_m_skybox3d_scale = 0x2AD0;
		inline constexpr uintptr_t localdata_m_Local_m_vecPunchAngle = 0x2A00;
		inline constexpr uintptr_t localdata_m_Local_m_vecPunchAngleVel = 0x2A60;
	}

	namespace DT_LocalActiveWeaponData {
		inline constexpr uintptr_t LocalActiveWeaponData_m_flNextPrimaryAttack = 0x1BE8;
		inline constexpr uintptr_t LocalActiveWeaponData_m_flNextSecondaryAttack = 0x1BF0;
		inline constexpr uintptr_t LocalActiveWeaponData_m_flTimeWeaponIdle = 0x1BF8;
		inline constexpr uintptr_t LocalActiveWeaponData_m_nNextThinkTick = 0xCC;
	}

	namespace DT_LocalPlayerExclusive {
		inline constexpr uintptr_t localdata_m_bDisableWorldClicking = 0x350D;
		inline constexpr uintptr_t localdata_m_flConstraintRadius = 0x2C68;
		inline constexpr uintptr_t localdata_m_flConstraintSpeedFactor = 0x2C70;
		inline constexpr uintptr_t localdata_m_flConstraintWidth = 0x2C6C;
		inline constexpr uintptr_t localdata_m_flDeathTime = 0x2C9C;
		inline constexpr uintptr_t localdata_m_flFriction = 0x318;
		inline constexpr uintptr_t localdata_m_flLaggedMovementValue = 0x3320;
		inline constexpr uintptr_t localdata_m_hConstraintEntity = 0x2C58;
		inline constexpr uintptr_t localdata_m_hGroundEntity = 0x30C;
		inline constexpr uintptr_t localdata_m_hLastWeapon = 0x2D50;
		inline constexpr uintptr_t localdata_m_hTonemapController = 0x2C00;
		inline constexpr uintptr_t localdata_m_hViewEntity = 0x351C;
		inline constexpr uintptr_t localdata_m_nNextThinkTick = 0xCC;
		inline constexpr uintptr_t localdata_m_nTickBase = 0x2D30;
		inline constexpr uintptr_t localdata_m_vecBaseVelocity = 0x1D8;
		inline constexpr uintptr_t localdata_m_vecConstraintCenter = 0x2C5C;
		inline constexpr uintptr_t localdata_m_vecViewOffset_0 = 0x144;
		inline constexpr uintptr_t localdata_m_vecViewOffset_1 = 0x148;
		inline constexpr uintptr_t localdata_m_vecViewOffset_2 = 0x14C;
	}

	namespace DT_LocalWeaponData {
		inline constexpr uintptr_t LocalWeaponData_m_bFlipViewModel = 0x1C40;
		inline constexpr uintptr_t LocalWeaponData_m_iClip1 = 0x1C38;
		inline constexpr uintptr_t LocalWeaponData_m_iClip2 = 0x1C3C;
		inline constexpr uintptr_t LocalWeaponData_m_iPrimaryAmmoType = 0x1C30;
		inline constexpr uintptr_t LocalWeaponData_m_iSecondaryAmmoType = 0x1C34;
		inline constexpr uintptr_t LocalWeaponData_m_nViewModelIndex = 0x1BE0;
	}

	namespace DT_LuaNextBot {
		inline constexpr uintptr_t m_lifeState = 0xD7;
	}

	namespace DT_MaterialModifyControl {
		inline constexpr uintptr_t m_bFloatLerpWrap = 0x19EC;
		inline constexpr uintptr_t m_bNewAnimCommandsSemaphore = 0x19DC;
		inline constexpr uintptr_t m_bWrap = 0x19D4;
		inline constexpr uintptr_t m_flFloatLerpEndValue = 0x19E4;
		inline constexpr uintptr_t m_flFloatLerpStartValue = 0x19E0;
		inline constexpr uintptr_t m_flFloatLerpTransitionTime = 0x19E8;
		inline constexpr uintptr_t m_flFramerate = 0x19D8;
		inline constexpr uintptr_t m_iFrameEnd = 0x19D0;
		inline constexpr uintptr_t m_iFrameStart = 0x19CC;
		inline constexpr uintptr_t m_nModifyMode = 0x19F8;
		inline constexpr uintptr_t m_szMaterialName = 0x16C0;
		inline constexpr uintptr_t m_szMaterialVar = 0x17BF;
		inline constexpr uintptr_t m_szMaterialVarValue = 0x18BE;
	}

	namespace DT_MortarShell {
		inline constexpr uintptr_t m_flLifespan = 0x16D0;
		inline constexpr uintptr_t m_flRadius = 0x16D4;
		inline constexpr uintptr_t m_vecSurfaceNormal = 0x16DC;
	}

	namespace DT_NPC_AntlionGuard {
		inline constexpr uintptr_t m_bCavernBreed = 0x2938;
		inline constexpr uintptr_t m_bInCavern = 0x2939;
		inline constexpr uintptr_t m_iBleedingLevel = 0x2948;
	}

	namespace DT_NPC_Manhack {
		inline constexpr uintptr_t m_flEnginePitch1Time = 0x2958;
		inline constexpr uintptr_t m_flEnginePitch2Time = 0x295C;
		inline constexpr uintptr_t m_nEnginePitch1 = 0x2950;
		inline constexpr uintptr_t m_nEnginePitch2 = 0x2954;
	}

	namespace DT_NPC_Portal_FloorTurret {
		inline constexpr uintptr_t m_bLaserOn = 0x293D;
		inline constexpr uintptr_t m_bOutOfAmmo = 0x293C;
		inline constexpr uintptr_t m_sLaserHaloSprite = 0x2940;
	}

	namespace DT_NPC_Puppet {
		inline constexpr uintptr_t m_hAnimationTarget = 0x2938;
		inline constexpr uintptr_t m_nTargetAttachment = 0x293C;
	}

	namespace DT_NPC_RocketTurret {
		inline constexpr uintptr_t m_iLaserState = 0x293C;
		inline constexpr uintptr_t m_nSiteHalo = 0x2940;
		inline constexpr uintptr_t m_vecCurrentAngles = 0x2948;
	}

	namespace DT_NPC_Strider {
		inline constexpr uintptr_t m_vecHitPos = 0x29A0;
		inline constexpr uintptr_t m_vecIKTarget_0 = 0x29AC;
		inline constexpr uintptr_t m_vecIKTarget_1 = 0x29B8;
		inline constexpr uintptr_t m_vecIKTarget_2 = 0x29C4;
		inline constexpr uintptr_t m_vecIKTarget_3 = 0x29D0;
		inline constexpr uintptr_t m_vecIKTarget_4 = 0x29DC;
		inline constexpr uintptr_t m_vecIKTarget_5 = 0x29E8;
	}

	namespace DT_NPC_Vortigaunt {
		inline constexpr uintptr_t m_bIsBlack = 0x2940;
		inline constexpr uintptr_t m_bIsBlue = 0x2938;
		inline constexpr uintptr_t m_flBlueEndFadeTime = 0x293C;
	}

	namespace DT_ParticlePerformanceMonitor {
		inline constexpr uintptr_t m_bDisplayPerf = 0x16C0;
		inline constexpr uintptr_t m_bMeasurePerf = 0x16C1;
	}

	namespace DT_ParticleSmokeGrenade {
		inline constexpr uintptr_t m_CurrentStage = 0x17F8;
		inline constexpr uintptr_t m_FadeEndTime = 0x1810;
		inline constexpr uintptr_t m_FadeStartTime = 0x180C;
		inline constexpr uintptr_t m_flSpawnTime = 0x1808;
	}

	namespace DT_ParticleSystem {
		inline constexpr uintptr_t m_angRotation = 0x444;
		inline constexpr uintptr_t m_bActive = 0x16C4;
		inline constexpr uintptr_t m_bWeatherEffect = 0x1807;
		inline constexpr uintptr_t m_flStartTime = 0x16C8;
		inline constexpr uintptr_t m_hOwnerEntity = 0x744;
		inline constexpr uintptr_t m_iEffectIndex = 0x16C0;
		inline constexpr uintptr_t m_iParentAttachment = 0x1FE;
		inline constexpr uintptr_t m_vecOrigin = 0x438;
		inline constexpr uintptr_t moveparent = 0x21C;
	}

	namespace DT_PhysBeam {
		inline constexpr uintptr_t m_HoldPos = 0x16E4;
		inline constexpr uintptr_t m_bIsOn = 0x16F4;
		inline constexpr uintptr_t m_hTargetEnt = 0x16F0;
		inline constexpr uintptr_t m_iPhysBone = 0x16E0;
	}

	namespace DT_PhysBox {
		inline constexpr uintptr_t m_mass = 0x16C0;
	}

	namespace DT_PhysBoxMultiplayer {
		inline constexpr uintptr_t m_fMass = 0x16D4;
		inline constexpr uintptr_t m_iPhysicsMode = 0x16D0;
	}

	namespace DT_PhysicsProp {
		inline constexpr uintptr_t m_bAwake = 0x1BD8;
	}

	namespace DT_PhysicsPropMultiplayer {
		inline constexpr uintptr_t m_collisionMaxs = 0x1BFC;
		inline constexpr uintptr_t m_collisionMins = 0x1BF0;
		inline constexpr uintptr_t m_fMass = 0x1BEC;
		inline constexpr uintptr_t m_iPhysicsMode = 0x1BE8;
	}

	namespace DT_Plasma {
		inline constexpr uintptr_t m_flScale = 0x16C4;
		inline constexpr uintptr_t m_flScaleTime = 0x16C8;
		inline constexpr uintptr_t m_flStartScale = 0x16C0;
		inline constexpr uintptr_t m_nFlags = 0x16CC;
		inline constexpr uintptr_t m_nGlowModelIndex = 0x16D8;
		inline constexpr uintptr_t m_nPlasmaModelIndex = 0x16D0;
		inline constexpr uintptr_t m_nPlasmaModelIndex2 = 0x16D4;
	}

	namespace DT_PlasmaBeamNode {
		inline constexpr uintptr_t m_bSprayOn = 0x16C0;
		inline constexpr uintptr_t m_vecVelocity = 0x150;
	}

	namespace DT_PlayerState {
		inline constexpr uintptr_t pl_deadflag = 0x2C10;
	}

	namespace DT_PointCamera {
		inline constexpr uintptr_t m_FOV = 0x16C0;
		inline constexpr uintptr_t m_FogColor = 0x16C9;
		inline constexpr uintptr_t m_FogColorHDR = 0x16CD;
		inline constexpr uintptr_t m_Resolution = 0x16C4;
		inline constexpr uintptr_t m_bActive = 0x16E1;
		inline constexpr uintptr_t m_bFogEnable = 0x16C8;
		inline constexpr uintptr_t m_bFogRadial = 0x16E0;
		inline constexpr uintptr_t m_bGlobalOverride = 0x16E3;
		inline constexpr uintptr_t m_bUseScreenAspectRatio = 0x16E2;
		inline constexpr uintptr_t m_flFogEnd = 0x16D8;
		inline constexpr uintptr_t m_flFogMaxDensity = 0x16DC;
		inline constexpr uintptr_t m_flFogStart = 0x16D4;
	}

	namespace DT_PointWorldText {
		inline constexpr uintptr_t m_bRainbow = 0x16F8;
		inline constexpr uintptr_t m_bTextEnabled = 0x16F9;
		inline constexpr uintptr_t m_colTextColor = 0x180C;
		inline constexpr uintptr_t m_flTextSize = 0x1800;
		inline constexpr uintptr_t m_flTextSpacingX = 0x1804;
		inline constexpr uintptr_t m_flTextSpacingY = 0x1808;
		inline constexpr uintptr_t m_nOrientation = 0x1810;
		inline constexpr uintptr_t m_szText = 0x16FA;
	}

	namespace DT_PoseController {
		inline constexpr uintptr_t m_bInterpolationWrap = 0x16E0;
		inline constexpr uintptr_t m_bPoseValueParity = 0x16D4;
		inline constexpr uintptr_t m_fCycleFrequency = 0x16E4;
		inline constexpr uintptr_t m_fFModAmplitude = 0x16F4;
		inline constexpr uintptr_t m_fFModRate = 0x16F0;
		inline constexpr uintptr_t m_fFModTimeOffset = 0x16EC;
		inline constexpr uintptr_t m_fInterpolationTime = 0x16DC;
		inline constexpr uintptr_t m_fPoseValue = 0x16D8;
		inline constexpr uintptr_t m_nFModType = 0x16E8;
	}

	namespace DT_Precipitation {
		inline constexpr uintptr_t m_flParticleDist = 0x195C;
		inline constexpr uintptr_t m_nPrecipType = 0x16EC;
		inline constexpr uintptr_t m_sParticleNameClose = 0x17DA;
		inline constexpr uintptr_t m_sParticleNameInner = 0x185A;
		inline constexpr uintptr_t m_sParticleNameOuter = 0x18DA;
	}

	namespace DT_PredictableId {
		inline constexpr uintptr_t predictable_id_m_PredictableID = 0xE8;
		inline constexpr uintptr_t predictable_id_m_bIsPlayerSimulated = 0x734;
	}

	namespace DT_PropAirboat {
		inline constexpr uintptr_t m_bHeadlightIsOn = 0x1D4C;
		inline constexpr uintptr_t m_nAmmoCount = 0x1D50;
		inline constexpr uintptr_t m_nExactWaterLevel = 0x1D60;
		inline constexpr uintptr_t m_nWaterLevel = 0x200;
		inline constexpr uintptr_t m_vecPhysVelocity = 0x2248;
	}

	namespace DT_PropCombineBall {
		inline constexpr uintptr_t m_bEmit = 0x1BE4;
		inline constexpr uintptr_t m_bHeld = 0x1BEC;
		inline constexpr uintptr_t m_bLaunched = 0x1BED;
		inline constexpr uintptr_t m_flRadius = 0x1BE8;
	}

	namespace DT_PropCrane {
		inline constexpr uintptr_t m_bEnterAnimOn = 0x1BE8;
		inline constexpr uintptr_t m_bExitAnimOn = 0x1BE9;
		inline constexpr uintptr_t m_bMagnetOn = 0x1BF8;
		inline constexpr uintptr_t m_hPlayer = 0x1BE0;
		inline constexpr uintptr_t m_vecEyeExitEndpoint = 0x1BEC;
	}

	namespace DT_PropEnergyBall {
		inline constexpr uintptr_t m_bIsInfiniteLife = 0x1C08;
		inline constexpr uintptr_t m_fTimeTillDeath = 0x1C0C;
	}

	namespace DT_PropJeep {
		inline constexpr uintptr_t m_bHeadlightIsOn = 0x1D58;
	}

	namespace DT_PropScalable {
		inline constexpr uintptr_t m_flGoalTimeX = 0x1BF0;
		inline constexpr uintptr_t m_flGoalTimeY = 0x1BF4;
		inline constexpr uintptr_t m_flGoalTimeZ = 0x1BF8;
		inline constexpr uintptr_t m_flLerpTimeX = 0x1BE4;
		inline constexpr uintptr_t m_flLerpTimeY = 0x1BE8;
		inline constexpr uintptr_t m_flLerpTimeZ = 0x1BEC;
		inline constexpr uintptr_t m_flScaleX = 0x1BD8;
		inline constexpr uintptr_t m_flScaleY = 0x1BDC;
		inline constexpr uintptr_t m_flScaleZ = 0x1BE0;
	}

	namespace DT_PropVehicleChoreoGeneric {
		inline constexpr uintptr_t m_bEnterAnimOn = 0x1C18;
		inline constexpr uintptr_t m_bExitAnimOn = 0x1C19;
		inline constexpr uintptr_t m_bForceEyesToAttachment = 0x1C28;
		inline constexpr uintptr_t m_hPlayer = 0x1C10;
		inline constexpr uintptr_t m_vecEyeExitEndpoint = 0x1C1C;
		inline constexpr uintptr_t m_vehicleView_bClampEyeAngles = 0x1CB8;
		inline constexpr uintptr_t m_vehicleView_flFOV = 0x1CCC;
		inline constexpr uintptr_t m_vehicleView_flPitchCurveLinear = 0x1CC0;
		inline constexpr uintptr_t m_vehicleView_flPitchCurveZero = 0x1CBC;
		inline constexpr uintptr_t m_vehicleView_flPitchMax = 0x1CDC;
		inline constexpr uintptr_t m_vehicleView_flPitchMin = 0x1CD8;
		inline constexpr uintptr_t m_vehicleView_flRollCurveLinear = 0x1CC8;
		inline constexpr uintptr_t m_vehicleView_flRollCurveZero = 0x1CC4;
		inline constexpr uintptr_t m_vehicleView_flYawMax = 0x1CD4;
		inline constexpr uintptr_t m_vehicleView_flYawMin = 0x1CD0;
	}

	namespace DT_PropVehicleDriveable {
		inline constexpr uintptr_t m_bEnterAnimOn = 0x1C14;
		inline constexpr uintptr_t m_bExitAnimOn = 0x1C15;
		inline constexpr uintptr_t m_bHasGun = 0x1C84;
		inline constexpr uintptr_t m_bLocked = 0x1D10;
		inline constexpr uintptr_t m_bUnableToFire = 0x1C85;
		inline constexpr uintptr_t m_flThrottle = 0x1BEC;
		inline constexpr uintptr_t m_hPlayer = 0x1BE0;
		inline constexpr uintptr_t m_nBoostTimeLeft = 0x1BF0;
		inline constexpr uintptr_t m_nHasBoost = 0x1BF4;
		inline constexpr uintptr_t m_nRPM = 0x1BE8;
		inline constexpr uintptr_t m_nSpeed = 0x1BE4;
		inline constexpr uintptr_t m_vecEyeExitEndpoint = 0x1C78;
		inline constexpr uintptr_t m_vecGunCrosshair = 0x1C1C;
	}

	namespace DT_PropVehiclePrisonerPod {
		inline constexpr uintptr_t m_bEnterAnimOn = 0x1BF0;
		inline constexpr uintptr_t m_bExitAnimOn = 0x1BF1;
		inline constexpr uintptr_t m_bLimitView = 0x1BF2;
		inline constexpr uintptr_t m_bLocked = 0x1BF3;
		inline constexpr uintptr_t m_hPlayer = 0x1BE8;
		inline constexpr uintptr_t m_vecEyeExitEndpoint = 0x1BF4;
	}

	namespace DT_QuadraticBeam {
		inline constexpr uintptr_t m_controlPosition = 0x16CC;
		inline constexpr uintptr_t m_flWidth = 0x16DC;
		inline constexpr uintptr_t m_scrollRate = 0x16D8;
		inline constexpr uintptr_t m_targetPosition = 0x16C0;
	}

	namespace DT_Ragdoll {
		inline constexpr uintptr_t m_flBlendWeight = 0x2004;
		inline constexpr uintptr_t m_hUnragdoll = 0x2000;
		inline constexpr uintptr_t m_nOverlaySequence = 0x200C;
		inline constexpr uintptr_t m_ragAngles_0 = 0x1D58;
		inline constexpr uintptr_t m_ragAngles_1 = 0x1D64;
		inline constexpr uintptr_t m_ragAngles_10 = 0x1DD0;
		inline constexpr uintptr_t m_ragAngles_11 = 0x1DDC;
		inline constexpr uintptr_t m_ragAngles_12 = 0x1DE8;
		inline constexpr uintptr_t m_ragAngles_13 = 0x1DF4;
		inline constexpr uintptr_t m_ragAngles_14 = 0x1E00;
		inline constexpr uintptr_t m_ragAngles_15 = 0x1E0C;
		inline constexpr uintptr_t m_ragAngles_16 = 0x1E18;
		inline constexpr uintptr_t m_ragAngles_17 = 0x1E24;
		inline constexpr uintptr_t m_ragAngles_18 = 0x1E30;
		inline constexpr uintptr_t m_ragAngles_19 = 0x1E3C;
		inline constexpr uintptr_t m_ragAngles_2 = 0x1D70;
		inline constexpr uintptr_t m_ragAngles_20 = 0x1E48;
		inline constexpr uintptr_t m_ragAngles_21 = 0x1E54;
		inline constexpr uintptr_t m_ragAngles_22 = 0x1E60;
		inline constexpr uintptr_t m_ragAngles_23 = 0x1E6C;
		inline constexpr uintptr_t m_ragAngles_24 = 0x1E78;
		inline constexpr uintptr_t m_ragAngles_25 = 0x1E84;
		inline constexpr uintptr_t m_ragAngles_26 = 0x1E90;
		inline constexpr uintptr_t m_ragAngles_27 = 0x1E9C;
		inline constexpr uintptr_t m_ragAngles_28 = 0x1EA8;
		inline constexpr uintptr_t m_ragAngles_29 = 0x1EB4;
		inline constexpr uintptr_t m_ragAngles_3 = 0x1D7C;
		inline constexpr uintptr_t m_ragAngles_30 = 0x1EC0;
		inline constexpr uintptr_t m_ragAngles_31 = 0x1ECC;
		inline constexpr uintptr_t m_ragAngles_4 = 0x1D88;
		inline constexpr uintptr_t m_ragAngles_5 = 0x1D94;
		inline constexpr uintptr_t m_ragAngles_6 = 0x1DA0;
		inline constexpr uintptr_t m_ragAngles_7 = 0x1DAC;
		inline constexpr uintptr_t m_ragAngles_8 = 0x1DB8;
		inline constexpr uintptr_t m_ragAngles_9 = 0x1DC4;
		inline constexpr uintptr_t m_ragPos_0 = 0x1BD8;
		inline constexpr uintptr_t m_ragPos_1 = 0x1BE4;
		inline constexpr uintptr_t m_ragPos_10 = 0x1C50;
		inline constexpr uintptr_t m_ragPos_11 = 0x1C5C;
		inline constexpr uintptr_t m_ragPos_12 = 0x1C68;
		inline constexpr uintptr_t m_ragPos_13 = 0x1C74;
		inline constexpr uintptr_t m_ragPos_14 = 0x1C80;
		inline constexpr uintptr_t m_ragPos_15 = 0x1C8C;
		inline constexpr uintptr_t m_ragPos_16 = 0x1C98;
		inline constexpr uintptr_t m_ragPos_17 = 0x1CA4;
		inline constexpr uintptr_t m_ragPos_18 = 0x1CB0;
		inline constexpr uintptr_t m_ragPos_19 = 0x1CBC;
		inline constexpr uintptr_t m_ragPos_2 = 0x1BF0;
		inline constexpr uintptr_t m_ragPos_20 = 0x1CC8;
		inline constexpr uintptr_t m_ragPos_21 = 0x1CD4;
		inline constexpr uintptr_t m_ragPos_22 = 0x1CE0;
		inline constexpr uintptr_t m_ragPos_23 = 0x1CEC;
		inline constexpr uintptr_t m_ragPos_24 = 0x1CF8;
		inline constexpr uintptr_t m_ragPos_25 = 0x1D04;
		inline constexpr uintptr_t m_ragPos_26 = 0x1D10;
		inline constexpr uintptr_t m_ragPos_27 = 0x1D1C;
		inline constexpr uintptr_t m_ragPos_28 = 0x1D28;
		inline constexpr uintptr_t m_ragPos_29 = 0x1D34;
		inline constexpr uintptr_t m_ragPos_3 = 0x1BFC;
		inline constexpr uintptr_t m_ragPos_30 = 0x1D40;
		inline constexpr uintptr_t m_ragPos_31 = 0x1D4C;
		inline constexpr uintptr_t m_ragPos_4 = 0x1C08;
		inline constexpr uintptr_t m_ragPos_5 = 0x1C14;
		inline constexpr uintptr_t m_ragPos_6 = 0x1C20;
		inline constexpr uintptr_t m_ragPos_7 = 0x1C2C;
		inline constexpr uintptr_t m_ragPos_8 = 0x1C38;
		inline constexpr uintptr_t m_ragPos_9 = 0x1C44;
	}

	namespace DT_RagdollManager {
		inline constexpr uintptr_t m_iCurrentMaxRagdollCount = 0x16C0;
	}

	namespace DT_Ragdoll_Attached {
		inline constexpr uintptr_t m_attachmentPointBoneSpace = 0x2018;
		inline constexpr uintptr_t m_attachmentPointRagdollSpace = 0x2030;
		inline constexpr uintptr_t m_boneIndexAttached = 0x2040;
		inline constexpr uintptr_t m_ragdollAttachedObjectIndex = 0x203C;
	}

	namespace DT_RocketTrail {
		inline constexpr uintptr_t m_EndColor = 0x1808;
		inline constexpr uintptr_t m_EndSize = 0x182C;
		inline constexpr uintptr_t m_MaxSpeed = 0x1824;
		inline constexpr uintptr_t m_MinSpeed = 0x1820;
		inline constexpr uintptr_t m_Opacity = 0x1814;
		inline constexpr uintptr_t m_ParticleLifetime = 0x1818;
		inline constexpr uintptr_t m_SpawnRadius = 0x1830;
		inline constexpr uintptr_t m_SpawnRate = 0x17F8;
		inline constexpr uintptr_t m_StartColor = 0x17FC;
		inline constexpr uintptr_t m_StartSize = 0x1828;
		inline constexpr uintptr_t m_StopEmitTime = 0x181C;
		inline constexpr uintptr_t m_bDamaged = 0x1841;
		inline constexpr uintptr_t m_bEmit = 0x1840;
		inline constexpr uintptr_t m_flFlareScale = 0x1854;
		inline constexpr uintptr_t m_nAttachment = 0x1844;
	}

	namespace DT_RollerMine {
		inline constexpr uintptr_t m_bHackedByAlyx = 0x2940;
		inline constexpr uintptr_t m_bIsOpen = 0x2938;
		inline constexpr uintptr_t m_bPowerDown = 0x2941;
		inline constexpr uintptr_t m_flActiveTime = 0x293C;
	}

	namespace DT_RopeKeyframe {
		inline constexpr uintptr_t m_RopeFlags = 0x16F8;
		inline constexpr uintptr_t m_RopeLength = 0x19FC;
		inline constexpr uintptr_t m_Slack = 0x1A00;
		inline constexpr uintptr_t m_Subdiv = 0x19F8;
		inline constexpr uintptr_t m_TextureScale = 0x1A04;
		inline constexpr uintptr_t m_Width = 0x1A0C;
		inline constexpr uintptr_t m_bConstrainBetweenEndpoints = 0x1AA0;
		inline constexpr uintptr_t m_clrRender = 0x90;
		inline constexpr uintptr_t m_fLockedPoints = 0x1A08;
		inline constexpr uintptr_t m_flScrollSpeed = 0x16F4;
		inline constexpr uintptr_t m_hEndPoint = 0x19F0;
		inline constexpr uintptr_t m_hStartPoint = 0x19EC;
		inline constexpr uintptr_t m_iEndAttachment = 0x19F6;
		inline constexpr uintptr_t m_iEndBone = 0x1AA2;
		inline constexpr uintptr_t m_iParentAttachment = 0x1FE;
		inline constexpr uintptr_t m_iRopeMaterialModelIndex = 0x16FC;
		inline constexpr uintptr_t m_iStartAttachment = 0x19F4;
		inline constexpr uintptr_t m_iStartBone = 0x1AA4;
		inline constexpr uintptr_t m_nSegments = 0x19E8;
		inline constexpr uintptr_t m_vecEndOffset = 0x1AB4;
		inline constexpr uintptr_t m_vecOrigin = 0x438;
		inline constexpr uintptr_t m_vecStartOffset = 0x1AA8;
		inline constexpr uintptr_t moveparent = 0x21C;
	}

	namespace DT_RotorWashEmitter {
		inline constexpr uintptr_t m_flAltitude = 0x16C0;
	}

	namespace DT_SceneEntity {
		inline constexpr uintptr_t m_bIsPlayingBack = 0x16C8;
		inline constexpr uintptr_t m_bMultiplayer = 0x16CA;
		inline constexpr uintptr_t m_bPaused = 0x16C9;
		inline constexpr uintptr_t m_flForceClientTime = 0x16D0;
		inline constexpr uintptr_t m_nSceneStringIndex = 0x16D4;
	}

	namespace DT_ScriptIntro {
		inline constexpr uintptr_t m_bActive = 0x1768;
		inline constexpr uintptr_t m_bAlternateFOV = 0x16E0;
		inline constexpr uintptr_t m_flBlendStartTime = 0x1760;
		inline constexpr uintptr_t m_flFOVBlendStartTime = 0x16D8;
		inline constexpr uintptr_t m_flFadeAlpha = 0x177C;
		inline constexpr uintptr_t m_flFadeColor_0[] = {
			0x0,
			0x1770
		};
		inline constexpr uintptr_t m_flFadeColor_1 = 0x4;
		inline constexpr uintptr_t m_flFadeColor_2 = 0x8;
		inline constexpr uintptr_t m_flFadeDuration = 0x1784;
		inline constexpr uintptr_t m_flNextBlendTime = 0x1758;
		inline constexpr uintptr_t m_flNextFOVBlendTime = 0x16D0;
		inline constexpr uintptr_t m_hCameraEntity = 0x176C;
		inline constexpr uintptr_t m_iBlendMode = 0x1750;
		inline constexpr uintptr_t m_iFOV = 0x16C4;
		inline constexpr uintptr_t m_iNextBlendMode = 0x1754;
		inline constexpr uintptr_t m_iNextFOV = 0x16C0;
		inline constexpr uintptr_t m_iStartFOV = 0x16CC;
		inline constexpr uintptr_t m_vecCameraView = 0x1738;
		inline constexpr uintptr_t m_vecCameraViewAngles = 0x1744;
	}

	namespace DT_ScriptedEntity {
		inline constexpr uintptr_t m_ScriptedEntity_m_strScriptName[] = {
			0x16D8,
			0x1C78,
			0x1CC8,
			0x2950,
			0x2960
		};
	}

	namespace DT_ServerAnimationData {
		inline constexpr uintptr_t serveranimdata_m_flCycle = 0x1A00;
	}

	namespace DT_ShadowControl {
		inline constexpr uintptr_t m_bDisableShadows = 0x16D4;
		inline constexpr uintptr_t m_bEnableLocalLightShadows = 0x16D5;
		inline constexpr uintptr_t m_flShadowMaxDist = 0x16D0;
		inline constexpr uintptr_t m_shadowColor = 0x16CC;
		inline constexpr uintptr_t m_shadowDirection = 0x16C0;
	}

	namespace DT_SlideshowDisplay {
		inline constexpr uintptr_t m_bEnabled = 0x16C0;
		inline constexpr uintptr_t m_bNoListRepeats = 0x1810;
		inline constexpr uintptr_t m_fMaxSlideTime = 0x1804;
		inline constexpr uintptr_t m_fMinSlideTime = 0x1800;
		inline constexpr uintptr_t m_iCycleType = 0x180C;
		inline constexpr uintptr_t m_szDisplayText = 0x16C1;
		inline constexpr uintptr_t m_szSlideshowDirectory = 0x1741;
	}

	namespace DT_SmokeStack {
		inline constexpr uintptr_t m_AmbientLight_m_flIntensity = 0x1888;
		inline constexpr uintptr_t m_AmbientLight_m_vColor = 0x187C;
		inline constexpr uintptr_t m_AmbientLight_m_vPos = 0x1870;
		inline constexpr uintptr_t m_DirLight_m_flIntensity = 0x18A4;
		inline constexpr uintptr_t m_DirLight_m_vColor = 0x1898;
		inline constexpr uintptr_t m_DirLight_m_vPos = 0x188C;
		inline constexpr uintptr_t m_EndSize = 0x185C;
		inline constexpr uintptr_t m_JetLength = 0x1864;
		inline constexpr uintptr_t m_Rate = 0x1860;
		inline constexpr uintptr_t m_Speed = 0x1854;
		inline constexpr uintptr_t m_SpreadSpeed = 0x1850;
		inline constexpr uintptr_t m_StartSize = 0x1858;
		inline constexpr uintptr_t m_bEmit = 0x1868;
		inline constexpr uintptr_t m_flBaseSpread = 0x186C;
		inline constexpr uintptr_t m_flRollSpeed = 0x1908;
		inline constexpr uintptr_t m_flTwist = 0x18C0;
		inline constexpr uintptr_t m_iMaterialModel = 0x18C4;
		inline constexpr uintptr_t m_vWind = 0x18B4;
	}

	namespace DT_SmokeTrail {
		inline constexpr uintptr_t m_EndColor = 0x1808;
		inline constexpr uintptr_t m_EndSize = 0x1834;
		inline constexpr uintptr_t m_MaxDirectedSpeed = 0x182C;
		inline constexpr uintptr_t m_MaxSpeed = 0x1824;
		inline constexpr uintptr_t m_MinDirectedSpeed = 0x1828;
		inline constexpr uintptr_t m_MinSpeed = 0x1820;
		inline constexpr uintptr_t m_Opacity = 0x1814;
		inline constexpr uintptr_t m_ParticleLifetime = 0x1818;
		inline constexpr uintptr_t m_SpawnRadius = 0x1838;
		inline constexpr uintptr_t m_SpawnRate = 0x17F8;
		inline constexpr uintptr_t m_StartColor = 0x17FC;
		inline constexpr uintptr_t m_StartSize = 0x1830;
		inline constexpr uintptr_t m_StopEmitTime = 0x181C;
		inline constexpr uintptr_t m_bEmit = 0x1848;
		inline constexpr uintptr_t m_nAttachment = 0x184C;
	}

	namespace DT_SpatialEntity {
		inline constexpr uintptr_t m_bEnabled = 0x17DC;
		inline constexpr uintptr_t m_flCurWeight = 0x16D4;
		inline constexpr uintptr_t m_maxFalloff = 0x16D0;
		inline constexpr uintptr_t m_minFalloff = 0x16CC;
		inline constexpr uintptr_t m_vecOrigin = 0x16C0;
	}

	namespace DT_SporeExplosion {
		inline constexpr uintptr_t m_bDontRemove = 0x1811;
		inline constexpr uintptr_t m_bEmit = 0x1810;
		inline constexpr uintptr_t m_flEndSize = 0x1804;
		inline constexpr uintptr_t m_flParticleLifetime = 0x17FC;
		inline constexpr uintptr_t m_flSpawnRadius = 0x1808;
		inline constexpr uintptr_t m_flSpawnRate = 0x17F8;
		inline constexpr uintptr_t m_flStartSize = 0x1800;
	}

	namespace DT_SporeTrail {
		inline constexpr uintptr_t m_bEmit = 0x181C;
		inline constexpr uintptr_t m_flEndSize = 0x1808;
		inline constexpr uintptr_t m_flParticleLifetime = 0x1800;
		inline constexpr uintptr_t m_flSpawnRadius = 0x180C;
		inline constexpr uintptr_t m_flSpawnRate = 0x17FC;
		inline constexpr uintptr_t m_flStartSize = 0x1804;
		inline constexpr uintptr_t m_vecEndColor = 0x17F0;
	}

	namespace DT_SpotlightEnd {
		inline constexpr uintptr_t m_Radius = 0x16C4;
		inline constexpr uintptr_t m_flLightScale = 0x16C0;
	}

	namespace DT_Sprite {
		inline constexpr uintptr_t m_bWorldSpaceScale = 0x16FC;
		inline constexpr uintptr_t m_flBrightnessTime = 0x16F0;
		inline constexpr uintptr_t m_flFrame = 0x16E4;
		inline constexpr uintptr_t m_flGlowProxySize = 0x1700;
		inline constexpr uintptr_t m_flHDRColorScale = 0x1704;
		inline constexpr uintptr_t m_flScaleTime = 0x16F8;
		inline constexpr uintptr_t m_flSpriteFramerate = 0x16E0;
		inline constexpr uintptr_t m_flSpriteScale = 0x16F4;
		inline constexpr uintptr_t m_hAttachedToEntity = 0x16D8;
		inline constexpr uintptr_t m_nAttachment = 0x16DC;
		inline constexpr uintptr_t m_nBrightness = 0x16EC;
	}

	namespace DT_SpriteTrail {
		inline constexpr uintptr_t m_flEndWidth = 0x2770;
		inline constexpr uintptr_t m_flLifeTime = 0x2768;
		inline constexpr uintptr_t m_flMinFadeLength = 0x277C;
		inline constexpr uintptr_t m_flSkyboxScale = 0x278C;
		inline constexpr uintptr_t m_flStartWidth = 0x276C;
		inline constexpr uintptr_t m_flStartWidthVariance = 0x2774;
		inline constexpr uintptr_t m_flTextureRes = 0x2778;
		inline constexpr uintptr_t m_vecSkyboxOrigin = 0x2780;
	}

	namespace DT_SteamJet {
		inline constexpr uintptr_t m_EndSize = 0x1804;
		inline constexpr uintptr_t m_JetLength = 0x180C;
		inline constexpr uintptr_t m_Rate = 0x1808;
		inline constexpr uintptr_t m_Speed = 0x17FC;
		inline constexpr uintptr_t m_SpreadSpeed = 0x17F8;
		inline constexpr uintptr_t m_StartSize = 0x1800;
		inline constexpr uintptr_t m_bEmit = 0x1810;
		inline constexpr uintptr_t m_bFaceLeft = 0x1818;
		inline constexpr uintptr_t m_flRollSpeed = 0x1820;
		inline constexpr uintptr_t m_nType = 0x1814;
		inline constexpr uintptr_t m_spawnflags = 0x181C;
	}

	namespace DT_Sun {
		inline constexpr uintptr_t HDRColorScale = 0x0;
		inline constexpr uintptr_t m_bOn = 0x1888;
		inline constexpr uintptr_t m_clrOverlay = 0x1870;
		inline constexpr uintptr_t m_clrRender = 0x90;
		inline constexpr uintptr_t m_nMaterial = 0x188C;
		inline constexpr uintptr_t m_nOverlayMaterial = 0x1890;
		inline constexpr uintptr_t m_nOverlaySize = 0x1878;
		inline constexpr uintptr_t m_nSize = 0x1874;
		inline constexpr uintptr_t m_vDirection = 0x187C;
	}

	namespace DT_TEAntlionDust {
		inline constexpr uintptr_t m_bBlockedSpawner = 0x50;
		inline constexpr uintptr_t m_vecAngles = 0x44;
		inline constexpr uintptr_t m_vecOrigin = 0x38;
	}

	namespace DT_TEBSPDecal {
		inline constexpr uintptr_t m_nEntity = 0x2C;
		inline constexpr uintptr_t m_nIndex = 0x30;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
	}

	namespace DT_TEBeamEntPoint {
		inline constexpr uintptr_t m_nEndEntity = 0x64;
		inline constexpr uintptr_t m_nStartEntity = 0x60;
		inline constexpr uintptr_t m_vecEndPoint = 0x74;
		inline constexpr uintptr_t m_vecStartPoint = 0x68;
	}

	namespace DT_TEBeamEnts {
		inline constexpr uintptr_t m_nEndEntity = 0x64;
		inline constexpr uintptr_t m_nStartEntity = 0x60;
	}

	namespace DT_TEBeamFollow {
		inline constexpr uintptr_t m_iEntIndex = 0x60;
	}

	namespace DT_TEBeamLaser {
		inline constexpr uintptr_t m_nEndEntity = 0x64;
		inline constexpr uintptr_t m_nStartEntity = 0x60;
	}

	namespace DT_TEBeamPoints {
		inline constexpr uintptr_t m_vecEndPoint = 0x6C;
		inline constexpr uintptr_t m_vecStartPoint = 0x60;
	}

	namespace DT_TEBeamRing {
		inline constexpr uintptr_t m_nEndEntity = 0x64;
		inline constexpr uintptr_t m_nStartEntity = 0x60;
	}

	namespace DT_TEBeamRingPoint {
		inline constexpr uintptr_t m_flEndRadius = 0x70;
		inline constexpr uintptr_t m_flStartRadius = 0x6C;
		inline constexpr uintptr_t m_vecCenter = 0x60;
	}

	namespace DT_TEBeamSpline {
		inline constexpr uintptr_t m_nPoints = 0xE0;
		inline constexpr uintptr_t m_vecPoints_0[] = {
			0x0,
			0x20
		};
		inline constexpr uintptr_t m_vecPoints_1 = 0xC;
		inline constexpr uintptr_t m_vecPoints_10 = 0x78;
		inline constexpr uintptr_t m_vecPoints_11 = 0x84;
		inline constexpr uintptr_t m_vecPoints_12 = 0x90;
		inline constexpr uintptr_t m_vecPoints_13 = 0x9C;
		inline constexpr uintptr_t m_vecPoints_14 = 0xA8;
		inline constexpr uintptr_t m_vecPoints_15 = 0xB4;
		inline constexpr uintptr_t m_vecPoints_2 = 0x18;
		inline constexpr uintptr_t m_vecPoints_3 = 0x24;
		inline constexpr uintptr_t m_vecPoints_4 = 0x30;
		inline constexpr uintptr_t m_vecPoints_5 = 0x3C;
		inline constexpr uintptr_t m_vecPoints_6 = 0x48;
		inline constexpr uintptr_t m_vecPoints_7 = 0x54;
		inline constexpr uintptr_t m_vecPoints_8 = 0x60;
		inline constexpr uintptr_t m_vecPoints_9 = 0x6C;
	}

	namespace DT_TEBloodSprite {
		inline constexpr uintptr_t a = 0x44;
		inline constexpr uintptr_t b = 0x40;
		inline constexpr uintptr_t g = 0x3C;
		inline constexpr uintptr_t m_nSize = 0x48;
		inline constexpr uintptr_t m_vecDirection = 0x2C;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
		inline constexpr uintptr_t r = 0x38;
	}

	namespace DT_TEBloodStream {
		inline constexpr uintptr_t a = 0x48;
		inline constexpr uintptr_t b = 0x44;
		inline constexpr uintptr_t g = 0x40;
		inline constexpr uintptr_t m_nAmount = 0x4C;
		inline constexpr uintptr_t m_vecDirection = 0x30;
		inline constexpr uintptr_t r = 0x3C;
	}

	namespace DT_TEBreakModel {
		inline constexpr uintptr_t m_angRotation_0 = 0x2C;
		inline constexpr uintptr_t m_angRotation_1 = 0x30;
		inline constexpr uintptr_t m_angRotation_2 = 0x34;
		inline constexpr uintptr_t m_fTime = 0x5C;
		inline constexpr uintptr_t m_nCount = 0x58;
		inline constexpr uintptr_t m_nFlags = 0x60;
		inline constexpr uintptr_t m_nModelIndex = 0x54;
		inline constexpr uintptr_t m_nRandomization = 0x50;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
		inline constexpr uintptr_t m_vecSize = 0x38;
		inline constexpr uintptr_t m_vecVelocity = 0x44;
	}

	namespace DT_TEBubbleTrail {
		inline constexpr uintptr_t m_fSpeed = 0x44;
		inline constexpr uintptr_t m_flWaterZ = 0x38;
		inline constexpr uintptr_t m_nCount = 0x40;
		inline constexpr uintptr_t m_nModelIndex = 0x3C;
		inline constexpr uintptr_t m_vecMaxs = 0x2C;
		inline constexpr uintptr_t m_vecMins = 0x20;
	}

	namespace DT_TEBubbles {
		inline constexpr uintptr_t m_fHeight = 0x38;
		inline constexpr uintptr_t m_fSpeed = 0x44;
		inline constexpr uintptr_t m_nCount = 0x40;
		inline constexpr uintptr_t m_nModelIndex = 0x3C;
		inline constexpr uintptr_t m_vecMaxs = 0x2C;
		inline constexpr uintptr_t m_vecMins = 0x20;
	}

	namespace DT_TEClientProjectile {
		inline constexpr uintptr_t m_hOwner = 0x40;
		inline constexpr uintptr_t m_nLifeTime = 0x3C;
		inline constexpr uintptr_t m_nModelIndex = 0x38;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
		inline constexpr uintptr_t m_vecVelocity = 0x2C;
	}

	namespace DT_TEConcussiveExplosion {
		inline constexpr uintptr_t m_flScale = 0x3C;
		inline constexpr uintptr_t m_nMagnitude = 0x44;
		inline constexpr uintptr_t m_nRadius = 0x40;
		inline constexpr uintptr_t m_vecNormal = 0x30;
	}

	namespace DT_TEDecal {
		inline constexpr uintptr_t m_nEntity = 0x38;
		inline constexpr uintptr_t m_nHitbox = 0x3C;
		inline constexpr uintptr_t m_nIndex = 0x40;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
		inline constexpr uintptr_t m_vecStart = 0x2C;
	}

	namespace DT_TEDust {
		inline constexpr uintptr_t m_flSize = 0x30;
		inline constexpr uintptr_t m_flSpeed = 0x34;
		inline constexpr uintptr_t m_vecDirection = 0x38;
	}

	namespace DT_TEDynamicLight {
		inline constexpr uintptr_t b = 0x38;
		inline constexpr uintptr_t exponent = 0x3C;
		inline constexpr uintptr_t g = 0x34;
		inline constexpr uintptr_t m_fDecay = 0x44;
		inline constexpr uintptr_t m_fRadius = 0x2C;
		inline constexpr uintptr_t m_fTime = 0x40;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
		inline constexpr uintptr_t r = 0x30;
	}

	namespace DT_TEEnergySplash {
		inline constexpr uintptr_t m_bExplosive = 0x38;
		inline constexpr uintptr_t m_vecDir = 0x2C;
		inline constexpr uintptr_t m_vecPos = 0x20;
	}

	namespace DT_TEExplosion {
		inline constexpr uintptr_t m_fScale = 0x30;
		inline constexpr uintptr_t m_nFlags = 0x34;
		inline constexpr uintptr_t m_nMagnitude = 0x3C;
		inline constexpr uintptr_t m_nRadius = 0x38;
	}

	namespace DT_TEFizz {
		inline constexpr uintptr_t m_nCurrent = 0x2C;
		inline constexpr uintptr_t m_nDensity = 0x28;
		inline constexpr uintptr_t m_nEntity = 0x20;
		inline constexpr uintptr_t m_nModelIndex = 0x24;
	}

	namespace DT_TEFootprintDecal {
		inline constexpr uintptr_t m_nEntity = 0x44;
		inline constexpr uintptr_t m_nIndex = 0x48;
		inline constexpr uintptr_t m_vecDirection = 0x2C;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
	}

	namespace DT_TEGaussExplosion {
		inline constexpr uintptr_t m_nType = 0x30;
		inline constexpr uintptr_t m_vecDirection = 0x34;
	}

	namespace DT_TEGlowSprite {
		inline constexpr uintptr_t m_fLife = 0x34;
		inline constexpr uintptr_t m_fScale = 0x30;
		inline constexpr uintptr_t m_nBrightness = 0x38;
		inline constexpr uintptr_t m_nModelIndex = 0x2C;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
	}

	namespace DT_TEHL2MPFireBullets {
		inline constexpr uintptr_t m_TracerType = 0x58;
		inline constexpr uintptr_t m_bDoImpacts = 0x50;
		inline constexpr uintptr_t m_bDoTracers = 0x51;
		inline constexpr uintptr_t m_flSpread = 0x48;
		inline constexpr uintptr_t m_flSpreadY = 0x54;
		inline constexpr uintptr_t m_iAmmoID = 0x3C;
		inline constexpr uintptr_t m_iPlayer = 0x20;
		inline constexpr uintptr_t m_iSeed = 0x44;
		inline constexpr uintptr_t m_iShots = 0x4C;
		inline constexpr uintptr_t m_iWeaponIndex = 0x40;
		inline constexpr uintptr_t m_vecDir = 0x30;
		inline constexpr uintptr_t m_vecOrigin = 0x24;
	}

	namespace DT_TEKillPlayerAttachments {
		inline constexpr uintptr_t m_nPlayer = 0x20;
	}

	namespace DT_TELargeFunnel {
		inline constexpr uintptr_t m_nReversed = 0x30;
	}

	namespace DT_TEMetalSparks {
		inline constexpr uintptr_t m_vecDir = 0x2C;
		inline constexpr uintptr_t m_vecPos = 0x20;
	}

	namespace DT_TEMuzzleFlash {
		inline constexpr uintptr_t m_flScale = 0x38;
		inline constexpr uintptr_t m_nType = 0x3C;
		inline constexpr uintptr_t m_vecAngles = 0x2C;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
	}

	namespace DT_TEParticleSystem {
		inline constexpr uintptr_t m_vecOrigin_0 = 0x20;
		inline constexpr uintptr_t m_vecOrigin_1 = 0x24;
		inline constexpr uintptr_t m_vecOrigin_2 = 0x28;
	}

	namespace DT_TEPhysicsProp {
		inline constexpr uintptr_t m_angRotation_0 = 0x2C;
		inline constexpr uintptr_t m_angRotation_1 = 0x30;
		inline constexpr uintptr_t m_angRotation_2 = 0x34;
		inline constexpr uintptr_t m_clrRender = 0x54;
		inline constexpr uintptr_t m_fModelScale = 0x58;
		inline constexpr uintptr_t m_nEffects = 0x50;
		inline constexpr uintptr_t m_nFlags = 0x4C;
		inline constexpr uintptr_t m_nModelIndex = 0x44;
		inline constexpr uintptr_t m_nSkin = 0x48;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
		inline constexpr uintptr_t m_vecVelocity = 0x38;
	}

	namespace DT_TEPlayerAnimEvent {
		inline constexpr uintptr_t m_hPlayer = 0x20;
		inline constexpr uintptr_t m_iEvent = 0x24;
		inline constexpr uintptr_t m_nData = 0x28;
	}

	namespace DT_TEPlayerDecal {
		inline constexpr uintptr_t m_nEntity = 0x30;
		inline constexpr uintptr_t m_nPlayer = 0x20;
		inline constexpr uintptr_t m_vecOrigin = 0x24;
	}

	namespace DT_TEProjectedDecal {
		inline constexpr uintptr_t m_angRotation = 0x2C;
		inline constexpr uintptr_t m_flDistance = 0x38;
		inline constexpr uintptr_t m_nIndex = 0x3C;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
	}

	namespace DT_TEShatterSurface {
		inline constexpr uintptr_t m_flHeight = 0x54;
		inline constexpr uintptr_t m_flShardSize = 0x58;
		inline constexpr uintptr_t m_flWidth = 0x50;
		inline constexpr uintptr_t m_nSurfaceType = 0x5C;
		inline constexpr uintptr_t m_uchBackColor_0 = 0x63;
		inline constexpr uintptr_t m_uchBackColor_1 = 0x64;
		inline constexpr uintptr_t m_uchBackColor_2 = 0x65;
		inline constexpr uintptr_t m_uchFrontColor_0 = 0x60;
		inline constexpr uintptr_t m_uchFrontColor_1 = 0x61;
		inline constexpr uintptr_t m_uchFrontColor_2 = 0x62;
		inline constexpr uintptr_t m_vecAngles = 0x2C;
		inline constexpr uintptr_t m_vecForce = 0x38;
		inline constexpr uintptr_t m_vecForcePos = 0x44;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
	}

	namespace DT_TEShowLine {
		inline constexpr uintptr_t m_vecEnd = 0x30;
	}

	namespace DT_TESmoke {
		inline constexpr uintptr_t m_fScale = 0x30;
		inline constexpr uintptr_t m_nFrameRate = 0x34;
		inline constexpr uintptr_t m_nModelIndex = 0x2C;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
	}

	namespace DT_TESparks {
		inline constexpr uintptr_t m_nMagnitude = 0x30;
		inline constexpr uintptr_t m_nTrailLength = 0x34;
		inline constexpr uintptr_t m_vecDir = 0x38;
	}

	namespace DT_TESprite {
		inline constexpr uintptr_t m_fScale = 0x30;
		inline constexpr uintptr_t m_nBrightness = 0x34;
		inline constexpr uintptr_t m_nModelIndex = 0x2C;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
	}

	namespace DT_TESpriteSpray {
		inline constexpr uintptr_t m_fNoise = 0x40;
		inline constexpr uintptr_t m_nCount = 0x44;
		inline constexpr uintptr_t m_nModelIndex = 0x38;
		inline constexpr uintptr_t m_nSpeed = 0x3C;
		inline constexpr uintptr_t m_vecDirection = 0x2C;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
	}

	namespace DT_TEWorldDecal {
		inline constexpr uintptr_t m_nIndex = 0x2C;
		inline constexpr uintptr_t m_vecOrigin = 0x20;
	}

	namespace DT_Team {
		inline constexpr uintptr_t m_iRoundsWon = 0x1704;
		inline constexpr uintptr_t m_iScore = 0x1700;
		inline constexpr uintptr_t m_iTeamNum = 0x1714;
		inline constexpr uintptr_t m_szTeamname = 0x16E0;
		inline constexpr uintptr_t player_array = 0x0;
		inline constexpr uintptr_t player_array_element = 0x0;
	}

	namespace DT_Tesla {
		inline constexpr uintptr_t m_SoundName = 0x16F0;
		inline constexpr uintptr_t m_iszSpriteName = 0x1730;
	}

	namespace DT_VGuiScreen {
		inline constexpr uintptr_t m_fScreenFlags = 0x16F4;
		inline constexpr uintptr_t m_flHeight = 0x16CC;
		inline constexpr uintptr_t m_flWidth = 0x16C8;
		inline constexpr uintptr_t m_hPlayerOwner = 0x1760;
		inline constexpr uintptr_t m_nAttachmentIndex = 0x16EC;
		inline constexpr uintptr_t m_nOverlayMaterial = 0x16F0;
		inline constexpr uintptr_t m_nPanelName = 0x16D0;
	}

	namespace DT_VortigauntChargeToken {
		inline constexpr uintptr_t m_bFadeOut = 0x16C8;
	}

	namespace DT_VortigauntEffectDispel {
		inline constexpr uintptr_t m_bFadeOut = 0x16D0;
	}

	namespace DT_WaterLODControl {
		inline constexpr uintptr_t m_flCheapWaterEndDistance = 0x16C4;
		inline constexpr uintptr_t m_flCheapWaterStartDistance = 0x16C0;
	}

	namespace DT_Weapon357_HL1 {
		inline constexpr uintptr_t m_fInZoom = 0x1C78;
	}

	namespace DT_WeaponBugBait {
		inline constexpr uintptr_t m_bDrawBackFinished = 0x1CB0;
		inline constexpr uintptr_t m_bRedraw = 0x1CB1;
	}

	namespace DT_WeaponCrossbow {
		inline constexpr uintptr_t m_bInZoom = 0x1CB4;
		inline constexpr uintptr_t m_bMustReload = 0x1CB5;
	}

	namespace DT_WeaponCrossbow_HL1 {
		inline constexpr uintptr_t m_fInZoom = 0x1C78;
	}

	namespace DT_WeaponFrag {
		inline constexpr uintptr_t m_AttackPaused = 0x1CB4;
		inline constexpr uintptr_t m_bRedraw = 0x1CB0;
		inline constexpr uintptr_t m_fDrawbackFinished = 0x1CB8;
	}

	namespace DT_WeaponGauss {
		inline constexpr uintptr_t m_bPrimaryFire = 0x1C7C;
		inline constexpr uintptr_t m_flAmmoStartCharge = 0x1C84;
		inline constexpr uintptr_t m_flNextAmmoBurn = 0x1C90;
		inline constexpr uintptr_t m_flPlayAftershock = 0x1C88;
		inline constexpr uintptr_t m_flStartCharge = 0x1C80;
		inline constexpr uintptr_t m_nAttackState = 0x1C78;
	}

	namespace DT_WeaponHandGrenade {
		inline constexpr uintptr_t m_flReleaseThrow = 0x1C7C;
		inline constexpr uintptr_t m_flStartThrow = 0x1C78;
	}

	namespace DT_WeaponHgun {
		inline constexpr uintptr_t m_flRechargeTime = 0x1C78;
		inline constexpr uintptr_t m_iFirePhase = 0x1C7C;
	}

	namespace DT_WeaponPhysCannon {
		inline constexpr uintptr_t m_EffectState = 0x2154;
		inline constexpr uintptr_t m_attachedAnglesPlayerSpace_0 = 0x1CB0;
		inline constexpr uintptr_t m_attachedAnglesPlayerSpace_1 = 0x1CB4;
		inline constexpr uintptr_t m_attachedAnglesPlayerSpace_2 = 0x1CB8;
		inline constexpr uintptr_t m_attachedPositionObjectSpace = 0x1CBC;
		inline constexpr uintptr_t m_bActive = 0x2150;
		inline constexpr uintptr_t m_bOpen = 0x2158;
		inline constexpr uintptr_t m_bPhyscannonState = 0x2159;
		inline constexpr uintptr_t m_hAttachedObject = 0x1CC8;
	}

	namespace DT_WeaponPhysGun {
		inline constexpr uintptr_t m_hGrabbedEntity = 0x1CB0;
		inline constexpr uintptr_t m_hPhysBeam = 0x1CB4;
		inline constexpr uintptr_t m_vHitPosLocal = 0x1CB8;
	}

	namespace DT_WeaponPistol {
		inline constexpr uintptr_t m_flAccuracyPenalty = 0x1CD0;
		inline constexpr uintptr_t m_flLastAttackTime = 0x1CC8;
		inline constexpr uintptr_t m_flSoonestPrimaryAttack = 0x1CC0;
		inline constexpr uintptr_t m_nNumShotsFired = 0x1CD4;
	}

	namespace DT_WeaponRPG {
		inline constexpr uintptr_t m_bGuiding = 0x1CC9;
		inline constexpr uintptr_t m_bHideGuiding = 0x1CCA;
		inline constexpr uintptr_t m_bInitialStateUpdate = 0x1CC8;
		inline constexpr uintptr_t m_hMissile = 0x1CCC;
		inline constexpr uintptr_t m_vecLaserDot = 0x1CD0;
	}

	namespace DT_WeaponRPG_HL1 {
		inline constexpr uintptr_t m_bGuiding = 0x1C78;
		inline constexpr uintptr_t m_bIntialStateUpdate = 0x1C79;
		inline constexpr uintptr_t m_bLaserDotSuspended = 0x1C7A;
	}

	namespace DT_WeaponSWEP {
		inline constexpr uintptr_t m_strHoldType = 0x1E28;
	}

	namespace DT_WeaponSatchel {
		inline constexpr uintptr_t m_iChargeReady = 0x1C88;
		inline constexpr uintptr_t m_iRadioViewIndex = 0x1C78;
		inline constexpr uintptr_t m_iRadioWorldIndex = 0x1C7C;
		inline constexpr uintptr_t m_iSatchelViewIndex = 0x1C80;
		inline constexpr uintptr_t m_iSatchelWorldIndex = 0x1C84;
	}

	namespace DT_WeaponShotgun {
		inline constexpr uintptr_t m_bDelayedFire1 = 0x1CB1;
		inline constexpr uintptr_t m_bDelayedFire2 = 0x1CB2;
		inline constexpr uintptr_t m_bDelayedReload = 0x1CB3;
		inline constexpr uintptr_t m_bNeedPump = 0x1CB0;
	}

	namespace DT_WeaponShotgun_HL1 {
		inline constexpr uintptr_t m_fInSpecialReload = 0x1C7C;
		inline constexpr uintptr_t m_flPumpTime = 0x1C78;
	}

	namespace DT_WeaponSnark {
		inline constexpr uintptr_t m_bJustThrown = 0x1C78;
	}

	namespace DT_WeaponStunStick {
		inline constexpr uintptr_t m_bActive = 0x1D04;
	}

	namespace DT_WeaponTripMine {
		inline constexpr uintptr_t m_iGroundIndex = 0x1C78;
		inline constexpr uintptr_t m_iPickedUpIndex = 0x1C7C;
	}

	namespace DT_Weapon_SLAM {
		inline constexpr uintptr_t m_bAttachSatchel = 0x1CBA;
		inline constexpr uintptr_t m_bAttachTripmine = 0x1CBB;
		inline constexpr uintptr_t m_bClearReload = 0x1CB8;
		inline constexpr uintptr_t m_bDetonatorArmed = 0x1CB4;
		inline constexpr uintptr_t m_bNeedDetonatorDraw = 0x1CB5;
		inline constexpr uintptr_t m_bNeedDetonatorHolster = 0x1CB6;
		inline constexpr uintptr_t m_bNeedReload = 0x1CB7;
		inline constexpr uintptr_t m_bThrowSatchel = 0x1CB9;
		inline constexpr uintptr_t m_tSlamState = 0x1CB0;
	}

	namespace DT_World {
		inline constexpr uintptr_t m_WorldMaxs = 0x16CC;
		inline constexpr uintptr_t m_WorldMins = 0x16C0;
		inline constexpr uintptr_t m_bStartDark = 0x16D8;
		inline constexpr uintptr_t m_flMaxOccludeeArea = 0x16DC;
		inline constexpr uintptr_t m_flMaxPropScreenSpaceWidth = 0x16E8;
		inline constexpr uintptr_t m_flMinOccluderArea = 0x16E0;
		inline constexpr uintptr_t m_flMinPropScreenSpaceWidth = 0x16E4;
		inline constexpr uintptr_t m_iszDetailSpriteMaterial = 0x16EC;
	}

	namespace _LPT_m_AnimOverlay_15 {
		inline constexpr uintptr_t overlay_vars_m_AnimOverlay_lengthproxy_lengthprop15 = 0x0;
	}

	namespace _LPT_m_hActorList_16 {
		inline constexpr uintptr_t m_hActorList_lengthproxy_lengthprop16 = 0x0;
	}

}
