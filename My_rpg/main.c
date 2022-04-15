/*
** ETNA PROJECT, 15/04/2022 by charda_p, maro_j, pondav_j
** File description:
**      Our very own CLI RPG !
*/

#include "main_header.h"

int main()
{
    char *str;
    /*Enemy_t **enemies = init_enemy();
    Player_t **players = init_player();
    Boss_t **bosses = init_boss(); */

    rpg_intro();
    /* readline loop */
    while(1) {
    str = my_readline();

    my_putstr(str);
    my_putstr("\n");
    }
    
    return 0;


}
