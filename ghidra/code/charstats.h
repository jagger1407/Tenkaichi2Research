#include "types.h"
#include "character.h"

typedef struct battleStats_t battleStats_t, *PbattleStats_t;
struct battleStats_t {
    int hp_current;
    int hp_maximum;
    int field2_0x8;
    int ki_current;
    int ki_maximum;
    int blast_gauge_current;
    int blast_gauge_maximum;
    int blue_ki_current;
    int blue_ki_maximum;
    undefined4 field9_0x24;
    bool isBattleDamaged;
    bool field11_0x29;
    undefined field12_0x2a;
    bool field13_0x2b;
    char field14_0x2c;
    undefined field15_0x2d;
    undefined field16_0x2e;
    undefined field17_0x2f;
    int amountUsedBlast1_1;
    int amountUsedBlast1_2;
    int amountUsedBlast2_1;
    int amountUsedBlast2_2;
    int amountUsedUltimate;
};
