#pragma once

#include <cstdint>

namespace Offsets {
    namespace TaskScheduler {
        inline constexpr uintptr_t Pointer = 0x79653d8;
        inline constexpr uintptr_t MaxFPS = 0xb8;
        inline constexpr uintptr_t JobStart = 0xd0;
        inline constexpr uintptr_t JobEnd = 0xd8;
        inline constexpr uintptr_t JobName = 0x18;
    }

    namespace RenderJob {
        inline constexpr uintptr_t FakeDataModel = 0x30;
        inline constexpr uintptr_t RealDataModel = 0x1f0;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t RealDataModel = 0x1f0;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t Pointer = 0x791d9f0;
        inline constexpr uintptr_t Dimensions = 0xb00;
        inline constexpr uintptr_t ViewMatrix = 0x120;
    }

    namespace Instance {
        inline constexpr uintptr_t NameContainer = 0x70;
        inline constexpr uintptr_t Name = 0x8;
        inline constexpr uintptr_t ChildrenStart = 0x78;
        inline constexpr uintptr_t ChildrenEnd = 0x8;
        inline constexpr uintptr_t Parent = 0x68;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t ClassBase = 0x1b0;
    }

    namespace Misc {
        inline constexpr uintptr_t Adornee = 0xe0;
        inline constexpr uintptr_t Value = 0xa9;
    }

    namespace DataModel {
        inline constexpr uintptr_t PlaceId = 0x178;
        inline constexpr uintptr_t GameId = 0x170;
        inline constexpr uintptr_t CreatorId = 0x168;
        inline constexpr uintptr_t Workspace = 0x140;
        inline constexpr uintptr_t ServerIP = 0x549;
        inline constexpr uintptr_t JobId = 0x110;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t PlaceVersion = 0x194;
        inline constexpr uintptr_t PrimitiveCount = 0x3c8;
    }

    namespace RunService {
        inline constexpr uintptr_t HeartbeatTask = 0xd0;
        inline constexpr uintptr_t HeartbeatFPS = 0xb8;
    }

    namespace Player {
        inline constexpr uintptr_t LocalPlayer = 0x110;
        inline constexpr uintptr_t UserId = 0xc0;
        inline constexpr uintptr_t DisplayName = 0x111;
        inline constexpr uintptr_t LocaleId = 0xf9;
        inline constexpr uintptr_t ModelInstance = 0x240;
        inline constexpr uintptr_t TeamColor = 0x358;
        inline constexpr uintptr_t HealthDisplayDistance = 0x33c;
        inline constexpr uintptr_t NameDisplayDistance = 0x34c;
        inline constexpr uintptr_t AccountAge = 0x304;
        inline constexpr uintptr_t Team = 0x280;
        inline constexpr uintptr_t MinZoomDistance = 0x314;
        inline constexpr uintptr_t MaxZoomDistance = 0x310;
        inline constexpr uintptr_t CameraMode = 0x318;
    }

    namespace Humanoid {
        inline constexpr uintptr_t Health = 0x170;
        inline constexpr uintptr_t MaxHealth = 0x188;
        inline constexpr uintptr_t Walkspeed = 0x1b0;
        inline constexpr uintptr_t WalkspeedCheck = 0x38c;
        inline constexpr uintptr_t JumpPower = 0x184;
        inline constexpr uintptr_t JumpHeight = 0x180;
        inline constexpr uintptr_t MaxSlopeAngle = 0x18c;
        inline constexpr uintptr_t SeatPart = 0xe8;
        inline constexpr uintptr_t HumanoidRootPart = 0x438;
        inline constexpr uintptr_t CameraOffset = 0x108;
        inline constexpr uintptr_t HealthDisplayDistance = 0x168;
        inline constexpr uintptr_t NameDisplayDistance = 0x190;
        inline constexpr uintptr_t DisplayDistanceType = 0x160;
        inline constexpr uintptr_t HealthDisplayType = 0x16c;
        inline constexpr uintptr_t NameOcclusion = 0x194;
        inline constexpr uintptr_t RigType = 0x1a0;
        inline constexpr uintptr_t UseJumpPower = 0x1c0;
        inline constexpr uintptr_t AutomaticScalingEnabled = 0x1b6;
        inline constexpr uintptr_t BreakJointsOnDeath = 0x1b7;
        inline constexpr uintptr_t EvaluateStateMachine = 0x1b8;
        inline constexpr uintptr_t RequiresNeck = 0x1bd;
        inline constexpr uintptr_t AutoJumpEnabled = 0x1b4;
        inline constexpr uintptr_t AutoRotate = 0x1b5;
        inline constexpr uintptr_t Sit = 0x1be;
        inline constexpr uintptr_t DisplayName = 0xa9;
        inline constexpr uintptr_t MoveDirection = 0x120;
        inline constexpr uintptr_t MoveToPoint = 0x144;
        inline constexpr uintptr_t MoveToPart = 0xf8;
        inline constexpr uintptr_t WalkTimer = 0x3d0;
        inline constexpr uintptr_t FloorMaterial = 0xf64;
        inline constexpr uintptr_t Jump = 0x160;
        inline constexpr uintptr_t PlatformStand = 0x1bc;
        inline constexpr uintptr_t HipHeight = 0x174;
        inline constexpr uintptr_t TargetPoint = 0x12c;
        inline constexpr uintptr_t WalkToPoint = 0x154;
    }

    namespace Team {
        inline constexpr uintptr_t BrickColor = 0xa8;
        inline constexpr uintptr_t TeamColor = 0xa8;
    }

    namespace Seat {
        inline constexpr uintptr_t Occupant = 0x1f8;
    }

    namespace VehicleSeat {
        inline constexpr uintptr_t MaxSpeed = 0x208;
        inline constexpr uintptr_t SteerFloat = 0x20c;
        inline constexpr uintptr_t ThrottleFloat = 0x210;
        inline constexpr uintptr_t Torque = 0x214;
        inline constexpr uintptr_t TurnSpeed = 0x218;
    }

    namespace Tool {
        inline constexpr uintptr_t Tooltip = 0x3f1;
        inline constexpr uintptr_t Grip = 0x42c;
        inline constexpr uintptr_t Enabled = 0x90d;
        inline constexpr uintptr_t CanBeDropped = 0x914;
        inline constexpr uintptr_t ManualActivationOnly = 0x910;
        inline constexpr uintptr_t RequiresHandle = 0x911;
    }

    namespace CharacterMesh {
        inline constexpr uintptr_t BaseTextureId = 0xb9;
        inline constexpr uintptr_t OverlayTextureId = 0x109;
        inline constexpr uintptr_t MeshId = 0xe1;
        inline constexpr uintptr_t BodyPart = 0x120;
    }

    namespace Workspace {
        inline constexpr uintptr_t CurrentCamera = 0x460;
        inline constexpr uintptr_t World = 0x3c0;
        inline constexpr uintptr_t ReadOnlyGravity = 0x940;
        inline constexpr uintptr_t DistributedGameTime = 0x480;
    }

    namespace Camera {
        inline constexpr uintptr_t CameraSubject = 0xb0;
        inline constexpr uintptr_t Rotation = 0xc0;
        inline constexpr uintptr_t Position = 0xe4;
        inline constexpr uintptr_t FieldOfView = 0x128;
        inline constexpr uintptr_t ImagePlaneDepth = 0x2bc;
        inline constexpr uintptr_t CameraType = 0x120;
        inline constexpr uintptr_t Viewport = 0x274;
        inline constexpr uintptr_t ViewportSize = 0x2b4;
    }

    namespace BasePart {
        inline constexpr uintptr_t Primitive = 0x168;
        inline constexpr uintptr_t Shape = 0x198;
        inline constexpr uintptr_t Reflectance = 0xf4;
        inline constexpr uintptr_t CastShadow = 0x11d;
        inline constexpr uintptr_t Locked = 0x11e;
        inline constexpr uintptr_t Massless = 0x11f;
    }

    namespace Primitive {
        inline constexpr uintptr_t Position = 0xd4;
        inline constexpr uintptr_t CFrame = 0xb0;
        inline constexpr uintptr_t Rotation = 0xb0;
        inline constexpr uintptr_t Size = 0x1bc;
        inline constexpr uintptr_t AssemblyLinearVelocity = 0xe0;
        inline constexpr uintptr_t Owner = 0x210;
        inline constexpr uintptr_t Flags = 0x1b6;
        inline constexpr uintptr_t AssemblyAngularVelocity = 0xec;
    }

    namespace Model {
        inline constexpr uintptr_t PrimaryPart = 0x208;
        inline constexpr uintptr_t Scale = 0x12c;
    }

    namespace WorldRoot {
        inline constexpr uintptr_t RaycastBoundDesc = 0x7632380;
        inline constexpr uintptr_t RaycastBoundFn = 0x80;
    }

    namespace MouseService {
        inline constexpr uintptr_t InputObject = 0xe0;
        inline constexpr uintptr_t InputObject2 = 0xf0;
    }

    namespace InputObject {
        inline constexpr uintptr_t MousePosition = 0xc4;
    }

    namespace World {
        inline constexpr uintptr_t Gravity = 0x220;
        inline constexpr uintptr_t worldStepsPerSec = 0x6e0;
        inline constexpr uintptr_t FallenPartsDestroyHeight = 0x214;
        inline constexpr uintptr_t AirProperties = 0x238;
        inline constexpr uintptr_t Primitives = 0x2a8;
    }

    namespace AirProperties {
        inline constexpr uintptr_t AirDensity = 0x10;
        inline constexpr uintptr_t GlobalWind = 0x34;
    }

    namespace Terrain {
        inline constexpr uintptr_t GrassLength = 0x1d0;
        inline constexpr uintptr_t WaterReflectance = 0x1d8;
        inline constexpr uintptr_t WaterTransparency = 0x1dc;
        inline constexpr uintptr_t WaterWaveSize = 0x1e0;
        inline constexpr uintptr_t WaterWaveSpeed = 0x1e4;
        inline constexpr uintptr_t WaterColor = 0x1c0;
        inline constexpr uintptr_t MaterialColors = 0x498;
    }

    namespace MaterialColors {
        inline constexpr uintptr_t Asphalt = 0x30;
        inline constexpr uintptr_t Basalt = 0x27;
        inline constexpr uintptr_t Brick = 0xf;
        inline constexpr uintptr_t Cobblestone = 0x33;
        inline constexpr uintptr_t Concrete = 0xc;
        inline constexpr uintptr_t CrackedLava = 0x2d;
        inline constexpr uintptr_t Glacier = 0x1b;
        inline constexpr uintptr_t Grass = 0x6;
        inline constexpr uintptr_t Ground = 0x2a;
        inline constexpr uintptr_t Ice = 0x36;
        inline constexpr uintptr_t LeafyGrass = 0x39;
        inline constexpr uintptr_t Limestone = 0x3f;
        inline constexpr uintptr_t Mud = 0x24;
        inline constexpr uintptr_t Pavement = 0x42;
        inline constexpr uintptr_t Rock = 0x18;
        inline constexpr uintptr_t Salt = 0x3c;
        inline constexpr uintptr_t Sand = 0x12;
        inline constexpr uintptr_t Sandstone = 0x21;
        inline constexpr uintptr_t Slate = 0x9;
        inline constexpr uintptr_t Snow = 0x1e;
        inline constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace Sound {
        inline constexpr uintptr_t SoundId = 0xb9;
        inline constexpr uintptr_t RollOffMaxDistance = 0x108;
        inline constexpr uintptr_t RollOffMinDistance = 0x10c;
        inline constexpr uintptr_t PlaybackSpeed = 0x104;
        inline constexpr uintptr_t Volume = 0x118;
        inline constexpr uintptr_t SoundGroup = 0xd0;
        inline constexpr uintptr_t IsPlaying = 0x128;
        inline constexpr uintptr_t Looped = 0x125;
    }

    namespace SpawnLocation {
        inline constexpr uintptr_t ForcefieldDuration = 0x1c8;
        inline constexpr uintptr_t TeamColor = 0x1cc;
        inline constexpr uintptr_t AllowTeamChangeOnTouch = 0x1d0;
        inline constexpr uintptr_t Enabled = 0x1d1;
        inline constexpr uintptr_t Neutral = 0x1d2;
    }

    namespace SurfaceAppearance {
        inline constexpr uintptr_t AlphaMode = 0x1b0;
        inline constexpr uintptr_t EmissiveStrength = 0x1b4;
    }

    namespace ParticleEmitter {
        inline constexpr uintptr_t Brightness = 0x204;
        inline constexpr uintptr_t LightEmission = 0x220;
        inline constexpr uintptr_t LightInfluence = 0x224;
        inline constexpr uintptr_t ZOffset = 0x24c;
        inline constexpr uintptr_t Lifetime = 0x1dc;
        inline constexpr uintptr_t Rate = 0x230;
        inline constexpr uintptr_t Rotation = 0x1ec;
        inline constexpr uintptr_t RotSpeed = 0x1e4;
        inline constexpr uintptr_t Speed = 0x1f4;
        inline constexpr uintptr_t SpreadAngle = 0x1fc;
        inline constexpr uintptr_t Acceleration = 0x1c8;
        inline constexpr uintptr_t Drag = 0x208;
        inline constexpr uintptr_t TimeScale = 0x244;
        inline constexpr uintptr_t VelocityInheritance = 0x248;
    }

    namespace Beam {
        inline constexpr uintptr_t Brightness = 0x168;
        inline constexpr uintptr_t LightEmission = 0x174;
        inline constexpr uintptr_t LightInfluence = 0x178;
        inline constexpr uintptr_t TextureLength = 0x184;
        inline constexpr uintptr_t TextureSpeed = 0x18c;
        inline constexpr uintptr_t ZOffset = 0x198;
        inline constexpr uintptr_t Attachment0 = 0x148;
        inline constexpr uintptr_t Attachment1 = 0x158;
        inline constexpr uintptr_t CurveSize0 = 0x16c;
        inline constexpr uintptr_t CurveSize1 = 0x170;
        inline constexpr uintptr_t Width0 = 0x190;
        inline constexpr uintptr_t Width1 = 0x194;
    }

    namespace Lighting {
        inline constexpr uintptr_t ClockTime = 0xb8;
        inline constexpr uintptr_t Brightness = 0x108;
        inline constexpr uintptr_t EnvironmentDiffuseScale = 0x10c;
        inline constexpr uintptr_t EnvironmentSpecularScale = 0x110;
        inline constexpr uintptr_t FogStart = 0x120;
        inline constexpr uintptr_t FogEnd = 0x11c;
        inline constexpr uintptr_t FogColor = 0xe4;
        inline constexpr uintptr_t Ambient = 0xc0;
        inline constexpr uintptr_t OutdoorAmbient = 0xf0;
        inline constexpr uintptr_t ColorShift_Top = 0xcc;
        inline constexpr uintptr_t ColorShift_Bottom = 0xd8;
        inline constexpr uintptr_t ExposureCompensation = 0x114;
        inline constexpr uintptr_t GeographicLatitude = 0x124;
        inline constexpr uintptr_t LightColor = 0x14c;
        inline constexpr uintptr_t GradientTop = 0x140;
        inline constexpr uintptr_t GradientBottom = 0x180;
        inline constexpr uintptr_t MoonPosition = 0x174;
        inline constexpr uintptr_t SunPosition = 0x158;
        inline constexpr uintptr_t Sky = 0x1b8;
    }

    namespace Sky {
        inline constexpr uintptr_t SunAngularSize = 0x4;
        inline constexpr uintptr_t MoonAngularSize = 0x4;
        inline constexpr uintptr_t SkyboxOrientation = 0x6e8;
        inline constexpr uintptr_t StarCount = 0x1f8;
        inline constexpr uintptr_t SunTextureId = 0x6dc;
    }

    namespace Atmosphere {
        inline constexpr uintptr_t Density = 0xc0;
        inline constexpr uintptr_t Offset = 0xcc;
        inline constexpr uintptr_t Color = 0xa8;
        inline constexpr uintptr_t Glare = 0xc4;
        inline constexpr uintptr_t Haze = 0xc8;
    }

    namespace BloomEffect {
        inline constexpr uintptr_t Intensity = 0xa0;
        inline constexpr uintptr_t Size = 0xa4;
        inline constexpr uintptr_t Threshold = 0xa8;
        inline constexpr uintptr_t Enabled = 0x100;
    }

    namespace DepthOfFieldEffect {
        inline constexpr uintptr_t FocusDistance = 0xa4;
        inline constexpr uintptr_t FarIntensity = 0xa0;
        inline constexpr uintptr_t NearIntensity = 0xac;
        inline constexpr uintptr_t InFocusRadius = 0xa8;
    }

    namespace SunRaysEffect {
        inline constexpr uintptr_t Intensity = 0xa0;
        inline constexpr uintptr_t Spread = 0xa4;
    }

    namespace ColorCorrectionEffect {
        inline constexpr uintptr_t Brightness = 0xac;
        inline constexpr uintptr_t Contrast = 0xb0;
    }

    namespace ColorGradingEffect {
        inline constexpr uintptr_t TonemapperPreset = 0xa0;
    }

    namespace BlurEffect {
        inline constexpr uintptr_t Size = 0xa0;
    }

    namespace ProximityPrompt {
        inline constexpr uintptr_t ActionText = 0xa1;
        inline constexpr uintptr_t ObjectText = 0xb9;
        inline constexpr uintptr_t HoldDuration = 0x100;
        inline constexpr uintptr_t MaxActivationDistance = 0x108;
        inline constexpr uintptr_t KeyCode = 0x104;
        inline constexpr uintptr_t GamepadKeyCode = 0xfc;
        inline constexpr uintptr_t Enabled = 0x116;
        inline constexpr uintptr_t RequiresLineOfSight = 0x117;
    }

    namespace ClickDetector {
        inline constexpr uintptr_t MaxActivationDistance = 0xd0;
    }

    namespace DragDetector {
        inline constexpr uintptr_t ReferenceInstance = 0x1c8;
        inline constexpr uintptr_t MaxActivationDistance = 0xd0;
        inline constexpr uintptr_t MaxDragAngle = 0x280;
        inline constexpr uintptr_t MaxDragTranslation = 0x244;
        inline constexpr uintptr_t MinDragAngle = 0x28c;
        inline constexpr uintptr_t MinDragTranslation = 0x250;
        inline constexpr uintptr_t MaxForce = 0x284;
        inline constexpr uintptr_t MaxTorque = 0x288;
        inline constexpr uintptr_t Responsiveness = 0x298;
    }

    namespace StatsItem {
        inline constexpr uintptr_t Value = 0x180;
    }
}
