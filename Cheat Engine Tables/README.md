# Cheat Engine Tables
These are .CT files to use in conjunction with Cheat Engine.

## Usage
**Step 1:** Open the .CT file of the Parameters you want to edit

**Step 2:** Select the PCSX2 process

**Step 3:** Find the location of the parameters you are currently trying to edit

- **Tip:** In order to search for this, one could use multiple ways.
 - Search for a known parameter.
 Once found, subtract the offset from the address.
 - If one has the .pak file of the currently used character, copy the first few bytes and do a Array of Byte search in Cheat Engine to find the start of the parameters.
- **Example:** You want to edit the melee parameters with Cheat Engine.
However, you don't posess the .pak file of the character you're trying to edit. The known parameter you choose is the
damage of the first melee attack.
 You do an Exact Value search for the damage your first melee does to find the address of it. You can test if this is the right address by changing the value and seeing if the value of the melee changes too. Let's use 0x815026C as an example address.
 Once found, subtract the offset from the address. First melee attack starts at 0x0000 in the parameters and the damage offset is 0x04
 0x815026C - 0x0000 - 0x04 = 0x8150268
 So, 0x8150268 is the location of the melee parameters in this example.
 **Note:** As Cheat Engine directly modifies RAM, this value is not static, i.e. this value will change and differ between sessions.
 The address above is just an example and **not** the actual start of melee parameters.

**Step 4:** Enter the offsets
- **Start of Params** = The location found in Step 3.
- **Offset** = The offset of the move you are trying to edit
 - Example: Fully Charged Heavy Finish offset = 0x04B0

Once all the offsets have been entered, one is now free to edit the parameters however they want. Happy Editing!
