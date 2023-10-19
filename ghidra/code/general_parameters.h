#include "types.h"
#include "char_params_common.h"

typedef struct flags_3 flags_3, *Pflags_3;
struct flags_3 {
    int field0_0x0:1;
    int field1_0x0:1;
    int field2_0x0:1;
    int field3_0x0:1;
    int field4_0x0:1;
    int field5_0x0:1;
    int field6_0x0:1;
    int field7_0x0:1;
    int field8_0x1:1;
    int field9_0x1:1;
    int field10_0x1:1;
    int field11_0x1:1;
    int field12_0x1:1;
    int field13_0x1:1;
    int field14_0x1:1;
    int field15_0x1:1;
    int field16_0x2:1;
    int field17_0x2:1;
    int field18_0x2:1;
    int field19_0x2:1;
    int field20_0x2:1;
    int field21_0x2:1;
    int field22_0x2:1;
    int field23_0x2:1;
    int field24_0x3:1;
    int field25_0x3:1;
    int field26_0x3:1;
    int field27_0x3:1;
    int field28_0x3:1;
    int field29_0x3:1;
    int field30_0x3:1;
    int field31_0x3:1;
};

typedef struct flags_2 flags_2, *Pflags_2;
struct flags_2 {
    int canDragonDash:1;
    int canLiftStrike:1;
    int canGroundSlash:1;
    int canSway:1;
    int field4_0x0:1;
    int canUseStepInAfterRush:1;
    int field6_0x0:1;
    int canDragonSmash:1;
    int canDeflectKiBlasts:1;
    int canOffensiveTeleport:1;
    int field10_0x1:1;
    int canUseJumpingDashingKiBlasts:1;
    int field12_0x1:1;
    int canDragonTornado:1;
    int canHeavyCrush:1;
    int canGiantThrow:1;
    int canSonicImpact:1;
    int canRollingHammer:1;
    int canKiaiCannonSmash:1;
    int canIllusionSlash:1;
    int field20_0x2:1;
    int field21_0x2:1;
    int field22_0x2:1;
    int field23_0x2:1;
    int field24_0x3:1;
    int field25_0x3:1;
    int canHyperSpeedMovement:1;
    int field27_0x3:1;
    int canDragonHeavy:1;
    int field29_0x3:1;
    int field30_0x3:1;
    int field31_0x3:1;
};

typedef struct transform_bonusses_t transform_bonusses_t, *Ptransform_bonusses_t;
struct transform_bonusses_t {
    u8 field0_0x0:1;
    u8 extraHealth10k:1;
    u8 extraHealth20K:1;
    u8 fullKi:1;
    u8 undoBattleDamage:1;
    u8 field5_0x0:1;
    u8 field6_0x0:1;
    u8 field7_0x0:1;
};

typedef struct flags_1 flags_1, *Pflags_1;
struct flags_1 {
    int field0_0x0:1;
    int canAbsorbEnergy:1;
    int field2_0x0:1;
    int field3_0x0:1;
    int field4_0x0:1;
    int field5_0x0:1;
    int field6_0x0:1;
    int field7_0x0:1;
    int field8_0x1:1;
    int field9_0x1:1;
    int field10_0x1:1;
    int canBreakObjectsByTouch:1;
    int isNonFlyingChar:1;
    int field13_0x1:1;
    int field14_0x1:1;
    int hasMetallicLandingNoise:1;
    int field16_0x2:1;
    int field17_0x2:1;
    int field18_0x2:1;
    int field19_0x2:1;
    int field20_0x2:1;
    int field21_0x2:1;
    int field22_0x2:1;
    int field23_0x2:1;
    int field24_0x3:1;
    int field25_0x3:1;
    int field26_0x3:1;
    int field27_0x3:1;
    int field28_0x3:1;
    int field29_0x3:1;
    int field30_0x3:1;
    int field31_0x3:1;
};

typedef enum fusion_type {
    FUSION_TYPE_NONE=0,
    FUSION_TYPE_DANCE=1,
    FUSION_TYPE_POTARA=2
} fusion_type;

typedef enum apeMode_e {
    GREAT_APE_MODE=4
} apeMode_e;

typedef struct generalParameters_t generalParameters_t, *PgeneralParameters_t;
struct generalParameters_t {
    u8 transformation_char[4];
    u8 transformation_cost[4];
    undefined1 R3Command; /* Created by retype action */
    undefined1 transformation_bonusses; /* Created by retype action */
    u8 fusion_cost[3];
    u8 fusion_type[3];
    u8 fusion_char[3];
    u8 fusion_cutscene_partner[3];
    u8 fusion_team_partner[3][6];
    undefined field9_0x28;
    u8 z_search_type[6];
    undefined field11_0x2f;
    struct flags_1 flaggroup_1;
    struct flags_2 flaggroup_2;
    struct flags_3 flaggroup_3;
    undefined field15_0x3c;
    undefined field16_0x3d;
    u8 great_ape_mode;
    u8 aura_color;
    float collision[3];
    u8 amount_ki_blasts;
    u8 rushing_technique[4];
    u8 counter_move[3];
    u8 step_in_move[3];
    u8 amount_charged_ki_blasts;
    undefined4 field25_0x58;
    undefined4 field26_0x5c;
    undefined4 field27_0x60;
    undefined4 field28_0x64;
    undefined4 field29_0x68;
    int amount_blast_stocks;
    int ki_charge_speed;
    int ki_charge_speed_water;
    int base_ki_gain;
    int counter_ki_cost;
    undefined4 field35_0x80;
    undefined4 field36_0x84;
    undefined4 field37_0x88;
    int blast_gauge_gain;
    float blue_ki_charge_speed;
    float max_power_duration;
    float gravity;
    float field42_0x9c;
    undefined8 field43_0xa0;
    u8 amount_dragon_smashes;
    u8 amount_punishing_attacks;
    undefined2 field46_0xaa;
    float melee_charge_speed;
    float field48_0xb0;
    float damage_multiplier;
    float switch_gauge_speed;
    u8 field51_0xbc[3];
    u8 field52_0xbf[3];
    u8 field53_0xc2[3];
    u8 field54_0xc5[3];
    u8 field55_0xc8[3];
    undefined field56_0xcb;
    undefined field57_0xcc;
    undefined field58_0xcd;
    undefined field59_0xce;
    u8 field60_0xcf[3];
};

