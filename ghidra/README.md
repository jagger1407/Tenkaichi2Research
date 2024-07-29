# Ghidra
Ghidra is a reverse engineering tool initially created by the NSA, then made Open-Source. You can use it on BT2s executable to look into the source code of the game itself, however, note that this means all the variables, functions and datatypes have unrecognizable names. Reverse Engineering is the practice of converting this confusing machine generated mess into something coherent.

Here's the description for each thing in this folder:

## SLUS_214.41.gzf
This is the .gzf (Ghidra Zip File) of my project. Import this and you'll have all the progress I've currently made.

That .gzf was generated using [Ghidra version 11.0](https://github.com/NationalSecurityAgency/ghidra/releases/tag/Ghidra_11.0_build)

The PS2 plugin (necessary in order to recognize the Playstation 2 architecture) was [ghidra-emotionengine-reloaded v2.1.12](https://github.com/chaoticgd/ghidra-emotionengine-reloaded/releases/tag/v2.1.12), the .zip file of this plugin should be put into `{Ghidra Path}/Extensions/Ghidra`, then [installed within Ghidra](https://ghidra-sre.org/InstallationGuide.html#Extensions).

## code/
This folder will have all the datatypes and functions I've already reverse engineered, I wanted to create this specifically because you can't look into the .gzf within github. As this obviously sucks, I want to at least show the functions I've researched to an appropriate degree.

### Note
These .c and .h files will throw errors in an IDE, because they are not meant to be compilable. I exported these straight from Ghidra, they are simply included so you can take a look at the code yourself without downloading Ghidra.

## NTSC_BT2.sym
This is a so called .sym (symbols) file. This is used for debugging with PCSX2.
In order to use this file, you need to rename it to have the same name as your .iso (which also must be the same version, aka NTSC), then put it in the same folder. PCSX2 will automatically load it upon launching the game.
Once you open the PCSX2 Debugger (if you don't see the Debug tab, check the "Show Advanced Settings" checkbox in the Tools tab), you will be able to see the function names and global variables from the .gzf file inside the Disassembler tab.

## Modded_ELFs
This is a folder of experimental modded versions of the Budokai Tenkaichi 2 executable.
