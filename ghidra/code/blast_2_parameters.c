#include "blast_2_parameters.h"

// Function Address: {@address 0x002411a0}
// 
// returns 1 if 2nd parameter is 3
// returns 2 if 2nd parameter is 4
// returns 0 on anything else

int getBlast2_Offset(character_t *character,int blastOffset)

{
  int offset;
  int iVar1;
  
  offset = 1;
  if (blastOffset != 3) {
    if (blastOffset < 4) {
      iVar1 = 2;
      offset = 0;
    }
    else {
      iVar1 = 4;
      offset = 2;
    }
    if (blastOffset != iVar1) {
      offset = 0;
    }
  }
  return offset;
}



// WARNING: Removing unreachable block (ram,0x00241320)
// Function Address: {@address 0x002412a0}

int getBlast2_Damage(character_t *character,int blastOffset,char param_3)

{
  short sVar1;
  int b2_offset;
  int b2_damage;
  
  b2_offset = getBlast2_Offset(character,blastOffset);
  b2_damage = character->field3797_0x1530->blast2Parameters->damage[b2_offset];
  if (1 < blastOffset) {
    if (blastOffset < 4) {
      sVar1 = FUN_001f99b0(character);
    }
    else {
      if (blastOffset != 4) goto LAB_00241334;
      sVar1 = FUN_001f99e8(character);
    }
    b2_damage = (b2_damage * sVar1) / 100;
  }
LAB_00241334:
  if (param_3 == 0) {
    sVar1 = FUN_00240ff0((int)character,blastOffset);
    if ((1 < sVar1) && (b2_damage /= (int)sVar1, sVar1 == 0)) {
      trap(7);
    }
    b2_offset = FUN_00241020((int)character,blastOffset);
    if ((1 < b2_offset) && (b2_damage /= b2_offset, b2_offset == 0)) {
      trap(7);
    }
  }
  return b2_damage;
}



// WARNING: Removing unreachable block (ram,0x00241440)
// Function Address: {@address 0x002413c0}

int getBlast2_DamageGuarding(character_t *character,int blastOffset,char param_3)

{
  short sVar1;
  int b2_offset;
  int damage;
  
  b2_offset = getBlast2_Offset(character,blastOffset);
  damage = character->field3797_0x1530->blast2Parameters->damage_guarding[b2_offset];
  if (1 < blastOffset) {
    if (blastOffset < 4) {
      sVar1 = FUN_001f99b0(character);
    }
    else {
      if (blastOffset != 4) goto LAB_00241454;
      sVar1 = FUN_001f99e8(character);
    }
    damage = (damage * sVar1) / 100;
  }
LAB_00241454:
  if (param_3 == '\0') {
    sVar1 = FUN_00240ff0((int)character,blastOffset);
    if ((1 < sVar1) && (damage /= (int)sVar1, sVar1 == 0)) {
      trap(7);
    }
    b2_offset = FUN_00241020((int)character,blastOffset);
    if ((1 < b2_offset) && (damage /= b2_offset, b2_offset == 0)) {
      trap(7);
    }
  }
  return damage;
}



// Function Address: {@address 0x002414e0}

float getBlast2_Knockback(character_t *character,int blastOffset)

{
  short sVar1;
  int b2_offset;
  float knockback;
  
  b2_offset = getBlast2_Offset(character,blastOffset);
  knockback = character->field3797_0x1530->blast2Parameters->knockback[b2_offset];
  sVar1 = FUN_00240ff0((int)character,blastOffset);
  if (1 < sVar1) {
    knockback = knockback / (float)(int)sVar1;
  }
  b2_offset = FUN_00241020((int)character,blastOffset);
  if (1 < b2_offset) {
    knockback = knockback / (float)b2_offset;
  }
  return knockback * 10.0 * DAT_00386d0c;
}



// Function Address: {@address 0x00241660}

float getBlast2_Speed(character_t *character,int blastOffset)

{
  int b2_offset;
  
  b2_offset = getBlast2_Offset(character,blastOffset);
  return character->field3797_0x1530->blast2Parameters->speed[b2_offset] * 10.0 * DAT_00386d14;
}



// Function Address: {@address 0x00241718}

int getBlast2_KiCost(character_t *character,int blastOffset)

{
  bool bVar1;
  int b2_offset;
  int cost;
  
  b2_offset = getBlast2_Offset(character,blastOffset);
  cost = character->field3797_0x1530->blast2Parameters->cost_ki[b2_offset];
  bVar1 = FUN_00203c58(character,0x1000000000);
  if (bVar1) {
    cost /= 2;
  }
  return cost;
}



// Function Address: {@address 0x00241778}

int getBlast2_HealthCost(character_t *character,int blastOffset)

{
  int b2_offset;
  
  b2_offset = getBlast2_Offset(character,blastOffset);
  return character->field3797_0x1530->blast2Parameters->cost_health[b2_offset];
}



// Function Address: {@address 0x002417e8}

hitstun_enum getBlast2_Hitstun(character_t *character,int offset)

{
  int b2_offset;
  
  b2_offset = getBlast2_Offset(character,offset);
  return character->field3797_0x1530->blast2Parameters->hitstun[b2_offset];
}



// Function Address: {@address 0x00241868}

hitstun_enum getBlast2_HitstunLastHit(character_t *character,int offset)

{
  int b2_offset;
  
  b2_offset = getBlast2_Offset(character,offset);
  return character->field3797_0x1530->blast2Parameters->hitstun_last_hit[b2_offset + 3];
}



// Function Address: {@address 0x00241ab0}

float getBlast2_Size(character_t *character,int offset)

{
  int b2_offset;
  
  b2_offset = getBlast2_Offset(character,offset);
  return character->field3797_0x1530->blast2Parameters->size[b2_offset];
}



// Function Address: {@address 0x00241ae8}

float getBlast2_ChargeTime(character_t *character,int offset)

{
  int b2_offset;
  
  b2_offset = getBlast2_Offset(character,offset);
  return character->field3797_0x1530->blast2Parameters->charge_time[b2_offset];
}


