# General Parameters

This is section 17 of a character costume pak, or `017_character_param.dat` if the pak was extracted via Sparking Studio or SpikeSoft.

## Structure
The structure of this section is as follows:

| Offset | Data Type | Description | Size |
|-|-|-|-|
| 0x00| `char8_t[4]` | The Character ID for each transformation slot. | 4 Bytes |
| 0x04 | `uint8_t[4]` | The Blast Stock cost for each transformation. | 4 Bytes |
| 0x08 | `uint8_t` | Unknown. | 1 Byte |
| 0x09 | `transform_bonus` | Flags for bonusses when transforming into<br>this character.<br>See [Transformation Bonus](#transformation-bonus).| 1 Byte |
| 0x0A | `uint8_t[3]` | The Blast Stock cost for each fusion. | 3 Bytes |
| 0x0D | `uint8_t[3]` | The type of fusion for this slot.<br>See [Fusion Type](#fusion-type). | 3 Bytes |
| 0x10 | `char8_t[3]` | The Character ID for each fusion slot. | 3 Bytes |
| 0x13 | `char8_t[3]` | The Character ID for the character that will<br>be shown in the fusion cutscene. | 3 Bytes |
| 0x16 | `char8_t[6][3]` | The Array of character IDs for removing the<br>fusion partner from the team.<br>See [Fusion Mates](#fusion-mates). | 18 Bytes |
| 0x28 | `fusion_bonus` | Flags for bonusses when fusing into this character.<br>See [Fusion Bonus](#fusion-bonus). | 1 Byte |
| 0x29 | `z_search_type[6]` | The Z-Search type for each costume.<br>See [Z-Search Type](#z-search-type). | 6 Bytes |
| 0x2F | `uint8_t` | Unknown. (Padding?) | 1 Byte |
| 0x30 | `flaggroup1` | Flaggroup 1.<br>See [Flaggroup 1](#flaggroup-1). | 4 Bytes |
| 0x34 | `flaggroup2` | Flaggroup 2.<br>See [Flaggroup 2](#flaggroup-2). | 4 Bytes |
| 0x38 | `flaggroup3` | Flaggroup 3.<br>See [Flaggroup 3](#flaggroup-3). | 4 Bytes |
| 0x3C | `uint8_t[2]` | Unknown. | 2 Bytes |
| 0x3E | `uint8_t` | If this value is 4, it activates Great Ape Mode.<br>See [Great Ape Mode](#great-ape-mode). | 1 Byte |
| 0x3F | `aura_color` | The color of the aura that surrounds the character<br>during battle.<br>See [Aura Color](#aura-color). | 1 Byte | 
| 0x40 | `float[3]` | The collision vector (X, Y, Z) for this character. | 12 Bytes |
| 0x4C | `int8_t` | The amount of Ki Blasts this character can fire<br>before entering a short cooldown period. | 1 Byte |
| 0x4D | `rush_technique[4]` | The Rushing Technique for each slot.<br>See [Rushing Technique](#rushing-technique). | 4 Bytes |
| 0x51 | `counter_technique[3]` | The counter technique for each slot.<br>See [Counter Technique](#counter-technique). | 3 Bytes |
| 0x54 | `step_in_technique` | The step-in technique for this character.<br>See [Step-In Technique](#step-in-technique). | 1 Byte |
| 0x55 | `uint8_t` | The type of Step-In Lift Strike.<br>See [Step-In Directional Technique](#step-in-directional-technique). |  Byte |
| 0x56 | `uint8_t` | The type of Step-In Ground Slash.<br>See [Step-In Directional Technique](#step-in-directional-technique). | 1 Byte |
| 0x57 | `int8_t` | How many charged ki blasts can be on-stage at once.<br>Note: Charged ki blasts also decrement the counter at 0x4C. | 1 Byte |
| 0x58 | `int32_t` | Unknown.<br>Getter location: `0x0023F960` (NTSC) | 4 Bytes |
| 0x5C | `int32_t` | Unknown.<br>Getter location: `0x0023F970` (NTSC) | 4 Bytes |
| 0x60 | `int32_t` | Unknown.<br>Getter location: `0x0023F980` (NTSC) | 4 Bytes |
| 0x64 | `int32_t` | Unknown.<br>Getter location: `0x0023F990` (NTSC) | 4 Bytes |
| 0x68 | `int32_t` | Unknown.<br>Getter location: `0x0023F9A0` (NTSC) | 4 Bytes |
| 0x6C | `int32_t` | The maximum amount of blast stocks the character can have. | 4 Bytes |
| 0x70 | `int32_t` | The amount of Ki the character gains every update while<br>charging. | 4 Bytes |
| 0x74 | `int32_t` | The amount of Ki the character gains every update while<br>charging underwater. | 4 Bytes |
| 0x78 | `int32_t` | The amount of Ki the character gains every update in idle<br>if their current Ki is below the base amount. | 4 Bytes |
| 0x7C | `int32_t` | The amount of Ki the character loses every update while<br>inside a counter stance. | 4 Bytes |
| 0x80 | `int32_t` | Unknown.<br>Getter location: `0x0023FB58` (NTSC) | 4 Bytes |
| 0x84 | `int32_t` | The amount of Ki the character loses every update while<br>inside the Power Guard. | 4 Bytes |
| 0x88 | `int32_t` | Unknown.<br>Getter location: `0x0023FAB8` (NTSC) | 4 Bytes |
| 0x8C | `int32_t` | The amount of blast gauge the character gains every update<br>if their current gauge is below their maximum. | 4 Bytes |
| 0x90 | `float` | The amount of time (in seconds) it takes for the character to<br>fully charge blue ki.<br>Note: The game crashes when this goes under 0.03. | 4 Bytes |
| 0x94 | `float` | The amount of time (in seconds) it takes for the MAX Power<br>mode to run out.<br>Note: The game crashes when this goes under 0.03. | 4 Bytes
| 0x98 | `float` | Multiplier for the jumping height.<br>Note: Anything above 1 makes the character unable to gain height. | 4 Bytes |
| 0x9C | `float` | Unknown.<br>Getter location: `0x0023FC68` (NTSC) | 4 Bytes |
| 0xA0 | `float` | Seems to be unused. | 4 Bytes |
| 0xA4 | `float` | Seems to be unused. | 4 Bytes |
| 0xA8 | `int8_t` | The amount of Dragon Smashes this character can do<br>after a fully charged smash in MAX Power. | 1 Byte |
| 0xA9 | `int8_t` | The amount of Vanishing Attacks this character can do<br>after a fully charged smash in MAX Power. | 1 Byte |
| 0xAA | `int8_t` | Unknown.<br>Getter location: `0x0023FC98` (NTSC) | 1 Byte |
| 0xAB | `int8_t` | Seems to be unused. | 1 Byte |
| 0xAC | `float` | Multiplier for the speed at which chargeable melee attacks<br>are charged. | 4 Bytes |
| 0xB0 | `float` | Multiplier for the increase that melee momentum has on<br>melee charge speed. | 4 Bytes |
| 0xB4 | `float` | Multiplier for damage this character **receives**. | 4 Bytes |
| 0xB8 | `float` | Delay for the switch gauge increase.<br>The lower the value, the faster the speed of the switch gauge. | 4 Bytes |
| 0xBC | `uint8_t[3]` | Unknown.<br>Getter location: `0x0023FCE8` (NTSC) | 3 Bytes |
| 0xBF | `uint8_t[3]` | Unknown.<br>Getter location: `0x0023FD38` (NTSC) | 3 Bytes |
| 0xC2 | `uint8_t[3]` | Unknown.<br>Getter location: `0x0023FD58` (NTSC) | 3 Bytes |
| 0xC5 | `uint8_t[3]` | Unknown.<br>Getter location: `0x0023FD78` (NTSC) | 3 Bytes |
| 0xC8 | `uint8_t[3]` | Unknown.<br>Getter location: `0x0023FD98` (NTSC) | 3 Bytes |
| 0xCB | `uint8_t` | Seems to be unused. | 1 Byte |

**Total size: 204 Bytes**

While the size of the data is 204 bytes, the section within the Pak is 384 bytes.

### Transformation Bonus
| Offset | Description | Size |
|-|-|-|
| 0b00000001 | Recalculates the character's health. | 1 Bit | 
| 0b00000010 | Increases the character's health by 10.000. | 1 Bit |
| 0b00000100 | Increases the character's health by 20.000. | 1 Bit |
| 0b00001000 | Gives the character maximum Ki. | 1 Bit |
| 0b00010000 | Removes the "Battledamaged" status.<br>This affects the model + texture. | 1 Bit |
| 0b00100000 | Unused bit. | 1 Bit |
| 0b01000000 | Unused bit. | 1 Bit |
| 0b10000000 | Unused bit. | 1 Bit |

**Total size: 1 Byte**

### Fusion Type

| ID | Type |
|-|-|
| 1 | Fusion Dance |
| 2 | Potara Fusion |

**Total size: 1 Byte**

### Fusion Mates
The 3 Fusion Mate arrays consist of 6 elements, one array for each fusion slot.
When fusing, the game loops through the array and checks whether any of the IDs are currently in your team using this code for every teammate:
```c
do {
    // ...
    do {
        mate = getTeammate(player,i);
        // This function gets the element from the array
        fusionPartnerID = getFusionPartnerTeamID(player,fusion,fusionPartner);
        if (mate->characterID == fusionPartnerID) {
            // ...
            return true;
        }
    fusionPartner++;
    } while (incrementedPartnerID < 6);
    i = i + 1;
} while (i < player->amountTeammates);
```
If this returns `true` and a teammate was found, that teammate will then be removed from the team.

### Fusion Bonus
| Mask | Description | Size |
|-|-|-|
| 0b00000001 | Unused Bit. | 1 Bit | 
| 0b00000010 | Increases the character's health by 10.000. | 1 Bit |
| 0b00000100 | Increases the character's health by 20.000. | 1 Bit |
| 0b00001000 | Gives the character maximum Ki. | 1 Bit |
| 0b00010000 | Removes the "Battledamaged" status.<br>This affects the model + texture. | 1 Bit |
| 0b00100000 | Immediately puts the character into MAX Power. | 1 Bit |
| 0b01000000 | Unused bit. | 1 Bit |
| 0b10000000 | Unused bit. | 1 Bit |

**Total size: 1 Byte**

### Z-Search Type
| ID | Type |
|-|-|
| 0 | Ki Search (Opponent flashes on radar) |
| 1 | Fast Ki Search (Opponent Flashes on radar) |
| 2 | Scouter Search (Opponent Flashes on radar) |
| 3 | Fast Scouter Search (Opponent Flashes on radar) |
| 4 | Very Fast Scouter Search (Opponent Flashes on radar) |
| 5 | Ki Search (No radar flash) |
| 6 | Robot Search? (same as Type 1, used by Androids/Meta-Cooler) |
| 7 | Eye Search (Slow, No radar flash) |
| 8 | Villain Search? (Only used by some villains) |
| 9 | Mecha Frieza Search? (Only used by Mecha Frieza) |

**Total size: 1 Byte**

### Flaggroup 1
Seems to store general character related flags.

| Offset | Description | Size |
|-|-|-|
| Bit 0 | Unknown. | 1 Bit |
| Bit 1 | Decides if the character can absorb energy. | 1 Bit |
| Bit 2 | Unknown. | 1 Bit |
| Bit 3 | Unknown. | 1 Bit |
| Bit 4 | Unknown. | 1 Bit |
| Bit 5 | Unknown. | 1 Bit |
| Bit 6 | Unknown. | 1 Bit |
| Bit 7 | Unknown. | 1 Bit |
| Bit 8 | Unknown. | 1 Bit |
| Bit 9 | Unknown. | 1 Bit |
| Bit 10 | Unknown. | 1 Bit |
| Bit 11 | Decides if the character can break objects by touching them. | 1 Bit |
| Bit 12 | Decides if the character can fly.<br>0 = Flying<br>1 = Non-Flying | 1 Bit |
| Bit 13 | Unknown. | 1 Bit |
| Bit 14 | Unknown. | 1 Bit |
| Bit 15 | Decides if the character makes a metallic nouse when landing.<br>e.g. Meta-Cooler uses this. | 1 Bit |
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

### Flaggroup 2
Seems to store flags related to character abilities.

| Offset | Description | Size |
|-|-|-|
| Bit 0 | Decides if the character can use Dragon Dash. | 1 Bit | 
| Bit 1 | Decides if the character can use Lift Strike. | 1 Bit | 
| Bit 2 | Decides if the character can use Ground Slash. | 1 Bit | 
| Bit 3 | Decides if the character can Sway. | 1 Bit | 
| Bit 4 | Unknown. | 1 Bit | 
| Bit 5 | Decides if the character can Rush-In (Step-In after 5 hits). | 1 Bit | 
| Bit 6 | Unknown. | 1 Bit | 
| Bit 7 | Decides if the character can use Dragon Smash. | 1 Bit | 
| Bit 8 | Decides if the character can deflect Ki Blasts | 1 Bit | 
| Bit 9 | Decides if the character can Rush Teleport. | 1 Bit | 
| Bit 10 | Unknown. | 1 Bit | 
| Bit 11 | Decides if the character can use Dashing & Jumping Ki Blasts. | 1 Bit | 
| Bit 12 | Unknown. | 1 Bit | 
| Bit 13 | Decides if the character can use Dragon Tornado | 1 Bit | 
| Bit 14 | Decides if the character can use Heavy Crush. | 1 Bit | 
| Bit 15 | Decides if the character can use Giant Throw. | 1 Bit | 
| Bit 16 | Decides if the character can use Sonic Impact. | 1 Bit | 
| Bit 17 | Decides if the character can use Rolling Hammer. | 1 Bit | 
| Bit 18 | Decides if the character can use Kiai Cannon Smash. | 1 Bit | 
| Bit 19 | Decides if the character can use Illusion Slash. | 1 Bit | 
| Bit 20 | Unknown. | 1 Bit | 
| Bit 21 | Unknown. | 1 Bit | 
| Bit 22 | Unknown. | 1 Bit | 
| Bit 23 | Unknown. | 1 Bit | 
| Bit 24 | Unknown. | 1 Bit | 
| Bit 25 | Unknown. | 1 Bit | 
| Bit 26 | Decides if the character can use Hyper Speed Movement. | 1 Bit | 
| Bit 27 | Unknown. | 1 Bit | 
| Bit 28 | Decides if the character can use Dragon Heavy. | 1 Bit | 
| Bit 29 | Unknown. | 1 Bit | 
| Bit 30 | Unknown. | 1 Bit | 
| Bit 31 | Unknown. | 1 Bit |

**Total size: 4 Bytes**

### Flaggroup 3
Seems to store flags related to character-specific quirks.

| Offset | Description | Size |
|-|-|-|
| Bit 0 | Slightly increases aura? | 1 Bit | 
| Bit 1 | Makes aura yellow. (Super Saiyan?) | 1 Bit | 
| Bit 2 | Makes aura yellow and adds sparks. (Super Saiyan 2?) | 1 Bit | 
| Bit 3 | Makes aura yellow and adds sparks? (Super Saiyan 3?) | 1 Bit | 
| Bit 4 | Makes aura yellow? | 1 Bit | 
| Bit 5 | Slightly decreases aura? | 1 Bit | 
| Bit 6 | Same as bit 1? | 1 Bit | 
| Bit 7 | Makes you unable to charge yellow Ki (Android 17/18). | 1 Bit | 
| Bit 8 | Gives the character Ki charge a whistling sound (Majin Buu). | 1 Bit | 
| Bit 9 | Unknown. | 1 Bit | 
| Bit 10 | Unknown. | 1 Bit | 
| Bit 11 | Unknown. | 1 Bit | 
| Bit 12 | Unknown. | 1 Bit | 
| Bit 13 | Unknown. | 1 Bit | 
| Bit 14 | Unknown. | 1 Bit | 
| Bit 15 | Unknown. | 1 Bit | 
| Bit 16 | Unknown. | 1 Bit | 
| Bit 17 | Unknown. | 1 Bit | 
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

### Great Ape Mode
If a character is marked as a Great Ape, Rush Blast 2s will repel and effectively become useless.
The character will also throw up a much bigger dust cloud upon landing.

The only value checked in-game is 4. Any other value is unused and will not work.

### Aura Color

| ID | Color |
|-|-|
| 0 | Blue |
| 1 | Purple |
| 2 | Yellow |
| 3 | Red |
| 4 | Green |
| 5 | Light Blue |
| 6 | Pink |
| 7 | Blueish Purple |
| 8 | Gold |

**Total size: 1 Byte**

### Rushing Technique
BT2 has 4 rushing technique slots per character. They are distinguished by how many melee attacks need to be done before pressing the technique button (triangle on PS2).

| ID | Technique |
|-|-|
| 0 | Heavy Finish |
| 1 | Kiai Cannon / Blaster Wave |
| 2 | Flying Kick |

**Total size: 1 Byte**

Any other value will disable the Rushing Technique slot.

**Note:** The Kiai Cannon and Blaster Wave occupy the same value, so this type cannot be used to switch from one to the other.

### Counter Technique
BT2 has 3 Counter Types:
- Rush Counter
- Step Counter
- Cancel Counter

Each Counter can have one of these types:

| ID | Technique |
|-|-|
| 0 | No Counter |
| 1 | Smash Counter (called "Strike" in-game) |
| 2 | Vanish Counter (called "Feint" in-game) |
| 3 | Throw Counter |
| 4 | Sway |

**Total size: 1 Byte**

### Step-In Technique

| ID | Technique |
|-|-|
| 0 | Heavy Finish |
| 1 | Sway + Heavy Finish |
| 2 | Kiai Cannon/Blaster Wave |
| 3 | Sway + Kiai Cannon/Blaster Wave |
| 4 | Flying Kick |
| 5 | Sway + Flying Kick |

**Total size: 1 Byte**

Any other value will disable the Step-In Technique. 

### Step-In Directional Technique

| ID | Technique |
|-|-|
| 0 | Technique |
| 1 | Sway + Technique |

**Total size: 1 Byte**

Any other value will disable the Step-In Technique. 

## See also

- [Neo Studio](https://github.com/jagger1407/NeoStudio)
    - My tool to edit Sparking! Neo / Budokai Tenkaichi 2 character paks.