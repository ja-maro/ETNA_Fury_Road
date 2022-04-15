/*
** ETNA PROJECT, 15/04/2022 by charda_p, maro_j, pondav_j
** File description:
**      monster constructor
*/

#include "Enemy.h"
#include "rpg.h"

Enemy_t *create_monster(int index)
{
    Enemy_t *en;
    en = malloc(sizeof(*en));

    en->name = Enemy_name[index];
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
