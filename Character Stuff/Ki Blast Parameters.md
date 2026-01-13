# Melee Parameters

This is section 19 of a character costume pak, or `019_character_ki_blast_param.dat` if the pak was extracted via Sparking Studio or SpikeSoft.

## Structure
The section contains the parameters for every melee attack. Here is a list of each melee attack:

| ID | Ki Blast |
|-|-|
| 0 | Regular Ki Blast |
| 1 | Charged Ki Blast (Low Charge) |
| 2 | Charged Ki Blast (Medium Charge) |
| 3 | Charged Ki Blast (Full Charge) |
| 4 | Dashing Ki Blast |
| 5 | Charged Dashing Ki Blast (Low Charge) |
| 6 | Charged Dashing Ki Blast (Medium Charge) |
| 7 | Charged Dashing Ki Blast (Full Charge) |
| 8 | Jumping Ki Blast |
| 9 | Charged Jumping Ki Blast (Low Charge) |
| 10 | Charged Jumping Ki Blast (Medium Charge) |
| 11 | Charged Jumping Ki Blast (Full Charge) |
| 12 | Unknown |
| 13 | Unknown |

### Melee Attack Structure

| Offset | Data Type | Description | Size |
|-|-|-|-|
| 0x00 | `uint32_t` | Ki Blast Flags.<br>See [Ki Blast Flags](#ki-blast-flags). | 4 Bytes |
| 0x04 | `int32_t` | Attack damage. | 4 Bytes |
| 0x08 | `int32_t` | Attack damage against a guarding opponent. | 4 Bytes |
| 0x0C | `int32_t` | The amount of ki subtracted from firing this blast. | 4 Bytes |
| 0x10 | `float` | The speed of the ki blast. | 4 Bytes |
| 0x14 | `float` | How much the ki blast gravitates towards the opponent. | 4 Bytes |
| 0x18 | `float` | The amount of time (in seconds) before the ki blast disappears. | 4 Bytes |
| 0x1C | `float` | The amount of knockback the opponent receives. | 4 Bytes |
| 0x20 | `float` | The amount of knockback the opponent receives<br>when they're guarding. | 4 Bytes
| 0x24 | `hitstun` | The type of hitstun this ki blast will put the opponent into.<br>See [Hitstun](#hitstun). | 1 Byte |
| 0x25 | `uint8_t` | Unknown.<br>Getter location: `0x002407a0` (NTSC) | 1 Byte |
| 0x26 | `uint8_t` | Unknown.<br>Getter location: `0x00240848` (NTSC) | 1 Byte |
| 0x27 | `uint8_t` | Unknown.<br>Getter location: `0x002408f0` (NTSC) | 1 Byte |
| 0x28 | `float` | The size of the ki blast. | 4 Bytes |
| 0x2C | `float` | This might be related to the trail length of the ki blast. | 4 Bytes |
| 0x30 | `kb_type` | The type of ki blast.<br>See [Ki Blast Type](#ki-blast-type). | 1 Byte |
| 0x31 | `kb_color` | The color of the ki blast.<br>See [Ki Blast Color](#ki-blast-color). | 1 Byte |
| 0x32 | `int8_t` | The amount of ki blasts thrown at once.<br>Note: Has a maximum of 20. | 1 Byte |
| 0x33 | `kb_trajectory` | The trajectory the ki blast has.<br>See [Ki Blast Trajectory](#ki-blast-trajectory). | 1 Byte |
| 0x34 | `uint34_t` | Unused. | 4 Bytes |



**Size: 56 Bytes**

### Ki Blast Flags

| Offset | Description | Size |
|-|-|-|
| Bit 0 | Unknown. | 1 Bit |
| Bit 1 | Unknown. | 1 Bit |
| Bit 2 | Unknown. | 1 Bit |
| Bit 3 | Unknown. | 1 Bit |
| Bit 4 | Unknown. | 1 Bit |
| Bit 5 | Unknown. | 1 Bit |
| Bit 6 | Unknown. | 1 Bit |
| Bit 7 | Unknown. | 1 Bit |
| Bit 8 | Unknown. | 1 Bit |
| Bit 9 | Unknown. | 1 Bit |
| Bit 10 | Unknown. | 1 Bit |
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

### Ki Blast Type

| ID | Type |
|-|-|
| 0 | Regular Ki Blast |
| 1 | Ki Blast with Circles |
| 2 | Ki Blast with Fire Effect |
| 3 | Ki Blast with Spirals |
| 4 | Ki Blast with Lightning |
| 5 | Ki Blast with Smoke Effect |
| 6 | Ki Blast with Lines? |
| 7 | Charged Ki Blast |
| 8 | Charged Ki Blast with Circles |
| 9 | Charged Ki Blast with Fire Effect |
| 10 | Charged Ki Blast with Spirals |
| 11 | Charged Ki Blast with Lightning |
| 12 | Charged Ki Blast with Smoke Effect |
| 13 | Charged Ki Blast with Lines? |
| 14 | Rock Throw |
| 15 | Grenade Throw |
| 16 | Nothing (Unused?) | 
| 17 | Sword Slice |

**Total size: 1 Byte**

### Ki Blast Color

| ID | Color |
|-|-|
| 0 | Blue |
| 1 | Purple |
| 2 | Yellow |
| 3 | Red |
| 4 | Green |
| 5 | Light Blue |
| 6 | Pink |
| 7 | Unfinished? |
| 8 | Unfinished? |

**Total size: 1 Byte**

### Ki Blast Trajectory

| ID | Trajectory |
|-|-|
| 0 | Spreads randomly |
| 1 | Straight |
| 2 | Curves upwards |
| 3 | Curves Left and Right |
| 4 | Curves Left |
| 5 | Curves Right | 
| 6 | Curves Right and Left |

Note: Types 0, 3 and 6 affect volleys of ki blasts too.
For example, type 3 alternates between going left and right, whereas type 6 alternates between right and left.  

**Total size: 1 Byte**

## See also

- [Neo Studio](https://github.com/jagger1407/NeoStudio)
    - My tool to edit Sparking! Neo / Budokai Tenkaichi 2 character paks.