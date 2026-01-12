# .afs Filetype
A proprietary archive file format.

The name is an abbreviation for the **A**DX **F**ile **S**ystem. The format was created by CRIWARE and is intended to be used with ADX Audio files.

## What uses this format?

Spike, alongside using it to store the game's audio in the ADX format, used it to store *almost all* game-related data, including textures for menus and characters, models for characters and maps, story mode related files etc.

## Structure

An AFS file starts with a header. 
### Header structure
| Offset | Variable | Description | Size |
|-|-|-|-|
| 0x00 | `identifier` | Identifies the type of AFS.<br>`"AFS"` = Version 1<br>`"AFS "` = Version 2 | 4 Bytes |
| 0x04 | `entry_count` | The amount of entries within this AFS. | 4 Bytes |
| 0x08 | `entry_info` | The location info of each entry.<br>The metadata section is counted as an entry. | `(entry_count + 1) * 8` Bytes |

### Entry Info structure
| Offset | Variable | Description | Size |
|-|-|-|-|
| 0x00 | `offset` | The offset of this entry within the AFS. | 4 Bytes |
| 0x04 | `size` | The size of this entry within the AFS. | 4 Bytes |

After this, the entry data is stored. 
At the end of the AFS file, there is a metadata section which contains the metadata for each entry within the AFS.

### Metadata structure
| Offset | Variable | Description | Size |
|-|-|-|-|
| 0x00 | `file_name` | The file name of this entry. | 32 Bytes |
| 0x20 | `last_modified` | The timestamp for when this entry<br>was last modified. | 12 Bytes | 
| 0x2C | `unk` | Unknown. | 4 Bytes |

Each entry's metadata has a timestamp which records at second precision.

### Timestamp structure
| Offset | Variable | Description | Size |
|-|-|-|-|
| 0x00 | `year` | Stores the year. | 2 Bytes |
| 0x02 | `month` | Stores the month. | 2 Bytes |
| 0x04 | `day` | Stores the day. | 2 Bytes |
| 0x06 | `hour` | Stores the hour. | 2 Bytes |
| 0x08 | `minute` | Stores the minute. | 2 Bytes |
| 0x0A | `second` | Stores the second. | 2 Bytes |

## See also

- [Afster](https://github.com/jagger1407/Afster)
    - A library I wrote to interface with AFS files. Example programs are included.
- [AFS Explorer](https://archive.org/details/afsexplorer-3-7)
    - A File Manager-like tool for AFS files made by the WE-NG Team.
- [AFSPacker](https://github.com/MaikelChan/AFSPacker)
    - A tool made by [MaikelChan](https://github.com/MaikelChan) to extract and create AFS files.