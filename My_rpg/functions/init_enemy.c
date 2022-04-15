/*
** ETNA PROJECT, 15/04/2022 by maro_j
** /home/jean-antoine/ETNA/CTW/Piscine
** File description:
**      init enemy structure array for all enemies
*/

#include "main_header.h"

Enemy_t **init_enemy (void)
{
    int i;
    int Enemy_nbr = 9;

    Enemy_t **enemies = malloc(Enemy_nbr * sizeof(Enemy_t));
    if (enemies == NULL)
        return NULL;
    for (i = 0; i < Enemy_nbr; ++i) {
      enemies[i] = create_monster(i);
    }
    return enemies;
}