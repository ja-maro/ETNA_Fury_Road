/*
** ETNA PROJECT, 13/04/2022 by maro_j
** /home/jean-antoine/ETNA/CTW/Piscine
** File description:
**     intro displays, the intro message and the rules
*/

#include "colours.h"

void my_putstr(const char *str);

void rpg_intro(void)
{
    my_putstr(cs_text[1]);
    my_putstr("\t\t___________________________\n");
    my_putstr(cs_text[3]);
    my_putstr("\t\t|     |  |     | |  __| \n");
    my_putstr(cs_text[2]);
    my_putstr("\t\t| | | |  | | | | | |       \n");
    my_putstr(cs_text[6]);
    my_putstr("\t\t|    _|  |  ___| | |   ___ \n");
    my_putstr(cs_text[4]);
    my_putstr("\t\t| |\\ \\   | |     | |  |_  |\n");
    my_putstr(cs_text[5]);
    my_putstr("\t\t| | \\ \\  | |     | |____| |\n");
    my_putstr(cs_text[8]);
    my_putstr("\t\t|_|  \\_\\ |_|     |________|\n\n");
    my_putstr(cs_cmd[0]); 
    my_putstr(cs_text[1]);
    my_putstr(cs_bg[7]);
    my_putstr("\t\t   WELCOME MY FRIEND !   ");
    my_putstr(cs_cmd[0]);
    my_putstr("\n");
    my_putstr("I'm your guardian angel. Well ... Kind of...\n");
    my_putstr("You're a student from ETNA. It's ");
    my_putstr(cs_cmd[1]);
    my_putstr("8am ");
    my_putstr(cs_cmd[0]); 
    my_putstr("and you're late !\n");
    my_putstr("Grab what you can and run ! Don't let anyone stop you.\n");
    my_putstr("It's saturday, the exam day. It would be a shame to get a -21...\n");
}