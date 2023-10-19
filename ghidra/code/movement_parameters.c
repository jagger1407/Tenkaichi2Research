#include "char_params_common.h"

// Function Address: {@address 0x00240d50}

float getSpeedOfMovement(character_t *character,movement_type movementType)

{
  int modifier;
  float speedOfMovement;
  
  speedOfMovement = character->field3797_0x1530->movementParameters[(char)movementType] * 10.0 * DAT_00386ce8;
  if (movementType != MOVEMENT_TYPE_LIFT_STRIKE_JUMP) {
    modifier = FUN_001f9978(character);
    speedOfMovement = speedOfMovement * (float)modifier * DAT_00386cec;
  }
  if (DAT_00386cf0 < speedOfMovement) {
    speedOfMovement = DAT_00386cf0;
  }
  return speedOfMovement;
}



// Function Address: {@address 0x00240dd0}

float getVerticalAcceleration(character_t *character,accel_e direction)

{
  return ((character->field3797_0x1530->movementParameters[(char)direction + 0x13] * 10.0 * 1000.0) / 3600.0) * DAT_00386cf4;
}



// Function Address: {@address 0x00240e20}

float getMovementParam_0x54(character_t *character)

{
  return (character->field3797_0x1530->movementParameters[0x15] / 180.0) * DAT_00386cf8;
}



// Function Address: {@address 0x00240e50}

int getDashLength(character_t *character,int param_2)

{
  return (int)(character->field3797_0x1530->movementParameters[param_2 + 22] * 30.0);
}



// Function Address: {@address 0x00240e80}

float getJumpHeight(character_t *character,int jumpType)

{
  return character->field3797_0x1530->movementParameters[jumpType + 26] * 10.0;
}



// WARNING: Removing unreachable block (ram,0x00240eb8)
// Function Address: {@address 0x00240ea8}

int getDragonDashKiCost(character_t *character,int dashType)

{
  return (int)character->field3797_0x1530->movementParameters[dashType + 0x1c] / 30;
}


