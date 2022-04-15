/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** My loot
*/

#ifndef MYLOOT_H_
#define MYLOOT_H_

typedef struct object {
   const char    *name;
   const char    *tag;
   struct object *location;
} OBJECT;
extern OBJECT objs[];
#define field      (objs + 0)
#define cave       (objs + 1)
#define silver     (objs + 2)
#define gold       (objs + 3)
#define guard      (objs + 4)
#define player     (objs + 5)
#define endOfObjs  (objs + 6)

#endif
