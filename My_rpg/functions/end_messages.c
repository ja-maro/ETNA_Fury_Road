/*
** ETNA PROJECT, 13/04/2022 by charda_p maro_j pondaven_j
** File description:
**     Messages at the end of the stage
*/

#include "colours.h"

void my_putstr(const char *str);

void stage0end(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[2]);
    my_putstr("\tFINALLY AWAKE\n");
    my_putstr(cs_cmd[0]);
    my_putstr("Ah ! You're finally awake ! I knew your pillow and your bed couldn't stop you ! You're really the best.\n");
}
void stage1end(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[2]);
    my_putstr("\tWHAT A GREAT DAY\n");
    my_putstr(cs_cmd[0]);
    my_putstr("Your partner is laying, tired, broken but deeply satisfied by your hugs. It's hard to let go, but you're already late. You MUST go on !\n");
}
void stage2end(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[2]);
    my_putstr("\tNO COUNTRY FOR OLD PEOPLE\n");
    my_putstr(cs_cmd[0]);
    my_putstr("The cycle of life and death continues... For the worse or the better !\n");
}
void stage3end(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[2]);
    my_putstr("\tNOTHING CAN CONTROL YOU\n");
    my_putstr(cs_cmd[0]);
    my_putstr("The controller is down, the horse is delicious. A nice piece of meat ! I prefer it that way too.\n");
}
void stage4end(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[2]);
    my_putstr("\tSPLAAASH\n");
    my_putstr(cs_cmd[0]);
    my_putstr(cs_text[5]);
    my_putstr("eeeeergh\n");
    my_putstr(cs_cmd[0]);
    my_putstr("Do I really need to explain what happened here ?\n");
}
void stage5end(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[2]);
    my_putstr("\tIT THIS\n");
    my_putstr(cs_cmd[0]);
    my_putstr("You can be proud of yourself. And trust me... He deserved this ! ... Maybe...\n");
}
void stage6end(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[2]);
    my_putstr("\tIS TAKEN WHO BELIEVED TO TAKE\n");
    my_putstr(cs_cmd[0]);
    my_putstr("Great job ! You may have a chance to be in time by politely leaving.\n");
    my_putstr("Well, your friends will never talk to you again but still ! You'll be on time !\n");

}
void stage7end(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[2]);
    my_putstr("\tSMOKE ME THIS\n");
    my_putstr(cs_cmd[0]);
    my_putstr(cs_text[5]);
    my_putstr("Okay, promis jte rembourse demain, arrete de me frapper stp...\n");
    my_putstr(cs_cmd[0]);
    my_putstr("Give him a last reminder ! And take fifty cents from him to buy some coffee !\n");
}
void stage8end(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[2]);
    my_putstr("\tTHE ENLIGHTEMENT\n");
    my_putstr(cs_cmd[0]);
    my_putstr("You don't have to copy/paste someone who's already a copy paster. But They'll respect you for what you are.\n");
    my_putstr("A true dev full stackoverflow\n");
}
void stage9end(void)
{
my_putstr(cs_cmd[1]);
    my_putstr(cs_text[2]);
    my_putstr("\n\n\n");
    my_putstr("\t\t       _      _               \n");    
    my_putstr("\t\t      (_)    | |                  \n");
    my_putstr("\t\t__   ___  ___| |_ ___  _ __ _   _ \n");
    my_putstr("\t\t\\ \\ / / |/ __| __/ _ \\| '__| | | |\n");
    my_putstr("\t\t \\ V /| | (__| || (_) | |  | |_| |\n");
    my_putstr("\t\t  \\_/ |_|\\___|\\__\\___/|_|   \\__, |\n");
    my_putstr("\t\t                             __/ |\n");
    my_putstr("\t\t                            |___/ \n");
    my_putstr("\n");
    my_putstr(cs_cmd[0]);
    my_putstr("You did it... Incredible... You arrived in time !\n");
    my_putstr("You can be proud of yourself. The journey was arduous...\n");
    my_putstr("But now you know the truth about THE MOULINETTE...\n");
    my_putstr("It's actually running with the siphoned souls of students who have disappeared from the training course...\n");
    my_putstr("...\n");
    my_putstr(cs_text[3]);
    my_putstr(cs_bg[0]);
    my_putstr("\n\tBURN EVERYTHING !");
    my_putstr(cs_cmd[0]);
    my_putstr("\n");
    my_putstr("\n");
    my_putstr("\n");
}

void end_messages(int stage)
{
    switch ( stage )
{
    case 0:
        stage0end();
        break;
    case 1:
        stage1end();
        break;
    case 2:
        stage2end();
        break; 
    case 3:
        stage3end();
        break;
    case 4:
        stage4end();
        break;
    case 5:
        stage5end();
        break;
    case 6:
        stage6end();
        break;
    case 7:
        stage7end();
        break;
    case 8:
        stage8end();
        break;
    case 9:
        stage9end();
        break;
    default:
        my_putstr(cs_text[2]);
        my_putstr(cs_bg[0]);
        my_putstr("You've wasted too much time, Florence will never let you in, you trash !\n");
         my_putstr("       ________________   ___/-\\___     ___/-\\___     ___/-\\___\n");
         my_putstr("     / /             ||  |---------|   |---------|   |---------|\n");
         my_putstr("    / /              ||   |       |     | | | | |     |   |   |\n");
         my_putstr("   / /             __||   |       |     | | | | |     | | | | |\n");
         my_putstr("  / /   \\        I   ||   |       |     | | | | |     | | | | |\n");
         my_putstr(" (-------------------||   | | | | |     | | | | |     | | | | |\n");
         my_putstr(" ||               == ||   |_______|     |_______|     |_______|\n");
         my_putstr(" ||   TRASH MOBILE   | =============================================\n");
         my_putstr(" ||          ____    |                                ____      |\n");
         my_putstr("( | o      / ____ \\                                 / ____ \\    |)\n");
         my_putstr(" ||      / / . . \\ \\                              / / . . \\ \\   |\n");
         my_putstr("[ |_____| | .   . | |____________________________| | .   . | |__]\n");
         my_putstr("          | .   . |                 -GAME-         | .   . |\n");
         my_putstr("           \\_____/                  -OVER-          \\_____/\n");
        my_putstr(cs_cmd[0]);
        my_putstr("\n");
}
}
