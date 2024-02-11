#include "general_parameters.h"

// Function Address: {@address 0x0023f410}

flags_1 getFlags_1(character_t *character)

{
  return character->field3797_0x1530->generalParameters->flaggroup_1;
}



// Function Address: {@address 0x0023f420}

flags_2 getFlags_2(character_t *character)

{
  return character->field3797_0x1530->generalParameters->flaggroup_2;
}



// Function Address: {@address 0x0023f430}

flags_3 getFlags_3(character_t *character)

{
  return character->field3797_0x1530->generalParameters->flaggroup_3;
}



// Function Address: {@address 0x0023f440}

apeMode_e getGreatApeMode(character_t *character)

{
  return character->field3797_0x1530->generalParameters->great_ape_mode;
}



// Function Address: {@address 0x0023f450}

s8 getR3Command(character_t *character)

{
  return character->field3797_0x1530->generalParameters->R3Command;
}



// Function Address: {@address 0x0023f460}

char_e getID_Transformation(character_t *character,int transformation)

{
  return character->field3797_0x1530->generalParameters->transformation_char[transformation];
}



// Function Address: {@address 0x0023f498}

int getTransformationCost(character_t *character,int transformation)

{
  return (uint)character->field3797_0x1530->generalParameters->transformation_cost[transformation] * 100000;
}



// Function Address: {@address 0x0023f498}

transform_bonusses_t getTransformationBonusses(character_t *character)

{
  return (transform_bonusses_t)character->field3797_0x1530->generalParameters->transformation_bonusses;
}



// Function Address: {@address 0x0023f4a8}

char_e getID_Fusion(character_t *character,int fusion)

{
  return character->field3797_0x1530->generalParameters->fusion_char[fusion];
}



// Function Address: {@address 0x0023f4c0}
// 
// gets the ID of the character who will show up in the Fusion cutscene.

char_e getID_FusionPartnerCutscene(character_t *character,int fusion)

{
  return character->field3797_0x1530->generalParameters->fusion_cutscene_partner[fusion];
}



// Function Address: {@address 0x0023f4d8}
// 
// gets the character ID of the character that will be taken away after the fusion ends.
// 'fusion' is which fusion you're checking
// 'partner' is which one of the 6 partners you want.

char_e getID_FusionPartnerTeam(character_t *character,int fusion,int partner)

{
  return character->field3797_0x1530->generalParameters->fusion_team_partner[fusion][partner];
}



// Function Address: {@address 0x0023f500}

int getFusionCost(character_t *character,int fusion)

{
  return (uint)character->field3797_0x1530->generalParameters->fusion_cost[fusion] * 100000;
}



// Function Address: {@address 0x0023f520}

u8 getGeneralParam_0x28(character_t *character)

{
  return character->field3797_0x1530->generalParameters->field_0x28;
}



// Function Address: {@address 0x0023f530}

fusion_type getFusionType(character_t *character,int fusion)

{
  return character->field3797_0x1530->generalParameters->fusion_type[fusion];
}



// Function Address: {@address 0x0023f548}

u8 getAuraColor(character_t *character)

{
  return character->field3797_0x1530->generalParameters->aura_color;
}



// Function Address: {@address 0x0023f558}
// 
// This function seems to get the Z-Search Type, however,
// besides the Z-Search Type, it also calls a function which 
// could offset the read, ranging from offset 0x29 to 0x2E.

char getZSearchType(character_t *character)

{
  bool bVar1;
  u8 zSearchType;
  undefined4 *puVar2;
  battleStats_t *charStats;
  uint uVar3;
  generalParameters_t *parameters;
  
  parameters = character->field3797_0x1530->generalParameters;
  puVar2 = FUN_00202dc0(character);
  uVar3 = puVar2[1];
  if (5 < uVar3) {
    uVar3 = 0;
  }
  zSearchType = parameters->z_search_type[uVar3];
                    // check if the Z-Search Type is one of the Scouter Searches.
  if (((char)zSearchType < 5) && (1 < (char)zSearchType)) {
    charStats = /*CharStats*/getBattleStats(character);
    if ((charStats->isBattleDamaged != false) && (bVar1 = zSearchType != 4, zSearchType = 8, bVar1)) {
      zSearchType = 7;
    }
  }
  return zSearchType;
}



// Function Address: {@address 0x0023f8f8}

uchar getAmount_KiBlasts(character_t *character)

{
  return character->field3797_0x1530->generalParameters->amount_ki_blasts;
}



// Function Address: {@address 0x0023f908}

uchar getAmount_ChargedKiBlasts(character_t *character)

{
  return character->field3797_0x1530->generalParameters->amount_charged_ki_blasts;
}



// Function Address: {@address 0x0023f918}

u8 getRushingTechnique(character_t *character,int offset)

{
  return character->field3797_0x1530->generalParameters->rushing_technique[offset];
}



// Function Address: {@address 0x0023f930}

uchar getCounterMove(character_t *character,int offset)

{
  return character->field3797_0x1530->generalParameters->counter_move[offset];
}



// Function Address: {@address 0x0023f948}
// 
// the parameter 'technique' decides whether to return 
// 0 = the Step-In Move
// 1 = the Step-In Lift Strike
// 2 = the Step-In Ground Slash

uchar getStepInMove(character_t *character,int technique)

{
  return character->field3797_0x1530->generalParameters->step_in_move[technique];
}



// Function Address: {@address 0x0023f960}

undefined4 getGeneralParam_0x58(character_t *character)

{
  return character->field3797_0x1530->generalParameters->field25_0x58;
}



// Function Address: {@address 0x0023f970}

undefined4 getGeneralParam_0x5C(character_t *character)

{
  return character->field3797_0x1530->generalParameters->field26_0x5c;
}



// Function Address: {@address 0x0023f980}

undefined4 getGeneralParam_0x60(character_t *character)

{
  return character->field3797_0x1530->generalParameters->field27_0x60;
}



// Function Address: {@address 0x0023f990}

undefined4 getGeneralParam_0x64(character_t *character)

{
  return character->field3797_0x1530->generalParameters->field28_0x64;
}



// Function Address: {@address 0x0023f9a0}

undefined4 getGeneralParam_0x68(character_t *character)

{
  return character->field3797_0x1530->generalParameters->field29_0x68;
}



// Function Address: {@address 0x0023f9b0}

int getAmount_BlastStocks(character_t *character)

{
  return character->field3797_0x1530->generalParameters->amount_blast_stocks;
}



// WARNING: Removing unreachable block (ram,0x0023f9d8)
// Function Address: {@address 0x0023f9c0}

int getKiChargeSpeed(character_t *character)

{
  int iVar1;
  int speed;
  
  speed = character->field3797_0x1530->generalParameters->ki_charge_speed;
  iVar1 = FUN_001f9758(character);
  return speed / 30 + iVar1 + character->field2401_0xaec;
}



// WARNING: Removing unreachable block (ram,0x0023fa30)
// Function Address: {@address 0x0023fa18}

int getKiChargeSpeed_Water(character_t *character)

{
  int iVar1;
  int speed;
  
  speed = character->field3797_0x1530->generalParameters->ki_charge_speed_water;
  iVar1 = FUN_001f9758(character);
  return speed / 30 + iVar1 + character->field2401_0xaec;
}



// WARNING: Removing unreachable block (ram,0x0023fa80)
// Function Address: {@address 0x0023fa70}

int getBaseKiRegenSpeed(character_t *character)

{
  int iVar1;
  int baseKiRegenSpeed;
  
  baseKiRegenSpeed = character->field3797_0x1530->generalParameters->base_ki_gain;
  iVar1 = FUN_001f97a8(character);
  return baseKiRegenSpeed / 30 + iVar1;
}



// WARNING: Removing unreachable block (ram,0x0023fad0)
// Function Address: {@address 0x0023fab8}

int getGeneralParam_0x88(character_t *character)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = character->field3797_0x1530->generalParameters->field37_0x88;
  iVar3 = FUN_001f97f8(character);
  iVar3 = iVar1 / 30 + iVar3;
  bVar2 = FUN_00203c58(character,0x40000000);
  if (bVar2) {
    iVar3 = iVar3 * 2;
  }
  return iVar3;
}



// Function Address: {@address 0x0023fb20}

int getCounterKiCost(character_t *character)

{
  bool bVar1;
  int cost;
  
  cost = character->field3797_0x1530->generalParameters->counter_ki_cost;
  bVar1 = FUN_00203c58(character,0x8000);
  if (bVar1) {
    cost = 0;
  }
  return cost;
}



// Function Address: {@address 0x0023fb58}

undefined4 getGeneralParam_0x80(character_t *character)

{
  return character->field3797_0x1530->generalParameters->field35_0x80;
}



// WARNING: Removing unreachable block (ram,0x0023fb70)
// Function Address: {@address 0x0023fb68}

int getGeneralParam_PowerGuardKiCost(character_t *character)

{
  return (int)character->field3797_0x1530->generalParameters->powerGuardKiCost / 30;
}



// WARNING: Removing unreachable block (ram,0x0023fba0)
// Function Address: {@address 0x0023fb90}

int getBlastGaugeSpeed(character_t *character)

{
  int iVar1;
  int gain;
  
  gain = character->field3797_0x1530->generalParameters->blast_gauge_gain;
  iVar1 = FUN_001f9848(character);
  return gain / 30 + iVar1;
}



// Function Address: {@address 0x0023fbd8}

float getBlueKiChargeSpeed(character_t *character)

{
  float speed;
  
  speed = character->field3797_0x1530->generalParameters->blue_ki_charge_speed * 30.0;
  if ((int)speed == 0) {
    trap(7);
  }
  return speed;
}



// Function Address: {@address 0x0023fc18}

float getMaxPowerDuration(character_t *character)

{
  float duration;
  
  duration = character->field3797_0x1530->generalParameters->max_power_duration * 30.0;
  if ((int)duration == 0) {
    trap(7);
  }
  return duration;
}



// Function Address: {@address 0x0023fc58}

float getGravity(character_t *character)

{
  return character->field3797_0x1530->generalParameters->gravity;
}



// Function Address: {@address 0x0023fc68}

float getGeneralParam_0x9C(character_t *character)

{
  return character->field3797_0x1530->generalParameters->field42_0x9c;
}



// Function Address: {@address 0x0023fc78}

s8 getAmount_DragonSmashes(character_t *character)

{
  return character->field3797_0x1530->generalParameters->amount_dragon_smashes;
}



// Function Address: {@address 0x0023fc88}

s8 getAmount_PunishingAttacks(character_t *character)

{
  return character->field3797_0x1530->generalParameters->amount_punishing_attacks;
}



// Function Address: {@address 0x0023fc98}

uchar getGeneralParam_0xAA(character_t *character)

{
  return *(uchar *)&character->field3797_0x1530->generalParameters->field46_0xaa;
}



// Function Address: {@address 0x0023fca8}

float getMeleeChargeSpeed(character_t *character)

{
  return character->field3797_0x1530->generalParameters->melee_charge_speed;
}



// Function Address: {@address 0x0023fcb8}

float getGeneralParam_0xB0(character_t *character)

{
  return character->field3797_0x1530->generalParameters->field48_0xb0;
}



// Function Address: {@address 0x0023fcc8}

float getDamageMultiplier(character_t *character)

{
  return character->field3797_0x1530->generalParameters->damage_multiplier;
}



// Function Address: {@address 0x0023fcd8}

float getSwitchGaugeSpeed(character_t *character)

{
  return character->field3797_0x1530->generalParameters->switch_gauge_speed;
}



// Function Address: {@address 0x0023fce8}
// 
// param_2 will be set to 0 if it goes over 2.
// if on the World Tournament Stage, it will always return 100.

u8 getGeneralParam_0xBC(character_t *character,int param_2)

{
  bool bVar1;
  u8 uVar2;
  
  if (2 < (uint)param_2) {
    param_2 = 0;
  }
  bVar1 = onStage_WorldTournament();
  uVar2 = 100;
  if (!bVar1) {
    uVar2 = character->field3797_0x1530->generalParameters->field51_0xbc[param_2];
  }
  return uVar2;
}



// Function Address: {@address 0x0023fd38}

u8 getGeneralParam_0xBF(character_t *character,int offset)

{
  if (2 < (uint)offset) {
    offset = 0;
  }
  return character->field3797_0x1530->generalParameters->field52_0xbf[offset];
}



// Function Address: {@address 0x0023fd58}

u8 getGeneralParam_0xC2(character_t *character,int offset)

{
  if (2 < (uint)offset) {
    offset = 0;
  }
  return character->field3797_0x1530->generalParameters->field53_0xc2[offset];
}



// Function Address: {@address 0x0023fd98}

u8 getGeneralParam_0xC5(character_t *character,int offset)

{
  if (2 < (uint)offset) {
    offset = 0;
  }
  return character->field3797_0x1530->generalParameters->field54_0xc5[offset];
}



// Function Address: {@address 0x0023fd98}

u8 getGeneralParam_0xC8(character_t *character,int offset)

{
  if (2 < (uint)offset) {
    offset = 0;
  }
  return character->field3797_0x1530->generalParameters->field55_0xc8[offset];
}


