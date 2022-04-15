/*
** ETNA PROJECT, 15/04/2022 by charda_p, maro_j, pondav_j
** File description:
**      location constructor
*/

#include "location.h"
#include "rpg.h"

Location_t *create_location()
{
    Location_t *location;
    location = malloc(sizeof(*location));
    location->name = "";
    location->description = "";
    location->enemies = NULL;
    location->next = NULL;
    return location;
}
