/*
** ETNA PROJECT, 15/04/2022 by charda_p, maro_j, pondav_j
** File description:
**      Our very own CLI RPG !
*/

#include "main_header.h"

int main()
{
    char *str;
    rpg_intro();

    while(1) {
    str = my_readline();
    my_putstr(str);
    my_putstr("\n");
    }
    
    return 0;
}