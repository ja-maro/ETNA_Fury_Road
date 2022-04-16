/*
** ETNA PROJECT, 15/04/2022 by maro_j
** /home/jean-antoine/ETNA/CTW/Piscine
** File description:
**      init boss structure array for all bosses
*/

#include "main_header.h"
#include "rpg.h"
#include "Boss.h"

Boss_t *create_boss(int index)
{
    Boss_t *boss;
    boss = malloc(sizeof(*boss));

    boss->name = Boss_name[index];
    boss->hp = Boss_hp[index];
    boss->mp = Boss_mp[index];
    boss->str = Boss_str[index];
    boss->inte = Boss_inte[index];
    boss->def = Boss_def[index];
    boss->res = Boss_res[index];
    boss->spd = Boss_spd[index];
    boss->luck = Boss_luck[index];
    return boss;
}

Boss_t **init_boss (void)
{
    int i;
    int Boss_nbr = 7;

    Boss_t **bosses = malloc(Boss_nbr * sizeof(Boss_t));
    if (bosses == NULL)
        return NULL;
    for (i = 0; i < Boss_nbr; ++i) {
      bosses[i] = create_boss(i);
    }
    return bosses;
}
