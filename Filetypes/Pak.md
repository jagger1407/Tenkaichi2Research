# .pak Filetype
A proprietary archive file format.

It is used to package multiple files into one. Each subentry will be referred to as a "section" from now on.

Sections store just the raw data, so file attributes and metadata is lost during packaging.

## What uses this format?

All character costumes store their data inside a Pak. Menu-related data is also contained in Paks. Basically, any data that consists of multiple files.

## File Structure

A Pak file starts with a header. Each section is aligned to 16 Bytes. 
### Header structure
| Offset | Variable | Description | Size |
|-|-|-|-|
| 0x00 | `amount_subsections` | The amount of subsections within the pak. | 4 Bytes |
| 0x04 | `section_offsets` | An array of offsets for each subsection.<br>One additional offset provides the total file size. | `(amount_subsections + 1) * 4` Bytes |

**Note:** The alignment seems to be dependent on the data that is being packaged. Some files use a `0x40` Byte alignment instead. 

After this, section data starts.

## CPAKs
Some Pak files are compressed. These use the Byte-Pair-Encoding compression, which was first described in 1994 by Philip Gage. Information on this type of compression can be found [here](https://www.derczynski.com/papers/archive/BPE_Gage.pdf).

In short, it splits the file by blocks (default 10.000 Bytes in size), then counts and replaces frequent byte-pairs within each block with a byte that did not have an occurrence in the block. BPE then encodes the dictionary storing the byte-pair with their replacement and places it before each compressed block. In order to decompress each block, one must first decode the dictionary table, then apply it to the block.

## See also

- [Pakman](https://github.com/jagger1407/Pakman)
    - My tool to pack, unpack and decompress this format.
- [SpikeSoft](https://github.com/HiroTex/SpikeSoft)
    - A tool made by [HiroTex](https://github.com/HiroTex) to open and modify `.pak` files as well as `.cpak` files from the Sparking! / Budokai Tenkaichi games.
- [pak-txt-extractor](https://github.com/ViveTheModder/pak-txt-extractor)
    - A tool made by [ViveTheJoestar](https://github.com/ViveTheModder) to extract text from `.pak` files.
