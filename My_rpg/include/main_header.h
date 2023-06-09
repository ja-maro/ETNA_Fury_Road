/*
** ETNA PROJECT, 15/04/2022 by charda_p, maro_j, pondav_j
** File description:
**      main header
*/

#ifndef MAIN_HEADER
#define MAIN_HEADER
#include "rpg.h"
#include <time.h>
#include <stdlib.h>

void my_putchar(char c);
void my_putstr(const char *str);
void my_putnbr(int nbr);
char *my_readline(void);
void rpg_intro(void);
void start_messages(int stage);
void end_messages(int stage);
Enemy_t **init_enemy (void);
Item_t *create_item(int index);
Item_t **init_item (void);
Player_t **init_player (void);
Boss_t **init_boss (void);
int my_strcmp(const char *s1, const char *s2);
int my_strlen(const char *str);
void my_loot(void);

#endif
