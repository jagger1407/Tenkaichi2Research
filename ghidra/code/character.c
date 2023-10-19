#include "character.h"

// Function Address: {@address 0x00101ea8}
// 
// In Training Mode, this
// makes the AI stand still.

void disableAI(int param_1,char enable,int param_3)

{
  astruct_4 *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = FUN_00101a88(param_1);
  piVar1->ai_disabled = enable != 1;
  iVar3 = 0;
  if (0 < piVar1->field0_0x0) {
    piVar2 = &piVar1->field13_0x10;
    do {
      *piVar2 = param_3;
      iVar3 += 1;
      piVar2 = piVar2 + 0x16;
    } while (iVar3 < piVar1->field0_0x0);
  }
  return;
}



// Function Address: {@address 0x001fa390}

u32 getCharacter_currentAnimation(character_t *character)

{
  return character->maybeCurrentAnimation;
}



// Function Address: {@address 0x001fa398}

int getCharacter_0x8E4(character_t *param_1)

{
  return param_1->field1977_0x8e4;
}



// Function Address: {@address 0x001fa3a0}

undefined4 getCharacter_0x8E8(character_t *character)

{
  return character->field1978_0x8e8;
}



// Function Address: {@address 0x00207e80}

float getCharacter_LeftStick_X(character_t *param_1)

{
  return param_1->leftStick_xAxis;
}



// Function Address: {@address 0x00207e88}

float getCharacter_LeftStick_Y(character_t *character)

{
  return character->leftStick_yAxis;
}



// Function Address: {@address 0x00207e90}

float getCharacter_0x18(character_t *character)

{
  return character->field18_0x18;
}



// Function Address: {@address 0x0020abe0}

bool getCharacter_isChargingKiBlast(int characterChoice)

{
  character_t *character;
  character_state charState;
  character_state cVar1;
  
  if (DAT_00387930 != 0) {
    if (1 < (uint)characterChoice) {
      return false;
    }
    character = getCharacter(characterChoice);
    charState = getCharacterState(character);
    if (charState == STATE_JUMP_CHARGE_KI_BLAST) {
      return true;
    }
    if ((int)charState < 0x8b) {
      cVar1 = STATE_CHARGE_KI_BLAST;
    }
    else {
      cVar1 = STATE_DASH_CHARGE_KI_BLAST;
    }
    if (charState == cVar1) {
      return true;
    }
  }
  return false;
}



// Function Address: {@address 0x0020ae40}

bool getCharacter_isDead(int characterChoice)

{
  bool dead;
  character_t *character;
  
  if (DAT_00387930 != 0) {
    if (1 < (uint)characterChoice) {
      return false;
    }
    character = getCharacter(characterChoice);
    dead = /*CharStats*/isCharAtNoHealth(character);
    if (dead) {
      return true;
    }
  }
  return false;
}



// Function Address: {@address 0x0020b378}

bool getCharacter_inMaxPowerCombo(int characterChoice)

{
  bool output;
  character_t *character;
  character_state currentState;
  
  if (DAT_00387930 == 0) {
    output = false;
  }
  else if ((uint)characterChoice < 2) {
    character = getCharacter(characterChoice);
    currentState = getCharacterState(character);
    if (currentState == STATE_MAX_POWER_COMBO) {
      output = true;
    }
    else {
      output = false;
    }
  }
  else {
    output = false;
  }
  return output;
}



// Function Address: {@address 0x0020b6e0}

int getCharacter_dmgTaken(int characterChoice)

{
  character_t *character;
  int damage;
  
  if (DAT_00387930 == 0) {
    damage = 0;
  }
  else if ((uint)characterChoice < 2) {
    character = getCharacter(characterChoice);
    damage = character->amount_displayDmgTaken;
  }
  else {
    damage = 0;
  }
  return damage;
}



// Function Address: {@address 0x0020b760}

int getCharacter_dmgBuffer(int characterChoie)

{
  character_t *character;
  int buffer;
  
  if (DAT_00387930 == 0) {
    buffer = 0;
  }
  else if ((uint)characterChoie < 2) {
    character = getCharacter(characterChoie);
    buffer = character->damageBuffer;
  }
  else {
    buffer = 0;
  }
  return buffer;
}



// Function Address: {@address 0x0020b7a0}

int getCharacter_timerDmgTaken(int characterChoice)

{
  character_t *pcVar1;
  int time_left;
  
  if (DAT_00387930 == 0) {
    time_left = 0;
  }
  else if ((uint)characterChoice < 2) {
    pcVar1 = getCharacter(characterChoice);
    time_left = pcVar1->timer_displayDmgTaken;
  }
  else {
    time_left = 0;
  }
  return time_left;
}



// Function Address: {@address 0x00211288}

character_t * getCharacter(int choice)

{
  return (character_t *)(*DAT_00387930 + choice * 0x1550);
}



// Function Address: {@address 0x002112c8}

float * getCharacter_0x510(character_t *character)

{
  return character->field1161_0x510;
}



// Function Address: {@address 0x00211310}

bool getBattleFlag(character_t *character,int offset,uint mask)

{
  return (character->battleFlags[offset] & mask) != 0;
}



// Function Address: {@address 0x002125d8}

int getCurrentTransformationIndex(character_t *character)

{
  character_state charState;
  int index;
  character_state cVar1;
  
  charState = getCharacterState(character);
  index = 2;
  if (charState != STATE_TRANSFORM_3) {
    cVar1 = STATE_DETRANSFORM;
    if ((int)charState < 0x31) {
      if (charState == STATE_TRANSFORM_1) {
        return 0;
      }
      cVar1 = STATE_TRANSFORM_2;
      index = 1;
    }
    else {
      index = 3;
    }
    if (charState != cVar1) {
      index = -1;
    }
  }
  return index;
}



// Function Address: {@address 0x00212638}
// 
// Return Values:
// 0 if current state is 0x34 or 0x37
// 1 if current state is 0x35 or 0x38
// 2 if current state is 0x36 or 0x39
// -1 if none of the above

int getFusionOffsetByState(character_t *character)

{
  character_state charState;
  int fusion;
  
  charState = getCharacterState(character);
  fusion = -1;
  switch(charState) {
  case 0x34:
  case 0x37:
    fusion = 0;
    break;
  case 0x35:
  case 0x38:
    fusion = 1;
    break;
  case 0x36:
  case 0x39:
    fusion = 2;
  }
  return fusion;
}



// Function Address: {@address 0x00212820}

bool isNotParalyzed(character_t *character)

{
  bool dead;
  bool battleFlag;
  bool paralyzed;
  
  dead = /*charstats*/isDead(character);
  if ((dead) || (battleFlag = getBattleFlag(character,0,0x4000), battleFlag)) {
    paralyzed = false;
  }
  else {
    paralyzed = character->timer_paralyzation < 1;
  }
  return paralyzed;
}



// Function Address: {@address 0x00217488}

character_state getCharacterState(character_t *character)

{
  return character->current_state;
}



// Function Address: {@address 0x00217490}

character_state getLastStoredState(character_t *param_1)

{
  int idxLastState;
  
  idxLastState = param_1->index_stored_states + -1;
  if (idxLastState < 0) {
    idxLastState = 0xff;
  }
  return param_1->stored_states[idxLastState];
}



// Function Address: {@address 0x002174b8}
// 
// What the field with the offset 0xc0c is, I have not yet figured out

character_state getBufferedState(character_t *character)

{
  character_state state;
  
  state = character->field2594_0xc0c;
  if (state == STATE_INVALID) {
    state = character->buffered_state;
  }
  return state;
}



// Function Address: {@address 0x00238908}
// 
// This uses all the functions to get transformation related data,
// then updates a bunch of battle flags. It must have something to do with
// the character transforming.

void initCharTransformation_WIP(character_t *character)

{
  float fVar1;
  bool bVar2;
  character_state cVar3;
  u32 uVar4;
  int transformation;
  int transformCost;
  flags_1 fVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (character->field1962_0x8cc == 1) {
    updateBattleFlags(character,0xc,1,true);
    FUN_0020fc38(character,0x54);
    setCharacter_0x368(character,0xe);
    cVar3 = getCharacterState(character);
    if (cVar3 != STATE_DETRANSFORM) {
      character_0x338_setBits(character,1);
    }
  }
  uVar4 = getCharacter_currentAnimation(character);
  switch(uVar4) {
  case 0x18e:
  case 0x1ae:
    bVar2 = FUN_001f9fb0(character,0);
    if (bVar2) {
      FUN_001f9f90(character);
    }
    goto LAB_00238a74;
  case 399:
  case 0x1af:
    FUN_001fa110(character,0);
    bVar2 = getBattleFlag(character,0xc,4);
    if (bVar2) {
      cVar3 = getCharacterState(character);
      if (0x2d < (int)cVar3) {
        if ((int)cVar3 < 0x31) {
          FUN_001f9d78(character,400);
        }
        else if (cVar3 == STATE_DETRANSFORM) {
          FUN_001f9d78(character,0x1b0);
        }
      }
      transformation = getCurrentTransformationIndex(character);
      transformCost = /*general_parameters*/getTransformationCost(character,transformation);
      /*charstats*/decreaseBlastGauge(character,transformCost);
      updateBattleFlags(character,0xc,8,true);
    }
LAB_00238a74:
    FUN_00216970(character);
    break;
  case 400:
    bVar2 = FUN_001fa2e0(character);
    if (bVar2) {
      character_0x338_setBits(character,2);
      updateBattleFlags(character,0xc,0x10,true);
      fVar5 = /*general_parameters*/getFlags_1(character);
      if (((uint)fVar5 & 0x40000) == 0) {
        FUN_0020fc38(character,0x53);
      }
      else {
        FUN_0020fc38(character,0x4c);
      }
      setCharacter_0x368(character,0x22);
      pfVar6 = getCharacter_0x510(character);
      fVar1 = DAT_00386afc;
      fVar7 = FUN_002111e8(pfVar6[0x2d] + DAT_00386af8);
      fVar8 = fVar7;
      FUN_00207ee8(character->field3798_0x1534);
      fVar9 = fVar7 * DAT_00386b00;
      FUN_00207ee8(character->field3798_0x1534);
      FUN_001fc3b0(fVar8,0,0,0,fVar9,-fVar7 * fVar1,character,(u32 *)&DAT_00344be0,(u32 *)&DAT_00344be0,(u32 *)&DAT_00344be0,(u32 *)&DAT_00344be0,(u32 *)&DAT_00344be0,(u32 *)&DAT_00344be0,0x11,0x11,
                   0x11,0x11,8,0xc5);
      FUN_001fbe80(5.0,fVar1,character);
      FUN_00212aa0(1.0,0.5,character);
    }
    else {
      updateBattleFlags(character,0xc,0x10,false);
    }
    bVar2 = FUN_001f9fb0(character,0);
    if (bVar2) {
      character_0x338_setBits(character,4);
      FUN_00212890(0x3c);
    }
    FUN_00216678(character);
    updateBattleFlags(character,1,0x2000,true);
    break;
  case 0x1b0:
    bVar2 = FUN_001fa2e0(character);
    if (bVar2) {
      updateBattleFlags(character,0xc,0x10,true);
      FUN_00210618((int)character,0x3c1f);
    }
    else {
      updateBattleFlags(character,0xc,0x10,false);
    }
    FUN_001f9fb0(character,0);
    FUN_00216678(character);
  }
  FUN_00215068(DAT_00386b08,DAT_00386b04,character,5,0xc);
  FUN_00215e88(character,7);
  FUN_00216208(0.0,DAT_00386b0c,character);
  updateBattleFlags(character,9,0x10000,true);
  updateBattleFlags(character,9,4,true);
  updateBattleFlags(character,3,0xf,true);
  updateBattleFlags(character,0xd,8,true);
  updateBattleFlags(character,0xd,0x10,true);
  updateBattleFlags(character,0xd,1,true);
  updateBattleFlags(character,3,0x800,true);
  updateBattleFlags(character,9,0x200000,true);
  updateBattleFlags(character,1,0x800,true);
  updateBattleFlags(character,0xf,0x100000,true);
  character->field_0x1014 = 1;
  return;
}



// Function Address: {@address 0x0023bda8}
// 
// gets the character states relating to movement
// and ki charging/deflection/absorption
// I think, I mean what else could it be

character_state getState_Movement(character_t *character,uint param_2)

{
  bool bVar1;
  flags_2 fVar2;
  uint uVar3;
  character_state cVar4;
  flags_3 fVar5;
  battleStats_t *pbVar6;
  int iVar7;
  flags_1 fVar8;
  character_state cVar9;
  float fVar10;
  float fVar11;
  
  if (((param_2 & 0x4000000) != 0) && (0 < character->timer_paralyzation)) {
    return 0x9f;
  }
  if (((param_2 & 0x2000000) != 0) && (bVar1 = getBattleFlag(character,0,0x4000), bVar1)) {
    return 0xa1;
  }
  if (((((param_2 & 0x80) != 0) && (bVar1 = getBattleFlag(character,0,2), !bVar1)) && (bVar1 = getBattleFlag(character,0,4), !bVar1)) && (bVar1 = FUN_00211328(character,0,4), !bVar1)) {
    return STATE_JUMP_FALLING;
  }
  if (((param_2 & 0x1000000) != 0) && (bVar1 = /*charstats*/isDead(character), bVar1)) {
    return 0xa0;
  }
  fVar2 = /*general_parameters*/getFlags_2(character);
                    // might check if character can Dragon Dash
  if (((uint)fVar2 & 1) != 0) {
    if ((((param_2 & 0x100) != 0) && (uVar3 = FUN_00207c30(character,7), uVar3 != 0)) && (uVar3 = FUN_00207c08(character,3), uVar3 != 0)) {
      bVar1 = getBattleFlag(character,0,1);
      if (!bVar1) {
        return STATE_DRAGON_DASH_FREE;
      }
      uVar3 = FUN_00207c30(character,8);
      if (uVar3 != 0) {
        return STATE_DRAGON_DASH_FREE;
      }
      return STATE_DRAGON_DASH_CHASE;
    }
    if ((((param_2 & 0x200) != 0) && (uVar3 = FUN_00207c30(character,7), uVar3 != 0)) && (uVar3 = FUN_00207c08(character,4), uVar3 != 0)) {
      return STATE_DRAGON_ASCEND;
    }
    if ((((param_2 & 0x400) != 0) && (bVar1 = getBattleFlag(character,0,4), !bVar1)) && ((uVar3 = FUN_00207c30(character,7), uVar3 != 0 && (uVar3 = FUN_00207c08(character,5), uVar3 != 0)))) {
      return STATE_DRAGON_DESCEND;
    }
  }
  if ((((param_2 & 2) != 0) && (bVar1 = getBattleFlag(character,0,4), bVar1)) && ((bVar1 = getBattleFlag(character,0,0x100), !bVar1 && (uVar3 = FUN_00207c08(character,4), uVar3 != 0)))) {
    return STATE_JUMP;
  }
  if (((param_2 & 4) != 0) && (uVar3 = FUN_00207c08(character,3), uVar3 != 0)) {
    cVar4 = FUN_0023d380(character);
    return cVar4;
  }
  if ((((param_2 & 0x800) != 0) && (bVar1 = getBattleFlag(character,0,1), bVar1)) && (uVar3 = FUN_00207c08(character,3), uVar3 != 0)) {
    uVar3 = FUN_00207c30(character,8);
    if (uVar3 == 0) {
                    // might check if the character can use Step-In
      if (((param_2 & 0x1000) != 0) && (fVar2 = /*general_parameters*/getFlags_2(character), ((uint)fVar2 & 8) != 0)) {
        return STATE_STEP_IN;
      }
    }
    else {
      fVar11 = getCharacter_LeftStick_Y(character);
      fVar10 = getCharacter_LeftStick_X(character);
      if (ABS(fVar11) <= ABS(fVar10)) {
        fVar11 = getCharacter_LeftStick_X(character);
        if (0.0 <= fVar11) {
          return STATE_STEP_RIGHT;
        }
        return STATE_STEP_LEFT;
      }
      fVar11 = getCharacter_LeftStick_Y(character);
      if (0.0 <= fVar11) {
        return STATE_STEP_BACK;
      }
    }
  }
                    // might check if character can teleport while attacking
  if ((((param_2 & 0x10000) != 0) && (fVar2 = /*general_parameters*/getFlags_2(character), ((uint)fVar2 & 0x200) != 0)) &&
     ((bVar1 = getBattleFlag(character,0,1), bVar1 && ((uVar3 = FUN_00207c08(character,2), uVar3 != 0 && (uVar3 = FUN_00207c30(character,7), uVar3 == 0)))))) {
    bVar1 = FUN_00203c58(character,0x4000);
    iVar7 = 0;
    if (!bVar1) {
      iVar7 = 10000;
    }
    bVar1 = /*charstats*/isKiNotUnder(character,iVar7);
    if ((bVar1) && (uVar3 = FUN_00207c30(character,8), uVar3 != 0)) {
      fVar11 = getCharacter_LeftStick_Y(character);
      fVar10 = getCharacter_LeftStick_X(character);
      if (ABS(fVar10) < ABS(fVar11)) {
        fVar11 = getCharacter_LeftStick_Y(character);
        if (0.0 <= fVar11) {
          return STATE_TELEPORT_BACKWARD;
        }
        return STATE_TELEPORT_FORWARD;
      }
      fVar11 = getCharacter_LeftStick_X(character);
      if (0.0 <= fVar11) {
        return STATE_TELEPORT_RIGHT;
      }
      return STATE_TELEPORT_LEFT;
    }
  }
  if (((((param_2 & 0x2000) == 0) || (bVar1 = getBattleFlag(character,0,1), !bVar1)) || (bVar1 = getBattleFlag(character,0,0x102), !bVar1)) || (uVar3 = FUN_00207c08(character,4), uVar3 == 0)) {
    if ((((param_2 & 0x8000) == 0) || (bVar1 = getBattleFlag(character,0,1), !bVar1)) || ((bVar1 = getBattleFlag(character,0,4), bVar1 || (uVar3 = FUN_00207c08(character,5), uVar3 == 0)))) {
LAB_0023c2a4:
      if (((param_2 & 0x40000) != 0) && (cVar4 = FUN_0023d600(character), cVar4 != STATE_INVALID)) {
        return cVar4;
      }
      if (((param_2 & 0x200000) != 0) && (cVar4 = FUN_0023d8c0(character), cVar4 != STATE_INVALID)) {
        return cVar4;
      }
      if (((((param_2 & 0x20) != 0) && (bVar1 = getBattleFlag(character,0,0x800), !bVar1)) && (bVar1 = getBattleFlag(character,8,1), !bVar1)) && (uVar3 = FUN_00207c30(character,7), uVar3 != 0)) {
        fVar5 = /*general_parameters*/getFlags_3(character);
        if (((uint)fVar5 & 0x80) == 0) {
          return STATE_CHARGE_KI;
        }
                    // checks if character can charge blue ki
        pbVar6 = /*charstats*/getBattleStats(character);
        bVar1 = /*charstats*/isKiNotUnder(character,pbVar6->ki_maximum);
        if ((bVar1) && (bVar1 = /*charstats*/isBlastGaugeNotUnder(character,100000), bVar1)) {
          return STATE_CHARGE_KI;
        }
      }
                    // might check if character can deflect Ki Blasts
      if ((((param_2 & 0x400000) != 0) && (fVar2 = /*general_parameters*/getFlags_2(character), ((uint)fVar2 & 0x100) != 0)) && (uVar3 = FUN_00207c08(character,2), uVar3 != 0)) {
        iVar7 = FUN_00218580(5.0,2.0,character);
        if (iVar7 == 1) {
          fVar8 = /*general_parameters*/getFlags_1(character);
          cVar4 = STATE_DEFLECT;
LAB_0023c3fc:
          if (((uint)fVar8 & 2) != 0) {
            return STATE_ABSORB_KI;
          }
          return cVar4;
        }
        if (iVar7 == 2) {
          fVar8 = /*general_parameters*/getFlags_1(character);
          cVar4 = 0x44;
          goto LAB_0023c3fc;
        }
      }
      if (((param_2 & 0x20000) != 0) && (uVar3 = FUN_00207c30(character,2), uVar3 != 0)) {
        bVar1 = getBattleFlag(character,0,1);
        if (!bVar1) {
          return STATE_GUARDING;
        }
        fVar11 = FUN_00210a98(character);
        if (ABS(fVar11) <= DAT_00386c30) {
          return STATE_GUARDING;
        }
        cVar4 = FUN_00217518(0x41,0x3a);
        return cVar4;
      }
      if (((((param_2 & 0x80000) != 0) && (uVar3 = FUN_00207c08(character,6), uVar3 != 0)) && (character->timer_charBlindness < 1)) && (bVar1 = getBattleFlag(character,0,1), !bVar1)) {
        return STATE_SEARCHING;
      }
      if ((((param_2 & 8) != 0) && (bVar1 = getBattleFlag(character,0,0x102), bVar1)) && (uVar3 = FUN_00207c08(character,4), uVar3 != 0)) {
        fVar8 = /*general_parameters*/getFlags_1(character);
        cVar4 = STATE_ASCEND;
        goto LAB_0023c514;
      }
      if ((((param_2 & 0x10) == 0) || (bVar1 = getBattleFlag(character,0,0x102), !bVar1)) || ((bVar1 = getBattleFlag(character,0,4), bVar1 || (uVar3 = FUN_00207c08(character,5), uVar3 == 0)))) {
        if (((((param_2 & 0x800000) != 0) && (bVar1 = getBattleFlag(character,0,1), bVar1)) && (uVar3 = FUN_00207c30(character,0xc), uVar3 != 0)) && (uVar3 = FUN_00207c08(character,6), uVar3 != 0)) {
          return 0x48;
        }
        if ((((param_2 & 0x100000) != 0) && (bVar1 = FUN_0023bd30(character), bVar1)) && (uVar3 = FUN_00207c30(character,7), uVar3 != 0)) {
          uVar3 = FUN_00207c30(character,0x1c);
          if ((uVar3 != 0) && (uVar3 = FUN_00207c08(character,0x1d), uVar3 != 0)) {
            return 0x32;
          }
          uVar3 = FUN_00207c30(character,0x1d);
          if ((uVar3 != 0) && (uVar3 = FUN_00207c08(character,0x1c), uVar3 != 0)) {
            return 0x32;
          }
        }
        if (((param_2 & 0x40) != 0) && (cVar4 = FUN_0023dc00(character), cVar4 != STATE_INVALID)) {
          return cVar4;
        }
        if (((param_2 & 1) != 0) && (uVar3 = FUN_00207c30(character,8), uVar3 != 0)) {
          bVar1 = getBattleFlag(character,0,1);
          if ((bVar1) && (bVar1 = getBattleFlag(character,1,1), bVar1)) {
            cVar4 = getCharacterState(character);
            if (cVar4 != STATE_MOVING_CLOSE) {
              return STATE_MOVING_CLOSE;
            }
          }
          else {
            cVar4 = getCharacterState(character);
            if (cVar4 != STATE_MOVING) {
              return STATE_MOVING;
            }
          }
        }
        return STATE_INVALID;
      }
      fVar8 = /*general_parameters*/getFlags_1(character);
      if (((uint)fVar8 & 0x1000) != 0) {
        bVar1 = getBattleFlag(character,0,0x100);
        if (bVar1) {
          return STATE_DESCEND;
        }
        return STATE_JUMP_FALLING;
      }
    }
    else {
      bVar1 = getBattleFlag(character,0,0x100);
      if (!bVar1) {
        bVar1 = getBattleFlag(character,0,2);
        if (!bVar1) goto LAB_0023c2a4;
        fVar8 = /*general_parameters*/getFlags_1(character);
        if (((uint)fVar8 & 0x1000) != 0) {
          return STATE_JUMP_FALLING;
        }
      }
      fVar10 = FUN_00217330(character);
      fVar11 = fVar10;
      FUN_00207ee8(character->field3798_0x1534);
      if (fVar11 <= fVar10) {
        return STATE_STEP_DOWN;
      }
    }
    cVar9 = STATE_DESCEND;
  }
  else {
    fVar8 = /*general_parameters*/getFlags_1(character);
    cVar4 = STATE_STEP_UP;
LAB_0023c514:
    cVar9 = 0xc;
    if (((uint)fVar8 & 0x1000) == 0) {
      cVar9 = cVar4;
    }
  }
  return cVar9;
}


