/*
** ETNA PROJECT, 15/04/2022 by maro_j
** /home/jean-antoine/ETNA/CTW/Piscine
** File description:
**      init player structure array for all players
*/

#include "main_header.h"
#include "rpg.h"
#include "Players.h"

Player_t *create_player(int index)
{
    Player_t *player;
    player = malloc(sizeof(*player));

    player->name = Player_name[index];
    player->hp = Player_hp[index];
    player->mp = Player_mp[index];
    player->str = Player_str[index];
    player->inte = Player_inte[index];
    player->def = Player_def[index];
    player->res = Player_res[index];
    player->spd = Player_spd[index];
    player->luck = Player_luck[index];
    return player;
}

Player_t **init_player (void)
{
    int i;
    int Player_nbr = 5;

    Player_t **players = malloc(Player_nbr * sizeof(Player_t));
    if (players == NULL)
        return NULL;
    for (i = 0; i < Player_nbr; ++i) {
      players[i] = create_player(i);
    }
    return players;
}
