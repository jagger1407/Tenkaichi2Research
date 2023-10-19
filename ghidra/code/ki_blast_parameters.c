#include "ki_blast_parameters.h"

// Function Address: {@address 0x0023fdb8}

int getCurrentKiBlast_Offset(character_t *character)

{
  u32 animation;
  int iVar1;
  float fVar2;
  
  animation = ::character::getCharacter_currentAnimation(character);
  if (animation == 0x92) {
    fVar2 = character->field2235_0xa1c;
  }
  else {
    if ((int)animation < 0x93) {
      if (animation == 0x86) {
        return 8;
      }
      if ((int)animation < 0x87) {
        if ((int)animation < 0x7d) {
          return -1;
        }
        if ((int)animation < 0x7f) {
          return 0;
        }
        if ((int)animation < 0x83) {
          return -1;
        }
        return 4;
      }
      if (animation == 0x89) {
        if (character->field2235_0xa1c < DAT_00386cb0) {
          return 1;
        }
        if (DAT_00386cb4 <= character->field2235_0xa1c) {
          return 3;
        }
        return 2;
      }
      if ((int)animation < 0x89) {
        return 1;
      }
      if ((int)animation < 0x90) {
        return -1;
      }
      return 5;
    }
    if (animation == 0x98) {
      fVar2 = character->field2235_0xa1c;
    }
    else {
      if (0x98 < (int)animation) {
        if (animation == 0x9b) {
          if (character->field2235_0xa1c < DAT_00386cb0) {
            return 9;
          }
          if (DAT_00386cb4 <= character->field2235_0xa1c) {
            return 0xb;
          }
          return 10;
        }
        if ((int)animation < 0x9b) {
          return 9;
        }
        if (animation == 0x1ac) {
          return 0xc;
        }
        if (animation == 0x1ad) {
          return 0xd;
        }
        return -1;
      }
      if (animation != 0x95) {
        return 5;
      }
      fVar2 = character->field2235_0xa1c;
    }
  }
  iVar1 = 5;
  if ((DAT_00386cb0 <= fVar2) && (iVar1 = 7, fVar2 < DAT_00386cb4)) {
    iVar1 = 6;
  }
  return iVar1;
}



// Function Address: {@address 0x0023ff38}

kiBlast_t * getCurrentKiBlast(character_t *character)

{
  int offset;
  
  offset = getCurrentKiBlast_Offset(character);
  if (offset < 0) {
    offset = 0;
  }
  return character->field3797_0x1530->kiBlastParameters + offset;
}



// Function Address: {@address 0x0023ffd8}

kiBlast_t * getKiBlast(character_t *character,int kiBlastOffset)

{
  return character->field3797_0x1530->kiBlastParameters + kiBlastOffset;
}



// Function Address: {@address 0x0023fff8}

uint getCurrentKiBlast_0x00(character_t *character)

{
  kiBlast_t *parameters;
  battleStats_t *battleStats;
  uint uVar1;
  
  parameters = getCurrentKiBlast(character);
  uVar1 = parameters->field0_0x0;
  battleStats = CharStats::getBattleStats(character);
  if (battleStats->field14_0x2c != 0) {
                    // sets the lowest 2 bits to 0.
    uVar1 &= 0xfffffffc;
  }
  return uVar1;
}



// Function Address: {@address 0x00240090}

uint getKiBlast_0x00(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  battleStats_t *charStats;
  uint uVar1;
  
  parameters = getKiBlast(character,kiBlastOffset);
  uVar1 = parameters->field0_0x0;
  charStats = CharStats::getBattleStats(character);
  if (charStats->field14_0x2c != 0) {
    uVar1 &= 0xfffffffc;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00240108)
// Function Address: {@address 0x002400d8}

int getCurrentKiBlast_Damage(character_t *character)

{
  short modifier;
  kiBlast_t *parameters;
  int modifiedDamage;
  char amountFired;
  
  parameters = getCurrentKiBlast(character);
  amountFired = parameters->amount_fired;
  modifier = FUN_001f9908(character);
  modifiedDamage = (parameters->damage * (int)modifier) / 100;
  if ((0 < amountFired) && (modifiedDamage /= (int)amountFired, amountFired == 0)) {
    trap(7);
  }
  return modifiedDamage;
}



// WARNING: Removing unreachable block (ram,0x002401f8)
// Function Address: {@address 0x002401c8}

int getKiBlast_Damage(character_t *character,int kiBlastOffset)

{
  short modifier;
  kiBlast_t *parameters;
  int modifiedDamage;
  char amountFired;
  
  parameters = getKiBlast(character,kiBlastOffset);
  amountFired = parameters->amount_fired;
  modifier = FUN_001f9908(character);
  modifiedDamage = (parameters->damage * (int)modifier) / 100;
  if ((0 < amountFired) && (modifiedDamage /= (int)amountFired, amountFired == 0)) {
    trap(7);
  }
  return modifiedDamage;
}



// WARNING: Removing unreachable block (ram,0x00240268)
// Function Address: {@address 0x00240238}

int getCurrentKiBlast_DamageGuarding(character_t *character)

{
  short modifier;
  kiBlast_t *parameters;
  int damage;
  char amountFired;
  
  parameters = getCurrentKiBlast(character);
  amountFired = parameters->amount_fired;
  modifier = FUN_001f9908(character);
  damage = (parameters->damage_guarding * (int)modifier) / 100;
  if ((0 < amountFired) && (damage /= (int)amountFired, amountFired == 0)) {
    trap(7);
  }
  return damage;
}



// WARNING: Removing unreachable block (ram,0x00240358)
// Function Address: {@address 0x00240328}

int getKiBlast_DamageGuarding(character_t *character,int kiBlastOffset)

{
  short modifier;
  kiBlast_t *parameters;
  int modifiedDamage;
  char amountFired;
  
  parameters = getKiBlast(character,kiBlastOffset);
  amountFired = parameters->amount_fired;
  modifier = FUN_001f9908(character);
  modifiedDamage = (parameters->damage_guarding * (int)modifier) / 100;
  if ((0 < amountFired) && (modifiedDamage /= (int)amountFired, amountFired == 0)) {
    trap(7);
  }
  return modifiedDamage;
}



// Function Address: {@address 0x00240398}

int getCurrentKiBlast_Cost(character_t *character)

{
  bool bVar1;
  kiBlast_t *parameters;
  int cost;
  
  parameters = getCurrentKiBlast(character);
  cost = parameters->ki_cost;
  bVar1 = FUN_00203c58(character,0x200);
  if (bVar1) {
    cost /= 2;
  }
  return cost;
}



// Function Address: {@address 0x00240438}

int getKiBlast_Cost(character_t *character,int kiBlastOffset)

{
  bool bVar1;
  kiBlast_t *parameters;
  int cost;
  
  parameters = getKiBlast(character,kiBlastOffset);
  cost = parameters->ki_cost;
  bVar1 = FUN_00203c58(character,0x200);
  if (bVar1) {
    cost /= 2;
  }
  return cost;
}



// Function Address: {@address 0x00240480}

float getCurrentKiBlast_Speed(character_t *character)

{
  kiBlast_t *parameters;
  
  parameters = getCurrentKiBlast(character);
  return parameters->speed * 10.0 * DAT_00386cb8;
}



// Function Address: {@address 0x002404f0}

float getKiBlast_Speed(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  
  parameters = getKiBlast(character,kiBlastOffset);
  return parameters->speed * 10.0 * DAT_00386cc0;
}



// Function Address: {@address 0x00240528}

float getCurrentKiBlast_Homing(character_t *character)

{
  kiBlast_t *parameters;
  
  parameters = getCurrentKiBlast(character);
  return ((parameters->homing / 30.0) / 180.0) * DAT_00386cc4;
}



// Function Address: {@address 0x002405c8}

float getKiBlast_Homing(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  
  parameters = getKiBlast(character,kiBlastOffset);
  return ((parameters->homing / 30.0) / 180.0) * DAT_00386ccc;
}



// Function Address: {@address 0x00240618}

float getCurrentKiBlast_Range(character_t *character)

{
  kiBlast_t *parameters;
  
  parameters = getCurrentKiBlast(character);
  return parameters->range * 30.0;
}



// Function Address: {@address 0x00240678}

float getKiBlast_Range(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  
  parameters = getKiBlast(character,kiBlastOffset);
  return parameters->range * 30.0;
}



// Function Address: {@address 0x002406a8}

uchar getCurrentKiBlast_Trajectory(character_t *character)

{
  kiBlast_t *parameters;
  
  parameters = getCurrentKiBlast(character);
  return parameters->trajectory;
}



// Function Address: {@address 0x002406e8}

uchar getKiBlast_Trajectory(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  
  parameters = getKiBlast(character,kiBlastOffset);
  return parameters->trajectory;
}



// Function Address: {@address 0x00240708}

uchar getCurrentKiBlast_Hitstun(character_t *character)

{
  kiBlast_t *parameters;
  
  parameters = getCurrentKiBlast(character);
  return parameters->hitstun;
}



// Function Address: {@address 0x00240748}

uchar getKiBlast_Hitstun(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  
  parameters = getKiBlast(character,kiBlastOffset);
  return parameters->hitstun;
}



// Function Address: {@address 0x00240768}

hitstun_enum getCurrentKiBlast_0x25(character_t *character)

{
  kiBlast_t *parameters;
  hitstun_enum hitstun;
  
  parameters = getCurrentKiBlast(character);
  hitstun = parameters->field10_0x25;
  if (hitstun == HITSTUN_NONE) {
    hitstun = parameters->hitstun;
  }
  return hitstun;
}



// Function Address: {@address 0x002407d8}

char getKiBlast_0x25(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  hitstun_enum hitstun;
  
  parameters = getKiBlast(character,kiBlastOffset);
  hitstun = parameters->field10_0x25;
  if (hitstun == HITSTUN_NONE) {
    hitstun = parameters->hitstun;
  }
  return hitstun;
}



// Function Address: {@address 0x00240810}

hitstun_enum getCurrentKiBlast_0x26(character_t *character)

{
  kiBlast_t *parameters;
  hitstun_enum hitstun;
  
  parameters = getCurrentKiBlast(character);
  hitstun = parameters->field11_0x26;
  if (hitstun == HITSTUN_NONE) {
    hitstun = parameters->hitstun;
  }
  return hitstun;
}



// Function Address: {@address 0x00240880}

hitstun_enum getKiBlast_0x26(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  hitstun_enum hitstun;
  
  parameters = getKiBlast(character,kiBlastOffset);
  hitstun = parameters->field11_0x26;
  if (hitstun == HITSTUN_NONE) {
    hitstun = parameters->hitstun;
  }
  return hitstun;
}



// Function Address: {@address 0x002408b8}

hitstun_enum getCurrentKiBlast_0x27(character_t *character)

{
  kiBlast_t *parameters;
  hitstun_enum hitstun;
  
  parameters = getCurrentKiBlast(character);
  hitstun = parameters->field12_0x27;
  if (hitstun == HITSTUN_NONE) {
    hitstun = parameters->hitstun;
  }
  return hitstun;
}



// Function Address: {@address 0x00240928}

char getKiBlast_0x27(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  hitstun_enum hitstun;
  
  parameters = getKiBlast(character,kiBlastOffset);
  hitstun = parameters->field12_0x27;
  if (hitstun == HITSTUN_NONE) {
    hitstun = parameters->hitstun;
  }
  return hitstun;
}



// Function Address: {@address 0x00240960}

undefined getCurrentKiBlast_0x30(character_t *character)

{
  kiBlast_t *parameters;
  
  parameters = getCurrentKiBlast(character);
  return parameters->field_0x30;
}



// Function Address: {@address 0x002409a0}

undefined getKiBlast_0x30(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  
  parameters = getKiBlast(character,kiBlastOffset);
  return parameters->field_0x30;
}



// Function Address: {@address 0x002409c0}

uchar getCurrentKiBlast_Color(character_t *character)

{
  kiBlast_t *parameters;
  
  parameters = getCurrentKiBlast(character);
  return parameters->color;
}



// Function Address: {@address 0x00240a00}

uchar getKiBlast_Color(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  
  parameters = getKiBlast(character,kiBlastOffset);
  return parameters->color;
}



// Function Address: {@address 0x00240a20}

uchar getCurrentKiBlast_AmountFired(character_t *character)

{
  kiBlast_t *parameters;
  
  parameters = getCurrentKiBlast(character);
  return parameters->amount_fired;
}



// Function Address: {@address 0x00240a60}

char getKiBlast_AmountFired(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  
  parameters = getKiBlast(character,kiBlastOffset);
  return parameters->amount_fired;
}



// Function Address: {@address 0x00240a80}

float getCurrentKiBlast_Size(character_t *character)

{
  kiBlast_t *parameters;
  
  parameters = getCurrentKiBlast(character);
  return parameters->size;
}



// Function Address: {@address 0x00240ac0}

float getKiBlast_Size(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  
  parameters = getKiBlast(character,kiBlastOffset);
  return parameters->size;
}



// Function Address: {@address 0x00240ae0}

float getCurrentKiBlast_Trail(character_t *character)

{
  kiBlast_t *parameters;
  
  parameters = getCurrentKiBlast(character);
  return parameters->trail;
}



// Function Address: {@address 0x00240b20}

float getKiBlast_Trail(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  
  parameters = getKiBlast(character,kiBlastOffset);
  return parameters->trail;
}



// Function Address: {@address 0x00240b40}

float getCurrentKiBlast_Knockback(character_t *character)

{
  kiBlast_t *parameters;
  float knockback;
  
  parameters = getCurrentKiBlast(character);
  knockback = parameters->knockback * 10.0 * DAT_00386cd0;
  if (0 < parameters->amount_fired) {
    knockback = knockback / (float)(int)parameters->amount_fired;
  }
  return knockback;
}



// Function Address: {@address 0x00240bf0}

float getKiBlast_Knockback(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  float knockback;
  
  parameters = getKiBlast(character,kiBlastOffset);
  knockback = parameters->knockback * 10.0 * DAT_00386cd8;
  if (0 < parameters->amount_fired) {
    knockback = knockback / (float)(int)parameters->amount_fired;
  }
  return knockback;
}



// Function Address: {@address 0x00240c48}

float getCurrentKiBlast_0x20(character_t *character)

{
  kiBlast_t *parameters;
  float fVar1;
  
  parameters = getCurrentKiBlast(character);
  fVar1 = parameters->field8_0x20 * 10.0 * DAT_00386cdc;
  if (0 < parameters->amount_fired) {
    fVar1 = fVar1 / (float)(int)parameters->amount_fired;
  }
  return fVar1;
}



// Function Address: {@address 0x00240cf8}

float getKiBlast_0x20(character_t *character,int kiBlastOffset)

{
  kiBlast_t *parameters;
  float fVar1;
  
  parameters = getKiBlast(character,kiBlastOffset);
  fVar1 = parameters->field8_0x20 * 10.0 * DAT_00386ce4;
  if ('\0' < parameters->amount_fired) {
    fVar1 = fVar1 / (float)(int)parameters->amount_fired;
  }
  return fVar1;
}


