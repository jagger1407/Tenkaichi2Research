# .afs Filetype
A proprietary archive file list format.

The name is an abbreviation for **A**FS **F**ile **L**ist.
It is used to give each entry within the AFS a name, since AFS files often obfuscate the metadata section.

## What uses this format?

AFS Explorer is able to import an AFL file to overwrite the names for all entries of an AFS.
Afster also includes support for these, as they are relatively simple.

## Structure

An AFL file starts with a header. 
### Header structure
| Offset | Variable | Description | Size |
|-|-|-|-|
| 0x00 | `identifier` | Identifies the type of AFL. Always `"AFL"`. | 4 Bytes |
| 0x04 | `unk1` | Unknown. | 4 Bytes |
| 0x08 | `unk2` | Unknown. | 4 Bytes |
| 0x0C | `entry_count` | The amount of entries within this AFL. | 4 Bytes |

After this, the entries start.

### AFL Entry structure
| Offset | Variable | Description | Size |
|-|-|-|-|
| 0x00 | `name` | The name for the corresponding AFS entry. | 32 Bytes |

## See also

- [Afster](https://github.com/jagger1407/Afster)
    - A library I wrote to interface with AFS files. Example programs are included.
- [AFS Explorer](https://archive.org/details/afsexplorer-3-7)
    - A File Manager-like tool for AFS files made by the WE-NG Team.