# Skill List

This is sections 40 through 47 of a character costume pak. 
For completeness, here's a list of which language each one represents:

| Section # | Language | Sparking Studio name |
|-|-|-|
| 40 | German | 040_character_text_de.dat |
| 41 | French | 041_character_text_fr.dat |
| 42 | Italian | 042_character_text_it.dat |
| 43 | Japanese | 043_character_text_jp.dat |
| 44 | Korean | 044_character_text_kr.dat |
| 45 | Spanish | 045_character_text_sp.dat |
| 46 | English (NTSC) | 046_character_text_en.dat |
| 47 | English (PAL) | 047_character_text_uk.dat |

## Structure
The text found within Skill Lists is Unicode (UTF-16LE), and needs 2 bytes per character.
Each line has a prefix, the exact type of which decides how this entry will be displayed in the list.

The first character is the type of text to display:

| Character | Type |
|:-:|-|
| $ | Categories, like Blast 1/2 etc.<br>See [Categories](#categories). |
| % | Information. Used to display additional info.<br>See [Information](#information). |
| # | Input marker. Used to display Button Combinations.<br>See [Input](#input). |
| & | Unlockable marker. Used to darken lines.<br>See [Unlockable](Unlockable). |
| @ | Terminator. Everything after this character will be<br>ignored and not displayed. |

### Categories
The prefix `$` specifies that the line is meant to be seen as a category.
There are multiple categories, denoted by the next character:

| Value | Type |
|-|-|
| 0 | The 1 Star Dragon Ball. ![Skill List Header 0.](../SkillListAssets/header_0.png)<br>Used for the "Blast 1" category. |
| 1 | The 2 Star Dragon Ball. ![Skill List Header 1.](../SkillListAssets/header_1.png)<br>Used for the "Blast 2" category. |
| 2 | The 3 Star Dragon Ball. ![Skill List Header 1.](../SkillListAssets/header_2.png)<br>Used for the "Ultimate Blast" category. |
| 3 | The 4 Star Dragon Ball. ![Skill List Header 1.](../SkillListAssets/header_3.png)<br>Used for the "Rushing Technique" category. |
| 4 | The 5 Star Dragon Ball. ![Skill List Header 1.](../SkillListAssets/header_4.png)<br>Used for the "Signature Technique" category. |
| 5 | The 6 Star Dragon Ball. ![Skill List Header 1.](../SkillListAssets/header_5.png)<br>Used for the "Combo" category. |
| 6 | The 7 Star Dragon Ball. ![Skill List Header 1.](../SkillListAssets/header_6.png)<br>Used for the "Number of Pursuits" category. |
| 7 | A blue Dragon Ball with an input. ![Blue Dragon Ball.](../SkillListAssets/header_7.png) ![R3 Down](../SkillListAssets/header_7_input.png)<br>Used for the "Transformation" category. |
| 8 | A blue Dragon Ball with an input. ![Blue Dragon Ball.](../SkillListAssets/header_8.png) ![R3 Down + Down](../SkillListAssets/header_8_input.png)<br>May be unused.|

Any other character will failsafe to Type 0.

### Information
The prefix `%` specifies that the line is meant to be seen as Informational text.
There are multiple text types, denoted by the next character:

| Value | Type |
|-|-|
| 0 | A yellow text marked with a star.![Star.](../SkillListAssets/Text.png)<br>Used to show skill names. |
| 1 | A cyan text on a light blue background.<br>Used to show resource costs or context. |
| 2 | A red text on a light blue background.<br>Used to show important context. |
| 3 | A white text on a light blue background.<br>May be unused. |

Any other character will make this line not display at all.
 
### Input
The prefix `#` specifies that the line is meant to be seen as an input string.
This is a list of the basic inputs:

| Characters | Unicode | Displayed Input |
|:-:|:-:|:-:|
| □ | U+25A1 | ![Square](../SkillListAssets/input_10.png) |
| △ | U+25B3 | ![Triangle](../SkillListAssets/input_11.png) |
| × | U+00D7 | ![Cross](../SkillListAssets/input_13.png) |
| ○ | U+25CB | ![Circle](../SkillListAssets/input_12.png) |
| Ｌ１ | U+FF2C U+FF11 | ![L1](../SkillListAssets/input_0.png) |
| Ｌ２ | U+FF2C U+FF12 | ![L2](../SkillListAssets/input_1.png) |
| Ｌ３ | U+FF2C U+FF13 | ![L3](../SkillListAssets/input_2.png) |
| Ｒ１ | U+FF32 U+FF11 | ![R1](../SkillListAssets/input_3.png) |
| Ｒ２ | U+FF32 U+FF12 | ![R2](../SkillListAssets/input_4.png) |
| Ｒ３ | U+FF32 U+FF13 | ![R3](../SkillListAssets/input_5.png) |
| ← | U+2190 | ![Left Arrow](../SkillListAssets/input_6.png) |
| ↑ | U+2191 | ![Up Arrow](../SkillListAssets/input_7.png) |
| → | U+2192 | ![Right Arrow](../SkillListAssets/input_8.png) |
| ↓ | U+2193 | ![Down Arrow](../SkillListAssets/input_9.png) |

Besides these, there's also special characters used to combine inputs together:

| Characters | Unicode | Displayed Input |
|:-:|:-:|:-:|
| （ | U+FF08 | ![Parentheses Open](../SkillListAssets/special_0.png) |
| ） | U+FF09 | ![Parentheses Close](../SkillListAssets/special_1.png) |
| ＋ | U+FF0B | ![Plus Sign](../SkillListAssets/special_2.png) |
| ／ | U+FF0F | ![Slash](../SkillListAssets/special_3.png) |

There is one other special character with custom behaviour.
| Characters | Unicode | Displayed Input |
|:-:|:-:|:-:|
| ＊ | U+FF0A | See below. |

If this character is used, all next characters will turn into the prior to it for the rest of the line.
e.g. "△＊□□□" is gonna turn into "△△△△△" inside the Skill List.
If this repeating character is used after a square, it will turn into the symbol for square mashing ![Square Repeating](../SkillListAssets/input_14.png) (Used by Violent Rush for example).

### Unlockable

The prefix `&` specifies that the line can be darkened out depending on the status of this save file.
It is used to check whether a transformation or fusion has been unlocked yet, but how exactly it does so is still unknown.
