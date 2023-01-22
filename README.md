# Pokémon PikaRoo

This is a modified disassembly of Pokémon FireRed and LeafGreen, forked from https://github.com/pret/pokefirered.

Includes the following changes:

- Some Pokémon renamed
- Small amount of money earned after winning a battle
- Randomised wild Pokémon spawns (see notes below for limitations)
- Logging handler ported from https://github.com/pret/pokeemerald

## Dynamic Spawns

After catching a Pokémon in the wild, its slot in the encounter table for that map will be replaced with a random Pokémon. The levels for that encounter will be incremented by one. There are some limitations on how this works at the moment:

- Only seven dynamic slots for land encounters per map (instead of 12).
- Until all seven dynamic slots for a map have been filled, all 12 original slots can spawn in battle.
- Unique dynamic spawn tables for 15 maps are stored. Therefore, some maps share dynamic spawn tables.
- Only land encounters are supported so far.

⚠️ This still a work in progress. Support for more dynamic encounter tables, slots per map, and non-land encounters is on the way. Also some ways to try and balance things so you can't build a dream team on Route 1.
