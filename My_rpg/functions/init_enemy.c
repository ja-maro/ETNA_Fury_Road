/*
** ETNA PROJECT, 15/04/2022 by maro_j
** /home/jean-antoine/ETNA/CTW/Piscine
** File description:
**      init enemy structure array for all enemies
*/

#include "main_header.h"
#include "Enemy.h"
#include "rpg.h"

Enemy_t *create_enemy(int index)
{
    Enemy_t *en;
    en = malloc(sizeof(*en));

    en->name = Enemy_name[index];
    en->atk_msg = Enemy_atk_msg[index];
    en->def_msg = Enemy_def_msg[index];
    en->hp = Enemy_hp[index];
    en->mp = Enemy_mp[index];
    en->str = Enemy_str[index];
    en->inte = Enemy_inte[index];
    en->def = Enemy_def[index];
    en->res = Enemy_res[index];
    en->spd = Enemy_spd[index];
    en->luck = Enemy_luck[index];
    return en;
}

Enemy_t **init_enemy (void)
{
    int i;
    int Enemy_nbr = 9;

    Enemy_t **enemies = malloc(Enemy_nbr * sizeof(Enemy_t));
    if (enemies == NULL)
        return NULL;
    for (i = 0; i < Enemy_nbr; ++i) {
      enemies[i] = create_enemy(i);
    }
    return enemies;
}