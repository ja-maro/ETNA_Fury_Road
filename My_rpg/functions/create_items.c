/*
** ETNA PROJECT, 15/04/2022 by charda_p, maro_j, pondav_j
** File description:
**      item constructor
*/

#include "Item.h"
#include "rpg.h"

Item_t *create_item(int index)
{
    Item_t *it;
    it = malloc(sizeof(*it));

    it->name = Item_name[index];
    it->hp = Item_hp[index];
    it->mp = Item_mp[index];
    it->str = Item_str[index];
    it->inte = Item_inte[index];
    it->def = Item_def[index];
    it->res = Item_res[index];
    it->spd = Item_spd[index];
    it->luck = Item_luck[index];
    return it;
}
