#include "types.h"
#include "char_params_common.h"

typedef struct kiBlast_t kiBlast_t, *PkiBlast_t;
struct kiBlast_t {
    uint field0_0x0;
    int damage;
    int damage_guarding;
    int ki_cost;
    float speed;
    float homing;
    float range;
    float knockback;
    float field8_0x20;
    enum hitstun_enum hitstun;
    enum hitstun_enum field10_0x25;
    enum hitstun_enum field11_0x26;
    enum hitstun_enum field12_0x27;
    float size;
    float trail;
    undefined field15_0x30;
    uchar color;
    char amount_fired;
    uchar trajectory;
    undefined field19_0x34;
    undefined field20_0x35;
    undefined field21_0x36;
    undefined field22_0x37;
};

