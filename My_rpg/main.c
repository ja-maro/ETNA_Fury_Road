/*
** ETNA PROJECT, 15/04/2022 by charda_p, maro_j, pondav_j
** File description:
**      Our very own CLI RPG !
*/

#include "main_header.h"

int main()
{
    char *str;
    int i = 0;

    /* create enemies template */
    Enemy_t **enemies = init_enemy();

    /* readline loop */
    while(i < 9) {

    str = my_readline();
    my_putstr(str);
    my_putstr(enemies[i]->name);
    my_putchar('\n');
    ++i;
    }

    //Item_t **items = init_items();

    my_putchar('H');
    my_putchar('e');
    my_putchar('y');
    my_putchar('\n');
    return 0;


}
