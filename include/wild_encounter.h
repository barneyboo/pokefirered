#ifndef GUARD_WILD_ENCOUNTER_H
#define GUARD_WILD_ENCOUNTER_H

#include "global.h"

#define LAND_WILD_COUNT 12
#define WATER_WILD_COUNT 5
#define ROCK_WILD_COUNT 5
#define FISH_WILD_COUNT 10

#define NUM_ALTERING_CAVE_TABLES 9

struct WildPokemon
{
    u8 minLevel;
    u8 maxLevel;
    u16 species;
};

struct WildPokemonInfo
{
    u8 encounterRate;
    const struct WildPokemon *wildPokemon;
};

struct WildPokemonHeader
{
    u8 mapGroup;
    u8 mapNum;
    const struct WildPokemonInfo *landMonsInfo;
    const struct WildPokemonInfo *waterMonsInfo;
    const struct WildPokemonInfo *rockSmashMonsInfo;
    const struct WildPokemonInfo *fishingMonsInfo;
};

extern const struct WildPokemonHeader gWildMonHeaders[];

/* wild pokemon tables that are updated as the game is played*/
struct DynamicWildPokemonInfo
{
    struct WildPokemon *wildPokemon;
};

struct DynamicWildPokemonHeader
{
    u8 mapGroup;
    u8 mapNum;
    struct WildPokemon *wildPokemon;
};

extern struct DynamicWildPokemonHeader dynamicWildMonHeaders[32];
// extern struct DynamicWildPokemonInfo dynamicWildPokemonInfo[50];

//!!! Experiment with using AGBPrint for debug logging!
extern struct WildPokemon dynamicWildPokemon[210];

void DisableWildEncounters(bool8 disabled);
bool8 StandardWildEncounter(u32 currMetatileAttrs, u16 previousMetaTileBehavior);
bool8 SweetScentWildEncounter(void);
bool8 DoesCurrentMapHaveFishingMons(void);
void FishingWildEncounter(u8 rod);
u16 GetLocalWildMon(bool8 *isWaterMon);
u16 GetLocalWaterMon(void);
bool8 UpdateRepelCounter(void);
void DisableWildEncounters(bool8 state);
u8 GetUnownLetterByPersonalityLoByte(u32 personality);
bool8 SweetScentWildEncounter(void);
void SeedWildEncounterRng(u16 randVal);
void ResetEncounterRateModifiers(void);
bool8 TryStandardWildEncounter(u32 currMetatileAttrs);
u16 GetCurrentMapWildMonHeaderId(void);

#endif // GUARD_WILD_ENCOUNTER_H
