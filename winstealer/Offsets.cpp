#include "Offsets.h"

Offsets::Offsets() {};



int Offsets::GameTime = 0x313E244;	//F3 0F 5C ? ? ? ? ? 0F 2F C1 F3 0F 11 ? ? ? 76

int Offsets::ObjIndex = 0x8;
int Offsets::ObjTeam = 0x34;
int Offsets::ObjMissileName = 0x54;
int Offsets::ObjNetworkID = 0xB4;
int Offsets::ObjPos = 0x1DC;	//f3 0f 10 8e ? ? ? ? f3 0f 10 96  ? ? ? ? f3 0f 10 86 ? ? ? ? f3 0f 5c 8f
int Offsets::ObjMissileSpellCast = 0x250;//
int Offsets::ObjVisibility = 0x274;//done
int Offsets::ObjSpawnCount = 0x288;//done
int Offsets::ObjSrcIndex = 0x294;//done
int Offsets::ObjMana = 0x029C;//done
int Offsets::ObjMaxMana = 0x2AC;
int Offsets::ObjRecallState = 0x0D90;
int Offsets::ObjHealth = 0xE74;	//8D 8B ? ? ? ? C6 83 ? ? ? ? ? 50 8D 83 ? ? ? ? C7 83 ? ? ? ? ? ? ? ? 50
int Offsets::ObjMaxHealth = 0xE84; // done 
int Offsets::ObjAbilityHaste = 0x1690;
int Offsets::ObjLethality = 0x128C;
int Offsets::ObjArmor = 0x137C; // done 
int Offsets::ObjBonusArmor = 0x1380;
int Offsets::ObjMagicRes = 0x1384;
int Offsets::ObjBonusMagicRes = 0x1388;
int Offsets::ObjBaseAtk = 0x1354;
int Offsets::ObjBonusAtk = 0x12CC;
int Offsets::ObjMoveSpeed = 0x1394;
int Offsets::ObjSpellBook = 0x29C0;
int Offsets::ObjTransformation = 0x3070;
int Offsets::ObjName = 0x2DB4;
int Offsets::ObjLvl = 0x35A4;
int Offsets::ObjExpiry = 0x298;//
int Offsets::ObjCrit = 0x1850;
int Offsets::ObjCritMulti = 0x12B8;
int Offsets::ObjAbilityPower = 0x1750;
int Offsets::ObjAtkSpeedMulti = 0x1350;
int Offsets::ObjAtkRange = 0x139C;
int Offsets::ObjTargetable = 0xD04;
int Offsets::ObjInvulnerable = 0x3D4;
int Offsets::ObjIsMoving = 0x32E7;
int Offsets::ObjDirection = 0x1AD0;
int Offsets::ObjItemList = 0x35A8;
int Offsets::ObjExpierience = 0x337C;
int Offsets::ObjMagicPen = 0x1270;
int Offsets::ObjMagicPenMulti = 0x1278;
int Offsets::ObjAdditionalApMulti = 0x1248;
int Offsets::ObjManaRegen = 0x11E0;
int Offsets::ObjHealthRegen = 0x1390;

int Offsets::ZoomClass = 0x313D334; //A3 ? ? ? ? 83 F9 10 72 32 // 8D 4E 70 C7 05 ? ? ? ? ? ? ? 
int Offsets::MaxZoom = 0x20;//

int Offsets::Chat = 0x1574CE0; //v //  74 1E 8B 09 > jump to loc first dword //8B 0D ? ? ? ? 8A D8 85 C9  // C7 46 ?? ?? ?? ?? ?? 8B CE 5E 5D C7 05 ?? ?? ?? ?? ?? ?? ?? ?? 5B E9 ?? ?? ?? ?? E8 ?? ?? ?? ?? PRIMA DWORD SOTTO
int Offsets::ChatIsOpen = 0x6D8;

int Offsets::SpellBookActiveSpellCast = 0x20;//
int Offsets::SpellBookSpellSlots = 0x478;

int Offsets::ObjBuffManager = 0x2330;//
int Offsets::BuffManagerEntriesArray = 0x10;//
int Offsets::BuffEntryBuff = 0x8;//
int Offsets::BuffType = 0x4;//
int Offsets::BuffEntryBuffStartTime = 0xC;//
int Offsets::BuffEntryBuffEndTime = 0x10;//
int Offsets::BuffEntryBuffCount = 0x74;//
int Offsets::BuffEntryBuffCountAlt = 0x24;//
int Offsets::BuffEntryBuffCountAlt2 = 0x20;
int Offsets::BuffName = 0x4;//
int Offsets::BuffEntryBuffNodeStart = 0x20;//
int Offsets::BuffEntryBuffNodeCurrent = 0x24;//

int Offsets::ItemListItem = 0xC;//
int Offsets::ItemInfo = 0x20;//
int Offsets::ItemInfoId = 0x68;//

int Offsets::CurrentDashSpeed = 0x1D0;
int Offsets::IsDashing = 0x398;
int Offsets::DashPos = 0x1FC;
int Offsets::IsMoving = 0x198;
int Offsets::NavBegin = 0x1BC;
int Offsets::NavEnd = 0x1C0;

int Offsets::ViewProjMatrices = 0x316A8B8;//B9 ? ? ? ? E8 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? B9 ? ? ? ?
int Offsets::Renderer = 0x3170080;//A1 ? ? ? ? ? ? ? ? 56 57 BF ? ? ? ? ? ? ? ? 8B
int Offsets::RendererWidth = 0x8;
int Offsets::RendererHeight = 0xC;

int Offsets::SpellSlotLevel = 0x1C;
int Offsets::SpellSlotTime = 0x24;
int Offsets::SpellSlotCharges = 0x54;
int Offsets::SpellSlotTimeCharge = 0x74;
int Offsets::SpellSlotDamage = 0x94;//
int Offsets::SpellSlotSpellInfo = 0x120;
int Offsets::SpellInfoSpellData = 0x40;
int Offsets::SpellDataSpellName = 0x6C;//
int Offsets::SpellDataMissileName = 0x6C;//
int Offsets::SpellSlotSmiteTimer = 0x60;
int Offsets::SpellSlotSmiteCharges = 0x54;

int Offsets::ObjectManager = 0x18A7ED8;	//8B 0D ? ? ? ? E8 ? ? ? ? FF 77 ? 8B
int Offsets::LocalPlayer = 0x3144DA0;	//57 8B 3D ? ? ? ? 3B F7 75
int Offsets::UnderMouseObject = 0x24F5764;	//8b 0d ? ? ? ? c7 ? ? ? ? ? ? ff ? ? ? ff ? ? ? ff ? ? ? ff ? ? ? e8


int Offsets::ObjectMapCount = 0x2C;//
int Offsets::ObjectMapRoot = 0x28;//
int Offsets::ObjectMapNodeNetId = 0x10;//
int Offsets::ObjectMapNodeObject = 0x14;//

// int Offsets::MissileSpellInfo = 0x230;
// int Offsets::MissileSrcIdx = 0x290;
// int Offsets::MissileDestIdx = 0x2E8;
// int Offsets::MissileStartPos = 0x2A8;
// int Offsets::MissileEndPos = 0x2B4;

int Offsets::SpellCastSpellInfo = 0x8;//
int Offsets::SpellCastStartTime = 0x41;
int Offsets::SpellCastStartTimeAlt = 0x534;//
int Offsets::SpellCastCastTime = 0x4C0;//
int Offsets::SpellCastStart = 0x84;//
int Offsets::SpellCastEnd = 0x90;//
int Offsets::SpellCastSrcIdx = 0x68;//
int Offsets::SpellCastDestIdx = 0xC0;//

int Offsets::MissileSpellInfo = 0x260;//
int Offsets::MissileSrcIdx = 0x2C4;//
int Offsets::MissileDestIdx = 0x314;//
int Offsets::MissileStartPos = 0x2E0;//
int Offsets::MissileEndPos = 0x2EC;//
//done
int Offsets::MinimapObject = 0x313E288;	//8b ? ? ? ? ? 0f 57 ? 8b ? ? 89 ? ?  ? 53
int Offsets::MinimapObjectHud = 0x150;
int Offsets::MinimapHudPos = 0x3C;
int Offsets::MinimapHudSize = 0x44;

int Offsets::AiManagerStartPath = 0x1E4;
int Offsets::AiManagerEndPath = 0x1E8;
int Offsets::AiManagerTargetPosition = 0x10;//
int Offsets::AiManagerIsMoving = 0x1C0;
int Offsets::AiManagerIsDashing = 0x3C0;
int Offsets::AiManagerCurrentSegment = 0x1C4;
int Offsets::AiManagerDashSpeed = 0x1F8;