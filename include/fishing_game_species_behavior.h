#ifndef GUARD_FISHING_GAME_SPECIES_BEHAVIOR_H
#define GUARD_FISHING_GAME_SPECIES_BEHAVIOR_H

// Behavior data for individual species.
// If a species is not present in this table it will use the default behavior for the current rod type.
static const struct FishBehaviorData sFishBehavior[] =
{
    { // Old Rod default behavior.
        .species = 0,
        .speed = { .min = 2, .max = 2 },
        .distance = { .min = 5, .max = 15 },
        .delay = { .min = 40, .max = 160 },
        .idleMovement = 6
    },
    { // Good Rod default behavior.
        .species = 0,
        .speed = { .min = 3, .max = 5 },
        .distance = { .min = 15, .max = 55 },
        .delay = { .min = 80, .max = 120 },
        .idleMovement = 6
    },
    { // Super Rod default behavior.
        .species = 0,
        .speed = { .min = 8, .max = 16 },
        .distance = { .min = 10, .max = 70 },
        .delay = { .min = 15, .max = 35 },
        .idleMovement = 12
    },
// Don't add new entries above this line.

    /* EMPTY TEMPLATE
    {
        .species = ,
        .speed = { .min = , .max =  },
        .distance = { .min = , .max =  },
        .delay = { .min = , .max =  },
        .idleMovement = 
    },
    */
    {
        .species = SPECIES_CHIBI_MURASA,
        .speed.min = 3,
        .speed.max = 5,
        .distance.min = 25,
        .distance.max = 55,
        .delay.min = 80,
        .delay.max = 120,
        .idleMovement = 6
    },
    {
        .species = SPECIES_NORMAL_MURASA,
        .speed.min = 8,
        .speed.max = 10,
        .distance.min = 25,
        .distance.max = 75,
        .delay.min = 80,
        .delay.max = 120,
        .idleMovement = 8
    },
    {
        .species = SPECIES_CHIBI_WAKASAGIHIME,
        .speed.min = 4,
        .speed.max = 10,
        .distance.min = 60,
        .distance.max = 80,
        .delay.min = 170,
        .delay.max = 190,
        .idleMovement = 4
    },
    {
        .species = SPECIES_NORMAL_WAKASAGIHIME,
        .speed.min = 6,
        .speed.max = 12,
        .distance.min = 50,
        .distance.max = 90,
        .delay.min = 100,
        .delay.max = 140,
        .idleMovement = 6
    },
    {
        .species = SPECIES_CHIBI_HINA,
        .speed.min = 2,
        .speed.max = 2,
        .distance.min = 5,
        .distance.max = 15,
        .delay.min = 40,
        .delay.max = 160,
        .idleMovement = 6
    },
    {
        .species = SPECIES_NORMAL_HINA,
        .speed.min = 8,
        .speed.max = 16,
        .distance.min = 30,
        .distance.max = 70,
        .delay.min = 15,
        .delay.max = 35,
        .idleMovement = 12
    },
    {
        .species = SPECIES_CHIBI_KOMACHI,
        .speed.min = 7,
        .speed.max = 13,
        .distance.min = 15,
        .distance.max = 25,
        .delay.min = 30,
        .delay.max = 70,
        .idleMovement = 15
    },
    {
        .species = SPECIES_NORMAL_KOMACHI,
        .speed.min = 10,
        .speed.max = 30,
        .distance.min = 55,
        .distance.max = 95,
        .delay.min = 70,
        .delay.max = 90,
        .idleMovement = 20
    },
    {
        .species = SPECIES_CHIBI_NITORI,
        .speed.min = 4,
        .speed.max = 8,
        .distance.min = 10,
        .distance.max = 40,
        .delay.min = 45,
        .delay.max = 75,
        .idleMovement = 6
    },
    {
        .species = SPECIES_NORMAL_NITORI,
        .speed.min = 8,
        .speed.max = 12,
        .distance.min = 25,
        .distance.max = 55,
        .delay.min = 30,
        .delay.max = 60,
        .idleMovement = 5
    },
    {
        .species = SPECIES_CHIBI_WAKASAGIHIME_GOLD,
        .speed.min = 4,
        .speed.max = 6,
        .distance.min = 8,
        .distance.max = 22,
        .delay.min = 40,
        .delay.max = 140,
        .idleMovement = 6
    },
};

#endif // GUARD_FISHING_GAME_SPECIES_BEHAVIOR_H
