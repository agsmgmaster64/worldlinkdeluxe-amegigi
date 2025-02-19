#ifndef GUARD_BATTLE_ANIM_INTERNAL_H
#define GUARD_BATTLE_ANIM_INTERNAL_H

/* ANIM_CMD_ARGS provides a way to locally name the members of gBattleAnimArgs.
 *
 * For example:
 * {
 *   ANIM_CMD_ARGS(x, y);
 *   // cmd->x is gBattleAnimArgs[0] and cmd->y is gBattleAnimArgs[1]
 * } */
#if MODERN
#define ANIM_CMD_ARGS(...) struct { s16 __VA_ARGS__; } *cmd = (void *)gBattleAnimArgs
#else
#define ANIM_CMD_ARGS(...) struct ANIM_CMD_ARGS { s16 __VA_ARGS__; }
#define cmd ((struct ANIM_CMD_ARGS *)gBattleAnimArgs)
#endif

#endif
