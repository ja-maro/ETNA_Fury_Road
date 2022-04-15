/*
** ETNA PROJECT, 15/04/2022 by charda_p, maro_j, pondav_j
** File description:
**      main header
*/

#ifndef MAIN_HEADER
#define MAIN_HEADER
#include "rpg.h"
#include <stdlib.h>

void my_putchar(char c);
void my_putstr(const char *str);
char *my_readline(void);
void rpg_intro(void);
Enemy_t *create_monster(int index);
Enemy_t **init_enemy (void);
Player_t **init_player (void);
Boss_t **init_boss (void);
int my_strcmp(const char *s1, const char *s2);
int my_strlen(const char *str);
void my_loot(void);

#endif
