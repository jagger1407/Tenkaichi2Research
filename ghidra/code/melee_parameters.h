#include "types.h"
#include "char_params_common.h"

typedef struct meleeAttack_t meleeAttack_t, *PmeleeAttack_t;
struct meleeAttack_t {
    undefined4 attack_flags;
    u32 damage;
    u32 damage_guarding;
    int opponent_ki_loss;
    u32 character_ki_gain;
    int field5_0x14;
    int field6_0x18;
    undefined4 field7_0x1c;
    enum hitstun_enum hitstun;
    enum hitstun_enum field9_0x21;
    enum hitstun_enum field10_0x22;
    enum hitstun_enum field11_0x23;
    enum hitstun_enum field12_0x24;
    u8 field13_0x25;
    undefined field14_0x26;
    undefined field15_0x27;
    u8 visual;
    u8 sound;
    u8 field18_0x2a;
    u8 field19_0x2b;
    f32 knockback;
    float field21_0x30;
    f32 reach;
    float field23_0x38;
    float field24_0x3c;
    float field25_0x40;
    float field26_0x44;
    float field27_0x48;
    float field28_0x4c;
    float field29_0x50;
    float field30_0x54;
    float field31_0x58;
    undefined field32_0x5c;
    undefined field33_0x5d;
    undefined field34_0x5e;
    undefined field35_0x5f;
    u8 effect_guard;
    u8 effect_counter;
    u8 guard_type;
    u8 field39_0x63;
};

