#include "charstats.h"

// Function Address: {@address 0x00202e80}

battleStats_t * getBattleStats(character_t *character)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00202dc0(character);
  return (battleStats_t *)(puVar1 + 0xe);
}



// Function Address: {@address 0x0020b2b8}

bool getCharacter_isBattleDamaged(int characterChoice)

{
  bool bVar1;
  character_t *character;
  battleStats_t *stats;
  
  if (DAT_00387930 == 0) {
    bVar1 = false;
  }
  else if ((uint)characterChoice < 2) {
    character = getCharacter(characterChoice);
    stats = getBattleStats(character);
    bVar1 = false;
    if (stats->hp_current <= stats->hp_maximum / 2) {
      bVar1 = stats->isBattleDamaged != false;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// WARNING: Removing unreachable block (ram,0x002033a4)
// WARNING: Removing unreachable block (ram,0x00203430)
// Function Address: {@address 0x00203310}

int decreaseHP(character_t *character,int decrease,uint param_3)

{
  char decreaseModifier;
  bool bVar1;
  battleStats_t *charStats;
  u32 currentAnim;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int previousHP;
  int *ptrDmgBuffer;
  float decreaseMultiplier;
  int charHealth;
  int currentHP;
  
  ptrDmgBuffer = &character->damageBuffer;
  charStats = getBattleStats(character);
  currentHP = charStats->hp_current;
  if ((param_3 & 0x8000) == 0) {
    currentAnim = /*character*/getCharacter_currentAnimation(character);
    uVar2 = FUN_001fa3a8(currentAnim);
    if ((uVar2 & 0x100000) != 0) {
      decrease /= 2;
    }
  }
  if ((param_3 & 1) == 0) {
    decreaseModifier = FUN_001f9940((int)character);
    decreaseMultiplier = /*General_Params*/getDamageMultiplier(character);
    decrease = (int)((float)((decrease * decreaseModifier) / 100) * decreaseMultiplier);
  }
  if (decrease < 1) {
    if ((param_3 & 0x10000) == 0) {
      return 0;
    }
    decrease = 0;
  }
  bVar1 = /*character*/getBattleFlag(character,0,0x400000);
  if ((!bVar1) && ((param_3 & 0x40) == 0)) {
    return (int)bVar1;
  }
  if ((param_3 & 2) == 0) {
    if (9 < decrease) {
                    // apparently, the game will round the damage up to the nearest 10
      if (decrease % 10 != 0) {
        decrease = (decrease - decrease % 10) + 10;
      }
      goto LAB_0020344c;
    }
    iVar3 = *(int *)(DAT_003876a0 + 0xb8);
  }
  else {
LAB_0020344c:
    iVar3 = *(int *)(DAT_003876a0 + 0xb8);
  }
  if ((iVar3 - 4U < 2) && (iVar3 = charStats->hp_current + -1, iVar3 < decrease)) {
    decrease = iVar3;
  }
  bVar1 = FUN_00203c58(character,0x400);
  if ((bVar1) && (iVar3 = charStats->hp_current + -1, iVar3 < decrease)) {
    FUN_00203c88(character,0x400);
    decrease = iVar3;
  }
  bVar1 = FUN_00203c58(character,0x10000);
  previousHP = charStats->hp_current;
  if ((bVar1) && (iVar3 = previousHP + -1, iVar3 < decrease)) {
    FUN_00203c88(character,0x10000);
    character->field3795_0x1528 = 0x5a;
    previousHP = charStats->hp_current;
    decrease = iVar3;
  }
  if ((param_3 & 4) != 0) {
    if (previousHP + -1 < decrease) {
      decrease = previousHP + -1;
    }
    bVar1 = FUN_00203c58(character,0x20000000);
    previousHP = charStats->hp_current;
    if (bVar1) {
      decrease = 0;
    }
  }
  charStats->hp_current = previousHP - decrease;
  if ((param_3 & 8) == 0) {
    if (decrease < 1) {
      if ((param_3 & 0x10000) == 0) {
        iVar3 = *ptrDmgBuffer;
        goto LAB_002035f8;
      }
      iVar3 = character->field2552_0xbc4;
    }
    else {
      iVar3 = character->field2552_0xbc4;
    }
    character->field2552_0xbc4 = iVar3 + 1;
    if (99 < iVar3 + 1) {
      character->field2552_0xbc4 = 99;
    }
    decreaseMultiplier = DAT_003858fc;
    iVar3 = *ptrDmgBuffer;
    *ptrDmgBuffer = iVar3 + decrease;
    decreaseMultiplier = (float)(iVar3 + decrease) * 30.0 * decreaseMultiplier;
LAB_002035cc:
    character->timer_displayDmgTaken = (int)decreaseMultiplier + 0x1e;
    if (0x5a < (int)decreaseMultiplier + 0x1e) {
      character->timer_displayDmgTaken = 0x5a;
    }
LAB_002035ec:
    character->field2556_0xbd4 = 1;
  }
  else if ((0 < decrease) || ((param_3 & 0x10000) != 0)) {
    if ((param_3 & 0x10) != 0) {
      iVar3 = *ptrDmgBuffer;
      goto LAB_002035f8;
    }
    iVar3 = *ptrDmgBuffer;
    *ptrDmgBuffer = iVar3 + decrease;
    if ((param_3 & 0x20) == 0) {
      decreaseMultiplier = (float)(iVar3 + decrease) * 30.0 * DAT_003858f8;
      goto LAB_002035cc;
    }
    goto LAB_002035ec;
  }
  iVar3 = *ptrDmgBuffer;
LAB_002035f8:
  iVar6 = 99999;
  if (iVar3 < 100000) {
    iVar5 = character->field2552_0xbc4;
    iVar6 = iVar3;
  }
  else {
    *ptrDmgBuffer = 99999;
    iVar5 = character->field2552_0xbc4;
  }
  character->amount_displayDmgTaken = iVar6;
  character->field2555_0xbd0 = iVar5;
  character->field2557_0xbd5 = (byte)((int)param_3 >> 2) & 1;
  iVar3 = charStats->hp_current;
  if (iVar3 < 0) {
    charStats->hp_current = 0;
    iVar3 = 0;
  }
  if (currentHP < 1) {
    piVar4 = character->field3657_0x145c;
  }
  else if (iVar3 == 0) {
    if ((param_3 & 0x80) != 0) {
      updateBattleFlags(character,0x10,4,true);
    }
    if ((param_3 & 0x100) != 0) {
      updateBattleFlags(character,0x10,4,true);
    }
    if ((param_3 & 0x200) != 0) {
      updateBattleFlags(character,0x10,2,true);
    }
    if ((param_3 & 0x400) != 0) {
      updateBattleFlags(character,0x10,2,true);
    }
    if ((param_3 & 0x800) != 0) {
      updateBattleFlags(character,0x10,1,true);
    }
    if ((param_3 & 0x1000) != 0) {
      updateBattleFlags(character,0x10,8,true);
    }
    if ((param_3 & 0x2000) != 0) {
      updateBattleFlags(character,0x10,0x10,true);
    }
    if ((param_3 & 0x4000) != 0) {
      updateBattleFlags(character,0x10,0x20,true);
    }
    piVar4 = character->field3657_0x145c;
  }
  else {
    piVar4 = character->field3657_0x145c;
  }
  if ((int)piVar4 < (int)(int *)*ptrDmgBuffer) {
    character->field3657_0x145c = (int *)*ptrDmgBuffer;
  }
  if (character->field3658_0x1460 < character->field2552_0xbc4) {
    character->field3658_0x1460 = character->field2552_0xbc4;
  }
  if (decrease < 1) {
    charHealth = charStats->hp_current;
  }
  else {
    character->field3659_0x1464 = 1;
    charHealth = charStats->hp_current;
  }
  if (charHealth == 0) {
    charStats->blue_ki_current = 0;
    charStats->ki_current = 0;
    charStats->blast_gauge_current = 0;
    character->timer_paralyzation = 0;
    updateBattleFlags(character,0,0x4000,false);
  }
  return currentHP - iVar3;
}



// Function Address: {@address 0x002037c8}
// 
// This function is called on every frame in training mode.

void increaseHP(character_t *character,int increase)

{
  battleStats_t *char_stats;
  int new_hp;
  
  char_stats = getBattleStats(character);
  if (0 < increase) {
    new_hp = char_stats->hp_current + increase;
    char_stats->hp_current = new_hp;
    if (char_stats->hp_maximum < new_hp) {
      char_stats->hp_current = char_stats->hp_maximum;
    }
  }
  return;
}



// Function Address: {@address 0x00203810}

void increaseKi(character_t *character,int increase)

{
  battleStats_t *charStats;
  int new_ki;
  
  charStats = getBattleStats(character);
  if (0 < increase) {
    new_ki = charStats->ki_current + increase;
    charStats->ki_current = new_ki;
    if (charStats->ki_maximum < new_ki) {
      charStats->ki_current = charStats->ki_maximum;
    }
  }
  return;
}



// Function Address: {@address 0x00203858}

bool isKiNotUnder(void *character,int comparison)

{
  battleStats_t *charStats;
  
  charStats = getBattleStats((character_t *)character);
  return comparison <= charStats->ki_current;
}



// Function Address: {@address 0x00203888}

bool decreaseKi(character_t *character,int decrease,long param_3)

{
  bool bVar1;
  battleStats_t *charStats;
  int newKi;
  
  charStats = getBattleStats(character);
  if ((param_3 == 0) && (bVar1 = /*character*/getBattleFlag(character,0,0x800), bVar1)) {
    return false;
  }
  newKi = charStats->ki_current - decrease;
  charStats->ki_current = newKi;
  if (newKi < 0) {
    charStats->ki_current = 0;
  }
  charStats->blue_ki_current = 0;
  return newKi < 0;
}



// Function Address: {@address 0x00203918}
// 
// I have no idea when this gets called

int reduceKi(character_t *character,int kiCost)

{
  battleStats_t *charStats;
  int reducedKi;
  int currentKi;
  
  charStats = getBattleStats(character);
  currentKi = 0;
  if (0 < kiCost) {
    currentKi = charStats->ki_current;
    charStats->blue_ki_current = 0;
    reducedKi = currentKi - kiCost;
    if (reducedKi < 0) {
      reducedKi = 0;
    }
    charStats->ki_current = reducedKi;
    currentKi -= reducedKi;
  }
  return currentKi;
}



// Function Address: {@address 0x00203968}

void increaseBlastGauge(character_t *character,int gaugeAmount)

{
  battleStats_t *charStats;
  int newGauge;
  
  charStats = getBattleStats(character);
  newGauge = charStats->blast_gauge_current + gaugeAmount;
  charStats->blast_gauge_current = newGauge;
  if (charStats->blast_gauge_maximum < newGauge) {
    charStats->blast_gauge_current = charStats->blast_gauge_maximum;
    updateBattleFlags(character,0x10,0x20000000,true);
    return;
  }
  return;
}



// Function Address: {@address 0x002039e0}

bool isBlastGaugeNotUnder(character_t *character,int comparison)

{
  battleStats_t *charStats;
  
  charStats = getBattleStats(character);
  return comparison <= charStats->blast_gauge_current;
}



// Function adress: {@address 0x00203a10}

void decreaseBlastGauge(character_t *character,int decrease)

{
  battleStats_t *charStats;
  int newGauge;
  
  charStats = getBattleStats(character);
  newGauge = charStats->blast_gauge_current - decrease;
  if (newGauge < 0) {
    newGauge = 0;
  }
  charStats->blast_gauge_current = newGauge;
  return;
}



// Function Address: {@address 0x00203a48}

void increaseBlueKi(character_t *character,int increase)

{
  battleStats_t *charStats;
  int newBlueKi;
  
  charStats = getBattleStats(character);
  newBlueKi = charStats->blue_ki_current + increase;
  charStats->blue_ki_current = newBlueKi;
  if (30000 < newBlueKi) {
    charStats->blue_ki_current = 30000;
  }
  return;
}



// Function address: {@address 0x00203a90}

void decreaseBlueKi(character_t *character,int decrease)

{
  battleStats_t *charStats;
  int newBlueKi;
  
  charStats = getBattleStats(character);
  newBlueKi = charStats->blue_ki_current - decrease;
  if (newBlueKi < 0) {
    newBlueKi = 0;
  }
  charStats->blue_ki_current = newBlueKi;
  return;
}



// Function Address: {@address 0x00203ac8}

float getHealthPercentage(character_t *character)

{
  battleStats_t *charStats;
  float percentage;
  
  charStats = getBattleStats(character);
  percentage = 0.0;
  if (0 < charStats->hp_maximum) {
    percentage = (float)charStats->hp_current / (float)charStats->hp_maximum;
  }
  return percentage;
}



// Function Address: {@address 0x00203b10}

float getKiPercentage(character_t *character)

{
  battleStats_t *battleStats;
  float ki;
  
  battleStats = getBattleStats(character);
  ki = 0.0;
  if (0 < battleStats->ki_maximum) {
    ki = (float)battleStats->ki_current / (float)battleStats->ki_maximum;
  }
  return ki;
}



// Function Address: {@address 0x00203b58}

bool isCharAtFullHealth(character_t *character)

{
  battleStats_t *charStats;
  
  charStats = getBattleStats(character);
  return charStats->hp_maximum <= charStats->hp_current;
}



// Function Address: {@address 0x00203b88}

bool isCharAtFullKi(character_t *character)

{
  battleStats_t *charStats;
  
  charStats = getBattleStats(character);
  return charStats->ki_maximum <= charStats->ki_current;
}



// Function Address: {@address 0x00203bb8}

bool isCharAtFullBlueKi(character_t *character)

{
  battleStats_t *charStats;
  
  charStats = getBattleStats(character);
  return 29999 < charStats->blue_ki_current;
}



// Function Address: {@address 0x00203be0}

bool isCharAtNoHealth(character_t *character)

{
  battleStats_t *charStats;
  
  charStats = getBattleStats(character);
  return charStats->hp_current < 1;
}



// Function Address: {@address 0x00203c08}

bool isCharAtNoKi(character_t *character)

{
  battleStats_t *charStats;
  
  charStats = getBattleStats(character);
  return charStats->ki_current < 1;
}



// Function Address: {@address 0x00203c30}

bool isCharAtNoBlueKi(character_t *character)

{
  battleStats_t *battleStats;
  
  battleStats = getBattleStats(character);
  return battleStats->blue_ki_current < 1;
}



// Function Adress: {@address 0x00203cc0}

battleStats_t * getCharacter_BattleStats(int choice)

{
  character_t *character;
  battleStats_t *charStats;
  
  if ((DAT_00387930 != 0) && ((uint)choice < 2)) {
    character = /*character*/getCharacter(choice);
    charStats = getBattleStats(character);
    return charStats;
  }
  return NULL;
}



// Function Address: {@address 0x002127f8}

bool isDead(character_t *character)

{
  battleStats_t *charStats;
  
  charStats = getBattleStats(character);
  return charStats->hp_current < 1;
}


