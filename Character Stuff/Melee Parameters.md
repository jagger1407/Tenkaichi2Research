# Melee Parameters

This is section 18 of a character costume pak, or `018_character_melee_param.dat` if the pak was extracted via Sparking Studio or SpikeSoft.

## Structure
The section contains the parameters for every melee attack. Here is a list of each melee attack:

| ID | Attack |
|-|-|
| 0 | Strike 1 (primary rush set) |
| 1 | Strike 2 (primary rush set) |
| 2 | Strike 3 (primary rush set) |
| 3 | Strike 4 (primary rush set) |
| 4 | Strike 5 (primary rush set) |
| 5 | Strike 1 (secondary rush set) |
| 6 | Strike 2 (secondary rush set) |
| 7 | Strike 3 (secondary rush set) |
| 8 | Strike 4 (secondary rush set) |
| 9 | Strike 5 (secondary rush set) |
| 10 | Heavy Finish (low charge) |
| 11 | Heavy Finish (medium charge) |
| 12 | Heavy Finish (full charge) |
| 13 | Heavy Crush Strike 1 |
| 14 | Heavy Crush Strike 2 |
| 15 | Heavy Crush Strike 3 |
| 16 | Flying Kick (first part) |
| 17 | Smash Left (low charge) |
| 18 | Smash Right (low charge) |
| 19 | Smash Up (low charge) |
| 20 | Smash Down (low charge) |
| 21 | Smash Neutral (low charge) |
| 22 | Smash Left (medium charge) |
| 23 | Smash Right (medium charge) |
| 24 | Smash Up (medium charge) |
| 25 | Smash Down (medium charge) |
| 26 | Smash Neutral (medium charge) |
| 27 | Smash Left (full charge) |
| 28 | Smash Right (full charge) |
| 29 | Smash Up (full charge) |
| 30 | Smash Down (full charge) |
| 31 | Smash Neutral (full charge) |
| 32 | Dash Smash (low charge)
| 33 | Dash Smash (medium charge) |
| 34 | Dash Smash (full charge) |
| 35 | Jump Smash (low charge) |
| 36 | Jump Smash (medium charge) |
| 37 | Jump Smash (full charge) |
| 38 | Kiai Cannon (low charge) |
| 39 | Kiai Cannon (medium charge) |
| 40 | Kiai Cannon (full charge) |
| 41 | Dragon Dash Smash Left (low charge) |
| 42 | Dragon Dash Smash Right (low charge) |
| 43 | Dragon Dash Smash Up (low charge) |
| 44 | Dragon Dash Smash Down (low charge) |
| 45 | Dragon Dash Smash Neutral (low charge) |
| 46 | Dragon Dash Smash Left (full charge) |
| 47 | Dragon Dash Smash Right (full charge) |
| 48 | Dragon Dash Smash Up (full charge) |
| 49 | Dragon Dash Smash Down (full charge) |
| 50 | Dragon Dash Smash Neutral (full charge) |
| 51 | Dragon Homing Left |
| 52 | Dragon Homing Right |
| 53 | Dragon Homing Up |
| 54 | Dragon Homing Down |
| 55 | Dragon Homing Neutral |
| 56 | Vanishing Attack Left |
| 57 | Vanishing Attack Right |
| 58 | Vanishing Attack Up |
| 59 | Vanishing Attack Down |
| 60 | Vanishing Attack Neutral |
| 61 | Lift Strike (low charge) |
| 62 | Lift Strike (medium charge) |
| 63 | Lift Strike (full charge) |
| 64 | Ground Slash (low charge) |
| 65 | Ground Slash (medium charge) |
| 66 | Ground Slash (full charge) |
| 67 | Air Combo Strike 1 |
| 68 | Air Combo Strike 2 |
| 69 | Air Combo Strike 3 |
| 70 | Air Combo Strike 4 |
| 71 | Air Combo Strike 5 |
| 72 | Air Combo Heavy |
| 73 | Lift Strike Heavy |
| 74 | Throw |
| 75 | Unknown |
| 76 | Giant Throw |
| 77 | Smash Counter |
| 78 | Kiai Cannon Smash |
| 79 | Unknown |
| 80 | Rolling Hammer Left (low charge) |
| 81 | Rolling Hammer Right (low charge) |
| 82 | Rolling Hammer Left (medium charge) |
| 83 | Rolling Hammer Right (medium charge) |
| 84 | Rolling Hammer Left (full charge) |
| 85 | Rolling Hammer Right (full charge) |
| 86 | Unknown |
| 87 | Unknown |
| 88 | Unknown |
| 89 | Unknown |
| 90 | Unknown |
| 91 | Sonic Impact Strike 1 |
| 92 | Sonic Impact Strike 2 |
| 93 | Unknown |
| 94 | Dragon Tornado Strike 1 |
| 95 | Dragon Tornado Strike 2 |
| 96 | Dragon Tornado Strike 3 |
| 97 | Unknown |
| 98 | Unknown |
| 99 | Unknown |
| 100 | Unknown |
| 101 | Unknown |
| 102 | Unknown |
| 103 | Dragon Heavy |
| 104 | MAX Power Combo Hit |
| 105 | Flying Kick (last part) |

**Some Notes:** 
- Flying Kick damage is split between the amount of hits you do. The last hit, however, has its own melee ID.
- Dragon Tornado Strike 2 does less damage than specified in this file for some reason.

### Melee Attack Structure

| Offset | Data Type | Description | Size |
|-|-|-|-|
| 0x00 | `uint32_t` | Attack Flags.<br>See [Attack Flags](#attack-flags). | 4 Bytes |
| 0x04 | `int32_t` | Attack damage. | 4 Bytes |
| 0x08 | `int32_t` | Attack damage against a guarding opponent. | 4 Bytes |
| 0x0C | `int32_t` | The amount of ki subtracted from the opponent if this attack<br>leads to a guard break. | 4 Bytes |
| 0x10 | `int32_t` | The amount of ki gained if this attack hits. | 4 Bytes |
| 0x14 | `int32_t` | The amount of damage this attack deals if it initiates a throw.<br>Note: only used by the throw (ID 74). | 4 Bytes |
| 0x18 | `int32_t` | The amount of ki subtracted from the opponent if it initiates a throw.<br>Note: only used by the throw (ID 74). | 4 Bytes |
| 0x1C | `int32_t` | Unknown.<br>Getter location: `0x0023edc8` (NTSC) | 4 Bytes |
| 0x20 | `hitstun` | The type of hitstun this attack will put the opponent into.<br>See [Hitstun](#hitstun). | 1 Byte |
| 0x21 | `uint8_t` | Unknown.<br>Getter location: `0x0023ee48` (NTSC) | 1 Byte |
| 0x22 | `uint8_t` | Unknown.<br>Getter location: `0x0023eeb8` (NTSC) | 1 Byte |
| 0x23 | `uint8_t` | Unknown.<br>Getter location: `0x0023eef0` (NTSC) | 1 Byte |
| 0x24 | `uint8_t` | Unknown.<br>Getter location: `0x0023ee80` (NTSC) | 1 Byte |
| 0x25 | `uint8_t` | Unknown.<br>Getter location: `0x0023ef28` (NTSC) | 1 Byte |
| 0x26 | `uint8_t` | Unknown.<br>Getter location: `0x0023ef48` (NTSC) | 1 Byte |
| 0x27 | `uint8_t` | Unknown.<br>Getter location: `0x0023ef80` (NTSC) | 1 Byte |
| 0x28 | `vfx` | Visual Effect.<br>See [Visual Effect](#visual-effect). | 1 Byte |
| 0x29 | `sfx` | Sound Effect.<br>See [Sound Effect](#sound-effect). | 1 Byte |
| 0x2A | `uint8_t` | Unknown.<br>Getter location: `0x0023eac0` (NTSC) | 1 Byte |
| 0x2B | `uint8_t` | Unused. | 1 Byte |
| 0x2C | `float` | The amount of knockback the opponent receives. | 4 Bytes |
| 0x30 | `float` | Unknown.<br>Getter location: `0x0023f010` (NTSC) | 4 Bytes |
| 0x34 | `float` | How far the character travels forward while attacking. | 4 Bytes |
| 0x38 | `float` | Might be unused.<br>Getter location: `0x0023f080` (NTSC) | 4 Bytes |
| 0x3C | `float` | Unknown.<br>Getter location: `0x0023f140` (NTSC) | 4 Bytes |
| 0x40 | `float` | Unknown.<br>Getter location: `0x0023f178` (NTSC) | 4 Bytes |
| 0x44 | `float` | Unknown.<br>Getter location: `0x0023f1b8` (NTSC) | 4 Bytes |
| 0x48 | `float` | Unknown.<br>Getter location: `0x0023f1f8`(NTSC) | 4 Bytes
| 0x4C | `float` | Unknown.<br>Getter location: `0x0023f218` (NTSC) | 4 Bytes |
| 0x50 | `float` | Unknown.<br>Getter location: `0x0023f238` (NTSC) | 4 Bytes |
| 0x54 | `float` | Unknown.<br>Getter location: `0x0023f258` (NTSC) | 4 Bytes |
| 0x58 | `float` | Unknown.<br>Getter location: `0x0023f278` (NTSC) | 4 Bytes |
| 0x5C | `uint8_t` | Unknown.<br>Getter location: `0x0023f390` (NTSC) | 1 Byte |
| 0x5D | `uint8_t` | Unknown.<br>Getter location: `0x0023f3b0` (NTSC) | 1 Byte |
| 0x5E | `uint8_t` | Unknown.<br>Getter location: `0x0023f350` (NTSC) | 1 Byte |
| 0x5F | `uint8_t` | Unknown.<br>Getter location: `0x0023f370` (NTSC) | 1 Byte |
| 0x60 | `defense_effect` | The effect this attack has upon hitting the opponent's guard.<br>See [Defense Effect](#defense-effect). | 1 Byte |
| 0x61 | `defense_effect` | The effect this attack has upon hitting the opponent's counter stance.<br>See [Defense Effect](#defense-effect). | 1 Byte |
| 0x62 | `guard_type` | The type of hit the opponent's guard defends.<br>See [Guard Type](#guard-type). | 1 Byte |
| 0x63 | `uint8_t` | Unused. | 1 Byte |  

**Total size: 100 Bytes**

### Attack Flags

| Offset | Description | Size |
|-|-|-|
| Bit 0 | Decides whether the attack can be teleported. | 1 Bit |
| Bit 1 | Unknown. | 1 Bit |
| Bit 2 | Unknown. | 1 Bit |
| Bit 3 | Unknown. | 1 Bit |
| Bit 4 | Unknown. | 1 Bit |
| Bit 5 | Unknown. | 1 Bit |
| Bit 6 | Unknown. | 1 Bit |
| Bit 7 | Unknown. | 1 Bit |
| Bit 8 | Unknown. | 1 Bit |
| Bit 9 | Decides whether this attack transitions into<br>the secondary rush set. | 1 Bit |
| Bit 10 | Decides whether this attack makes the opponent lose Lock-On. | 1 Bit |
| Bit 11 | Unknown. | 1 Bit |
| Bit 12 | Unknown. | 1 Bit |
| Bit 13 | Unknown. | 1 Bit |
| Bit 14 | Unknown. | 1 Bit |
| Bit 15 | Unknown. | 1 Bit |
| Bit 16 | Unknown. | 1 Bit |
| Bit 17 |Unknown. | 1 Bit |
| Bit 18 | Unknown. | 1 Bit |
| Bit 19 | Unknown. | 1 Bit |
| Bit 20 | Unknown. | 1 Bit |
| Bit 21 | Unknown. | 1 Bit |
| Bit 22 | Unknown. | 1 Bit |
| Bit 23 | Unknown. | 1 Bit |
| Bit 24 | Unknown. | 1 Bit |
| Bit 25 | Unknown. | 1 Bit |
| Bit 26 | Unknown. | 1 Bit |
| Bit 27 | Unknown. | 1 Bit |
| Bit 28 | Unknown. | 1 Bit |
| Bit 29 | Unknown. | 1 Bit |
| Bit 30 | Unknown. | 1 Bit |
| Bit 31 | Unknown. | 1 Bit |

**Total size: 4 Bytes**

### Hitstun

| ID | Hitstun |
|-|-|
| 0 | No Hitstun |
| 1 | No Hit |
| 2 | No Hitstun |
| 3 | Primary Rush Set Hitstun |
| 4 | Secondary Rush Set Hitstun |
| 5 | Smash Right Hitstun |
| 6 | Smash Left Hitstun |
| 7 | Smash Up/Neutral Hitstun |
| 8 | Smash Down Hitstun |
| 9 | Stagger Hitstun (Kiai Cannon)
| 10 | Lift Strike Hitstun |
| 11 | Ground Slash Hitstun |
| 12 | Heavy Finish Hitstun |
| 13 | Instant Knockdown |
| 14 | Knockdown with knockback |
| 15 | Combo Ender (Knockback + Flipping)
| 16 | Fully Charged Smash Hitstun |
| 17 | Medium Charged Smash Hitstun |
| 18 | Throw Hitstun (flies in facing direction)
| 19 | No Hitstun |
| 20 | Giant Throw Hitstun (flies in facing direction) |
| 21 | Paralysis (Short) |
| 22 | Paralysis (Medium) |
| 23 | Paralysis (Long) |
| 24 | Knockdown Paralysis (Short) |
| 25 | Knockdown Paralysis (Medium) |
| 26 | Knockdown Paralysis (Long) |
| 27 | Blast 2 Hitstun? |
| 28 | Blast 1 Hitstun? |
| 29 | Instant Knockdown |
| 30 | Instant Knockdown + small bounce
| 31 | Instant Knockdown + big bounce |
| 32 | Removes HUD, then crashes |
| 33 | Rolling Hammer Right Hitstun |
| 34 | Rolling Hammer Left Hitstun |
| 35 | Throw, ends in knockdown |
| 36 | Death Beam/Dodon Ray Knockdown |
| 37 | Dragon Heavy Hitstun |
| 38 | Sonic Impact Hitstun |
| 39 | Instant Knockdown with electric sounds? |

Note: Throws 18 and 20 have special properties. If the opponent is hit with them, they will fly in the direction that the attacker is looking at. They will do so indefinitely until the hitstun is overridden by another one.

**Total size: 1 Byte**

### Visual Effect

| ID | Effect |
|-|-|
| 0 | No Effect |
| 1 | Regular Strike Effect |
| 2 | Bigger Strike Effect |
| 3 | Heavy Finish Effect |
| 4 | Unused? |
| 5 | Unused? |
| 6 | Light Smash Effect |
| 7 | Medium Smash Effect |
| 8 | Full Smash Effect |
| 9 | Unused? |
| 10 | Unused? |
| 11 | Kiai Cannon Effect |
| 12 | Unused? |
| 13 | Lift Strike Effect |
| 14 | Unused? |
| 15 | Ground Slash Effect |
| 16 | Unknown. |

**Total size: 1 Byte**

Note: Effects marked as "Unused?" seem to have no effect in-game.

### Sound Effect

| ID | Sound |
|-|-|
| 0 | No Sound |
| 1 | Regular Strike Sound |
| 2 | Heavy Finish Sound |
| 3 | Throw Sound |
| 4 | Unknown |
| 5 | Smash sound |
| 6 | Unknown (Great Ape Related?) |
| 7 | Unknown (Great Ape Related?) |
| 8 | Unknown (Great Ape Related?) |
| 9 | Smash Away Sound |
| 10 | Ground Slash Sound |
| 11 | Lift Strike Sound |
| 12 | Rolling Hammer Sound |

**Total size: 1 Byte**

### Defense Effect

| ID | Effect |
|-|-|
| 0 | Regular Guard Effect |
| 1 | Guard Break |
| 2 | Combo Breaker effect (Stops Attack) |
| 3 | Ignore Guard |
| 4 | Counter Effect (Stops Attack) |

**Total size: 1 Byte**

**Notes:**
- Any value higher than this will make the attack miss.
- The Guard Break effect will not disturb the counter stance.

### Guard Type
A non-zero type will override the defense effect.

| ID | Type |
|-|-|
| 0 | Regular Guard Effect |
| 1 | Great Ape Effect (long recovery) |
| 2 | Same as 1? |

Note: Any value higher than this will default to type 0.

## See also

- [Neo Studio](https://github.com/jagger1407/NeoStudio)
    - My tool to edit Sparking! Neo / Budokai Tenkaichi 2 character paks.
