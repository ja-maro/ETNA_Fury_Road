/*
** ETNA PROJECT, 15/04/2022 by maro_j
** /home/jean-antoine/ETNA/CTW/Piscine
** File description:
**      init item structure array for all items
*/
#include "Item.h"
#include "rpg.h"
#include "main_header.h"

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
Item_t **init_item(void)
{
int i;
    int Item_nbr = 7;

    Item_t **items = malloc(Item_nbr * sizeof(Item_t));
    if (items == NULL)
        return NULL;
    for (i = 0; i < Item_nbr; ++i) {
      items[i] = create_item(i);
    }
    return items;
}
