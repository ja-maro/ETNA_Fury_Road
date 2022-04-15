/*
** ETNA PROJECT, 15/04/2022 by maro_j
** /home/jean-antoine/ETNA/CTW/Piscine
** File description:
**      init item structure array for all items
*/

#include "main_header.h"

Item_t **init_item(void)
{
int i;
    int Item_nbr = 7;

    Item_t **items = malloc(Item_nbr * sizeof(Enemy_t));
    if (items == NULL)
        return NULL;
    for (i = 0; i < Item_nbr; ++i) {
      items[i] = create_item(i);
    }
    return items;
}
