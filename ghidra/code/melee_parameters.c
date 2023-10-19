#include "melee_parameters.h"

// Function Address: {@address 0x0023e520}
// 
// NOTE: return value must be multiplied by 0x64.

undefined4 Melee_Attacks::getCurrentAttackOffset(character_t *character)

{
  int iVar1;
  character_state currentState;
  undefined4 uVar2;
  u32 currentAnim;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = character->field2142_0x9b0;
  iVar1 = character->field2135_0x9a0;
  fVar5 = DAT_00386c80;
  currentState = ::character::getCharacterState(character);
  fVar4 = DAT_00386c84;
  switch(currentState) {
  case STATE_CHARGE_KI:
    uVar2 = 0x61;
    break;
  default:
    currentAnim = ::character::getCharacter_currentAnimation(character);
    uVar2 = 0xffffffff;
    switch(currentAnim) {
    case 0x43:
      uVar2 = 0;
      break;
    case 0x44:
      uVar2 = 1;
      break;
    case 0x45:
      uVar2 = 2;
      break;
    case 0x46:
      uVar2 = 3;
      break;
    case 0x47:
      uVar2 = 4;
      break;
    case 0x48:
      uVar2 = 5;
      break;
    case 0x49:
      uVar2 = 6;
      break;
    case 0x4a:
      uVar2 = 7;
      break;
    case 0x4b:
      uVar2 = 8;
      break;
    case 0x4c:
      uVar2 = 9;
      break;
    case 0x4d:
    case 0x4e:
    case 0x50:
    case 0x51:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x59:
    case 0x5a:
    case 0x5c:
    case 0x5d:
    case 0x5f:
    case 0x60:
    case 0x62:
    case 99:
    case 0x65:
    case 0x66:
    case 0x68:
    case 0x69:
    case 0x6b:
    case 0x6c:
    case 0x6e:
    case 0x6f:
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x75:
    case 0x77:
    case 0x78:
    case 0x7a:
    case 0x7b:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0x9d:
    case 0xa0:
    case 0xa1:
    case 0xa2:
    case 0xa3:
    case 0xa4:
    case 0xa5:
    case 0xa6:
    case 0xa7:
    case 0xa8:
    case 0xa9:
    case 0xaa:
    case 0xab:
    case 0xac:
    case 0xad:
    case 0xae:
    case 0xaf:
    case 0xb0:
    case 0xb1:
    case 0xb2:
    case 0xb3:
    case 0xb4:
    case 0xb5:
    case 0xb6:
    case 0xb7:
    case 0xb8:
    case 0xb9:
    case 0xba:
    case 0xbb:
    case 0xbc:
    case 0xbd:
    case 0xbe:
    case 0xbf:
    case 0xc0:
    case 0xc1:
    case 0xc2:
    case 0xc3:
    case 0xc4:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xc9:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
    case 0xdb:
    case 0xdc:
    case 0xdd:
    case 0xde:
    case 0xdf:
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
    case 0xf0:
    case 0xf1:
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0xf5:
    case 0xf6:
    case 0xf7:
    case 0xf8:
    case 0xf9:
    case 0xfa:
    case 0xfb:
    case 0xfc:
    case 0xfd:
    case 0xfe:
    case 0xff:
    case 0x100:
    case 0x101:
    case 0x102:
    case 0x103:
    case 0x104:
    case 0x105:
    case 0x106:
    case 0x107:
    case 0x108:
    case 0x109:
    case 0x10a:
    case 0x10b:
    case 0x10c:
    case 0x10d:
switchD_0023e778_caseD_4d:
      uVar2 = 0xffffffff;
      break;
    case 0x4f:
      uVar2 = 0x3d;
      if ((fVar5 <= fVar6) && (uVar2 = 0x3f, fVar6 < fVar4)) {
        uVar2 = 0x3e;
      }
      break;
    case 0x52:
      uVar2 = 0x40;
      if ((fVar5 <= fVar6) && (uVar2 = 0x42, fVar6 < fVar4)) {
        uVar2 = 0x41;
      }
      break;
    case 0x58:
    case 0x5b:
      uVar2 = 0x15;
      if ((fVar5 <= fVar6) && (uVar2 = 0x1f, fVar6 < fVar4)) {
        uVar2 = 0x1a;
      }
      break;
    case 0x5e:
      uVar2 = 0x13;
      if ((fVar5 <= fVar6) && (uVar2 = 0x1d, fVar6 < fVar4)) {
        uVar2 = 0x18;
      }
      break;
    case 0x61:
      uVar2 = 0x14;
      if ((fVar5 <= fVar6) && (uVar2 = 0x1e, fVar6 < fVar4)) {
        uVar2 = 0x19;
      }
      break;
    case 100:
      uVar2 = 0x11;
      if ((fVar5 <= fVar6) && (uVar2 = 0x1b, fVar6 < fVar4)) {
        uVar2 = 0x16;
      }
      break;
    case 0x67:
      uVar2 = 0x12;
      if ((fVar5 <= fVar6) && (uVar2 = 0x1c, fVar6 < fVar4)) {
        uVar2 = 0x17;
      }
      break;
    case 0x6a:
      uVar2 = 0x37;
      if ((iVar1 == 0) && (uVar2 = 0x32, fVar6 < fVar4)) {
        uVar2 = 0x2d;
      }
      break;
    case 0x6d:
      uVar2 = 0x35;
      if ((iVar1 == 0) && (uVar2 = 0x30, fVar6 < fVar4)) {
        uVar2 = 0x2b;
      }
      break;
    case 0x70:
      uVar2 = 0x36;
      if ((iVar1 == 0) && (uVar2 = 0x31, fVar6 < fVar4)) {
        uVar2 = 0x2c;
      }
      break;
    case 0x73:
      uVar2 = 0x33;
      if ((iVar1 == 0) && (uVar2 = 0x2e, fVar6 < fVar4)) {
        uVar2 = 0x29;
      }
      break;
    case 0x76:
      uVar2 = 0x34;
      if ((iVar1 == 0) && (uVar2 = 0x2f, fVar6 < fVar4)) {
        uVar2 = 0x2a;
      }
      break;
    case 0x79:
      uVar2 = 0x20;
      if ((fVar5 <= fVar6) && (uVar2 = 0x22, fVar6 < fVar4)) {
        uVar2 = 0x21;
      }
      break;
    case 0x7c:
      uVar2 = 0x23;
      if ((fVar5 <= fVar6) && (uVar2 = 0x25, fVar6 < fVar4)) {
        uVar2 = 0x24;
      }
      break;
    case 0x9e:
      uVar2 = 0x26;
      if ((fVar5 <= fVar6) && (uVar2 = 0x28, fVar6 < fVar4)) {
        uVar2 = 0x27;
      }
      break;
    case 0x9f:
      fVar4 = FUN_001fa308(character);
      uVar3 = FUN_0025fd60(character->field3797_0x1530,1,false,1);
      uVar2 = 0x69;
      if (fVar4 < (float)(int)uVar3) {
        uVar2 = 0x10;
      }
      break;
    case 0x10e:
      uVar2 = 0x4d;
    }
    break;
  case 0x50:
    uVar2 = 0x62;
    break;
  case 0x51:
    uVar2 = 99;
    break;
  case 0x52:
    uVar2 = 100;
    break;
  case 0x53:
    uVar2 = 0x65;
    break;
  case STATE_HYPER_SMASH:
  case 0x55:
    uVar2 = 0x66;
    break;
  case STATE_AIR_COMBO:
    currentAnim = ::character::getCharacter_currentAnimation(character);
    uVar2 = 0xffffffff;
    switch(currentAnim) {
    case 0x48:
      uVar2 = 0x43;
      break;
    case 0x49:
      uVar2 = 0x44;
      break;
    case 0x4a:
      uVar2 = 0x45;
      break;
    case 0x4b:
      uVar2 = 0x46;
      break;
    case 0x4c:
      uVar2 = 0x47;
    }
    break;
  case STATE_AIR_COMBO_HEAVY:
    uVar2 = 0x48;
    break;
  case STATE_MAX_POWER_COMBO_HEAVY:
    uVar2 = 0x5d;
    break;
  case 0x5c:
    uVar2 = 0x4f;
    break;
  case 0x5d:
    uVar2 = 0x1f;
    break;
  case 100:
    uVar2 = 0x22;
    break;
  case STATE_KIAI_SMASH:
    uVar2 = 0x4e;
    break;
  case STATE_HEAVY_FINISH:
    uVar2 = 10;
    if ((fVar5 <= fVar6) && (uVar2 = 0xc, fVar6 < DAT_00386c84)) {
      uVar2 = 0xb;
    }
    break;
  case STATE_LIFT_STRIKE_HEAVY:
    uVar2 = 0x49;
    break;
  case STATE_DRAGON_HEAVY:
    uVar2 = 0x67;
    break;
  case STATE_MAX_POWER_COMBO:
    uVar2 = 0x68;
    break;
  case STATE_BANISHING_ATTACK:
    currentAnim = ::character::getCharacter_currentAnimation(character);
    uVar2 = 0xffffffff;
    switch(currentAnim) {
    case 0x6a:
      uVar2 = 0x3c;
      break;
    case 0x6b:
    case 0x6c:
    case 0x6e:
    case 0x6f:
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x75:
      goto switchD_0023e778_caseD_4d;
    case 0x6d:
      uVar2 = 0x3a;
      break;
    case 0x70:
      uVar2 = 0x3b;
      break;
    case 0x73:
      uVar2 = 0x38;
      break;
    case 0x76:
      uVar2 = 0x39;
    }
    break;
  case STATE_ROLLING_HAMMER_LEFT:
    uVar2 = 0x50;
    if ((fVar5 <= fVar6) && (uVar2 = 0x54, fVar6 < DAT_00386c84)) {
      uVar2 = 0x52;
    }
    break;
  case STATE_ROLLING_HAMMER_RIGHT:
    uVar2 = 0x51;
    if ((fVar5 <= fVar6) && (uVar2 = 0x55, fVar6 < DAT_00386c84)) {
      uVar2 = 0x53;
    }
    break;
  case STATE_SONIC_IMPACT_1:
    uVar2 = 0x5b;
    break;
  case STATE_SONIC_IMPACT_2:
    uVar2 = 0x5c;
    break;
  case STATE_DRAGON_TORNADO_1:
    uVar2 = 0x5e;
    break;
  case STATE_DRAGON_TORNADO_2:
    uVar2 = 0x5f;
    break;
  case STATE_DRAGON_TORNADO_3:
    uVar2 = 0x60;
    break;
  case STATE_HEAVY_CRUSH_1:
    uVar2 = 0xd;
    break;
  case STATE_HEAVY_CRUSH_2:
    uVar2 = 0xe;
    break;
  case STATE_HEAVY_CRUSH_3:
    uVar2 = 0xf;
    break;
  case STATE_GRABBING:
  case STATE_GRAB_CUTSCENE:
  case 0x85:
    uVar2 = 0x4a;
    break;
  case 0x82:
  case 0x83:
    uVar2 = 0x4c;
  }
  return uVar2;
}



// Function Address: {@address 0x0023ea20}

meleeAttack_t * Melee_Attacks::getCurrentAttack(character_t *character)

{
  uint attackOffset;
  meleeAttack_t *selectedAttack;
  
  attackOffset = getCurrentAttackOffset(character);
  if (attackOffset < 0x6a) {
    selectedAttack = character->field3797_0x1530->meleeParameters + attackOffset;
  }
  else {
    selectedAttack = character->field3797_0x1530->meleeParameters;
  }
  return selectedAttack;
}



// Function Address: {@address 0x0023ea80}

meleeAttack_t * Melee_Attacks::getAttack(character_t *character,int attackOffset)

{
  if (0x69 < (uint)attackOffset) {
    return character->field3797_0x1530->meleeParameters;
  }
  return character->field3797_0x1530->meleeParameters + attackOffset;
}



// Function Address: {@address 0x0023eac0}

u8 Melee_Attacks::getCurrentAttack_0x2A(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->field18_0x2a;
}



// Function Address: {@address 0x0023eae0}

int Melee_Attacks::getCurrentAttack_Damage(character_t *character)

{
  short dmgModifier;
  bool bVar1;
  meleeAttack_t *parameters;
  uint uVar2;
  long lVar3;
  unkStruct_02 *puVar4;
  u32 damage;
  float modifiedDamage;
  
  parameters = getCurrentAttack(character);
  damage = parameters->damage;
  dmgModifier = FUN_001f9898(character);
  modifiedDamage = ((float)damage * (float)(int)dmgModifier) / 100.0;
  bVar1 = ::character::getBattleFlag(character,0,0x800);
  if (bVar1) {
    bVar1 = FUN_00218128(character,4);
    if (!bVar1) {
      puVar4 = character->field3797_0x1530;
      goto LAB_0023eb90;
    }
    uVar2 = getCurrentAttackOffset(character);
    if (9 < uVar2) {
      puVar4 = character->field3797_0x1530;
      goto LAB_0023eb90;
    }
    modifiedDamage = modifiedDamage - (modifiedDamage * 3.0) / 10.0;
  }
  puVar4 = character->field3797_0x1530;
LAB_0023eb90:
  lVar3 = FUN_0025fd60(puVar4,1,false,2);
  if (0 < lVar3) {
    modifiedDamage = modifiedDamage / (float)(int)lVar3;
  }
  return (int)modifiedDamage;
}



// Function Address: {@address 0x0023ebd8}

int Melee_Attacks::getCurrentAttack_DamageGuarding(character_t *character)

{
  bool bVar1;
  short modifier;
  meleeAttack_t *parameters;
  uint offset;
  long lVar2;
  unkStruct_02 *puVar3;
  u32 damage;
  float modifiedDamage;
  
  parameters = getCurrentAttack(character);
  damage = parameters->damage_guarding;
  modifier = FUN_001f9898(character);
  modifiedDamage = ((float)damage * (float)(int)modifier) / 100.0;
  bVar1 = ::character::getBattleFlag(character,0,0x800);
  if (bVar1) {
    bVar1 = FUN_00218128(character,4);
    if (!bVar1) {
      puVar3 = character->field3797_0x1530;
      goto LAB_0023ec88;
    }
    offset = getCurrentAttackOffset(character);
    if (9 < offset) {
      puVar3 = character->field3797_0x1530;
      goto LAB_0023ec88;
    }
    modifiedDamage = modifiedDamage - (modifiedDamage * 3.0) / 10.0;
  }
  puVar3 = character->field3797_0x1530;
LAB_0023ec88:
  lVar2 = FUN_0025fd60(puVar3,1,false,2);
  if (0 < lVar2) {
    modifiedDamage = modifiedDamage / (float)(int)lVar2;
  }
  return (int)modifiedDamage;
}



// Function Address: {@address 0x0023ecd0}

int Melee_Attacks::getCurrentAttack_0x14(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->field5_0x14;
}



// Function Address: {@address 0x0023ed10}

int Melee_Attacks::getCurrentAttack_KiGain(character_t *character)

{
  meleeAttack_t *parameters;
  u32 gain;
  long modifier;
  
  parameters = getCurrentAttack(character);
  gain = parameters->character_ki_gain;
  modifier = FUN_0025fd60(character->field3797_0x1530,1,false,2);
  if ((0 < modifier) && (gain = (int)gain / (int)modifier, modifier == 0)) {
    trap(7);
  }
  return gain;
}



// WARNING: Removing unreachable block (ram,0x0023ed9c)
// Function Address: {@address 0x0023ed70}

int Melee_Attacks::getCurrentAttack_KiDamage(character_t *character)

{
  short modifier;
  meleeAttack_t *parameters;
  int loss;
  
  parameters = getCurrentAttack(character);
  loss = parameters->opponent_ki_loss;
  modifier = FUN_001f98d0(character);
  return (loss * modifier) / 100;
}



// Function Address: {@address 0x0023ee28}

hitstun_enum Melee_Attacks::getCurrentAttack_Hitstun(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->hitstun;
}



// Function Address: {@address 0x0023ee48}

uchar Melee_Attacks::getCurrentAttack_0x21(character_t *character)

{
  meleeAttack_t *parameters;
  hitstun_enum hitstun;
  
  parameters = getCurrentAttack(character);
  hitstun = parameters->field9_0x21;
  if (hitstun == HITSTUN_NONE) {
    hitstun = parameters->hitstun;
  }
  return hitstun;
}



// Function Address: {@address 0x0023ee80}

uchar Melee_Attacks::getCurrentAttack_0x24(character_t *character)

{
  meleeAttack_t *parameters;
  hitstun_enum hitstun;
  
  parameters = getCurrentAttack(character);
  hitstun = parameters->field12_0x24;
  if (hitstun == HITSTUN_NONE) {
    hitstun = parameters->hitstun;
  }
  return hitstun;
}



// Function Address: {@address 0x0023eeb8}

uchar Melee_Attacks::getCurrentAttack_0x22(character_t *character)

{
  meleeAttack_t *parameters;
  hitstun_enum hitstun;
  
  parameters = getCurrentAttack(character);
  hitstun = parameters->field10_0x22;
  if (hitstun == HITSTUN_NONE) {
    hitstun = parameters->hitstun;
  }
  return hitstun;
}



// Function Address: {@address 0x0023eef0}

uchar Melee_Attacks::getCurrentAttack_0x23(character_t *character)

{
  meleeAttack_t *parameters;
  hitstun_enum hitstun;
  
  parameters = getCurrentAttack(character);
  hitstun = parameters->field11_0x23;
  if (hitstun == HITSTUN_NONE) {
    hitstun = parameters->hitstun;
  }
  return hitstun;
}



// Function Address: {@address 0x0023ef28}

char Melee_Attacks::getCurrentAttack_0x25(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->field13_0x25;
}



// Function Address: {@address 0x0023ef48}

uchar Melee_Attacks::getCurrentAttack_0x26(character_t *character)

{
  meleeAttack_t *parameters;
  hitstun_enum hitstun;
  
  parameters = getCurrentAttack(character);
  hitstun = parameters->field_0x26;
  if (hitstun == HITSTUN_NONE) {
    hitstun = parameters->hitstun;
  }
  return hitstun;
}



// Function Address: {@address 0x0023ef80}

uchar Melee_Attacks::getCurrentAttack_0x27(character_t *character)

{
  meleeAttack_t *parameters;
  hitstun_enum hitstun;
  
  parameters = getCurrentAttack(character);
  hitstun = parameters->field_0x27;
  if (hitstun == HITSTUN_NONE) {
    hitstun = parameters->hitstun;
  }
  return hitstun;
}



// Function Address: {@address 0x0023efb8}

u32 Melee_Attacks::getCurrentAttack_Flags(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->attack_flags;
}



// Function Address: {@address 0x0023efd8}

float Melee_Attacks::getCurrentAttack_Knockback(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->knockback * 10.0 * DAT_00386c88;
}



// Function Address: {@address 0x0023f010}

float Melee_Attacks::getCurrentAttack_0x30(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->field21_0x30 * 10.0 * DAT_00386c8c;
}



// Function Address: {@address 0x0023f048}

float Melee_Attacks::getCurrentAttack_Reach(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->reach * 10.0 * DAT_00386c90;
}



// Function Address: {@address 0x0023f080}

float Melee_Attacks::getCurrentAttack_0x38(character_t *character)

{
  meleeAttack_t *parameters;
  int iVar1;
  float fVar2;
  
  parameters = getCurrentAttack(character);
  fVar2 = parameters->field23_0x38 * 10.0 * DAT_00386c94;
  iVar1 = FUN_001f9978(character);
  return fVar2 * (float)iVar1 * DAT_00386c98;
}



// Function Address: {@address 0x0023f0e0}

float Melee_Attacks::getAttack_0x38(character_t *character,int attackOffset)

{
  meleeAttack_t *parameters;
  int iVar1;
  float fVar2;
  
  parameters = getAttack(character,attackOffset);
  fVar2 = parameters->field23_0x38 * 10.0 * DAT_00386c9c;
  iVar1 = FUN_001f9978(character);
  return fVar2 * (float)iVar1 * DAT_00386ca0;
}



// Function Address: {@address 0x0023f140}

float Melee_Attacks::getCurrentAttack_0x3C(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->field24_0x3c * 10.0 * DAT_00386ca4;
}



// Function Address: {@address 0x0023f178}

float Melee_Attacks::getCurrentAttack_0x40(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return (parameters->field25_0x40 / 180.0) * DAT_00386ca8;
}



// Function Address: {@address 0x0023f1b8}

float Melee_Attacks::getCurrentAttack_0x44(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return (parameters->field26_0x44 / 180.0) * DAT_00386cac;
}



// Function Address: {@address 0x0023f1f8}

float Melee_Attacks::getCurrentAttack_0x48(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->field27_0x48;
}



// Function Address: {@address 0x0023f218}

float Melee_Attacks::getCurrentAttack_0x4C(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->field28_0x4c;
}



// Function Address: {@address 0x0023f238}

float Melee_Attacks::getCurrentAttack_0x50(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->field29_0x50;
}



// Function Address: {@address 0x0023f258}

float Melee_Attacks::getCurrentAttack_0x54(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->field30_0x54;
}



// Function Address: {@address 0x0023f278}

float Melee_Attacks::getCurrentAttack_0x58(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->field31_0x58;
}



// Function Address: {@address 0x0023f298}

u8 Melee_Attacks::getCurrentAttack_Visual(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->visual;
}



// Function Address: {@address 0x0023f2b8}

u8 Melee_Attacks::getCurrentAttack_Sound(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->sound;
}



// Function Address: {@address 0x0023f330}

u8 Melee_Attacks::getCurrentAttack_EffectGuard(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->effect_guard;
}



// Function Address: {@address 0x0023f350}

u8 Melee_Attacks::getCurrentAttack_0x5E(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->field_0x5e;
}



// Function Address: {@address 0x0023f370}

u8 Melee_Attacks::getCurrentAttack_0x5F(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->field_0x5f;
}



// Function Address: {@address 0x0023f390}

u8 Melee_Attacks::getCurrentAttack_0x5C(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->field_0x5c;
}



// Function Address: {@address 0x0023f3b0}

u8 Melee_Attacks::getCurrentAttack_0x5D(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->field_0x5d;
}



// Function Address: {@address 0x0023f3d0}

u8 Melee_Attacks::getCurrentAttack_EffectCounter(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->effect_counter;
}



// Function Address: {@address 0x0023f3f0}

u8 Melee_Attacks::getCurrentAttack_GuardType(character_t *character)

{
  meleeAttack_t *parameters;
  
  parameters = getCurrentAttack(character);
  return parameters->guard_type;
}


