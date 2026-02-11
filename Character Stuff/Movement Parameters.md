# Movement Parameters

This is section 20 of a character costume pak, or `020_character_movement_param.dat` if the pak was extracted via Sparking Studio or SpikeSoft.

## Structure
The structure of this section is as follows:

| Offset | Data Type | Description | Size |
|-|-|-|-|
| 0x00 | `float` | The speed of regular movement. | 4 Bytes |
| 0x04 | `float` | The speed of regular movement in water. | 4 Bytes |
| 0x08 | `float` | The speed of close range movement. | 4 Bytes |
| 0x0C | `float` | The speed of close range movement in water. | 4 Bytes |
| 0x10 | `float` | The speed of dashing. | 4 Bytes |
| 0x14 | `float` | The speed of dashing in water. | 4 Bytes |
| 0x18 | `float` | The speed of a homing Dragon Dash.<br>Homing = No directional input | 4 Bytes |
| 0x1C | `float` | The speed of a free Dragon Dash.<br>Free = Directional input | 4 Bytes |
| 0x20 | `float` | The speed of ascending & descending while in a free Dragon Dash. | 4 Bytes |
| 0x24 | `float` | The speed of the Dragon Ascend/Dragon Descend. | 4 Bytes |
| 0x28 | `float` | The speed of a Step-In. | 4 Bytes |
| 0x2C | `float` | The speed of a Backstep. | 4 Bytes |
| 0x30 | `float` | The speed of a Sidestep. | 4 Bytes |
| 0x34 | `float` | The speed of movement while in a jump. | 4 Bytes |
| 0x38 | `float` | The speed of movement while in a dash jump. | 4 Bytes |
| 0x3C | `float` | The speed of the Lift Strike follow-up.<br>(The hop that starts the Air Combo) | 4 Bytes |
| 0x40 | `float` | The speed of ascending. | 4 Bytes |
| 0x44 | `float` | The speed of descending. | 4 Bytes |
| 0x48 | `float` | The speed of teleports.<br>Affects High Speed Rush Movement & Hyper Speed Movement. | 4 Bytes |
| 0x4C | `float` | The acceleration while ascending. | 4 Bytes |
| 0x50 | `float` | The acceleration while descending. | 4 Bytes |
| 0x54 | `float` | It's unknown how this value works, however, setting it to under<br>180 makes the character not turn around while in a Jump Smash. | 4 Bytes |
| 0x58 | `float[3]` | The time (in seconds) it takes for a dash to end naturally.<br>I don't know why this has 2 other elements. | 4 Bytes |
| 0x64 | `float` | Seems to be unused. | 4 Bytes |
| 0x68 | `float` | The height of a jump. | 4 Bytes |
| 0x6C | `float` | The height of a dash jump. | 4 Bytes |
| 0x70 | `int32_t` | The amount of ki that is subtracted every update while<br>in a homing Dragon Dash. | 4 Bytes |
| 0x74 | `int32_t` | The amount of ki that is subtracted every update while<br>in a free Dragon Dash. | 4 Bytes |
| 0x78 | `int32_t` | The amount of ki that is subtracted every update while<br>Dragon Ascending / Dragon Descending. | 4 Bytes |
| 0x7C | `float` | The speed at which the character travels left or right in a chase dash. | 4 Bytes |
| 0x80 | `float` | The speed at which the character travels left or right in a chase Dragon Dash. | 4 Bytes |
| 0x84 | `float` | The speed at which the character travels up or down in a chase Dragon Dash. | 4 Bytes |
| 0x88 | `float` | Unknown.<br>Part of an array at 0x7C. | 4 Bytes |
| 0x8C | `float` | Unknown.<br>Part of an array at 0x7C. | 4 Bytes |
| 0x90 | `float` | This decides how far you can travel left or right in a chase dash. | 4 Bytes |
| 0x94 | `float` | This decides how far you can travel left or right in a chase Dragon Dash. | 4 Bytes |
| 0x98 | `float` | This decides how far you can travel up or down in a chase Dragon Dash. | 4 Bytes |
| 0x9C |`float` | Unknown.<br>Part of an array at 0x90. | 4 Bytes |
| 0xA0 |`float` | Unknown.<br>Part of an array at 0x90. | 4 Bytes |

**Total size: 164 Bytes**

## See also

- [Neo Studio](https://github.com/jagger1407/NeoStudio)
    - My tool to edit Sparking! Neo / Budokai Tenkaichi 2 character paks.