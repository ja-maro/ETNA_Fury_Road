/*
** ETNA PROJECT, 13/04/2022 by maro_j
** /home/jean-antoine/ETNA/CTW/Piscine
** File description:
**     intro displays, the intro message and the rules
*/

#include "colours.h"

void my_putstr(const char *str);

void stage0(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[1]);
    my_putstr("\tTHE ALARM CLOCK\n");
    my_putstr(cs_cmd[0]);
    my_putstr("You're late, but you feel so tired... Let's sleep a little more?\n");
}
void stage1(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[1]);
    my_putstr("\tTHE PARTNER\n");
    my_putstr(cs_cmd[0]);
    my_putstr("Your partner is looking at you with a passionate gaze. It would be a shame to let all this energy go to waste...\n");
}
void stage2(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[1]);
    my_putstr("\tTHE PUNK GRANNY\n");
    my_putstr(cs_cmd[0]);
    my_putstr("Come on ! Old people with dogs shouldn't get in your way ! Put her in her place !\n");
}
void stage3(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[1]);
    my_putstr("\tTHE TRAIN CONTROLLER\n");
    my_putstr(cs_cmd[0]);
    my_putstr("What the hell is this now ? A train controller riding a horse named Laravel ? Destroy this abomination !\n");
}
void stage4(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[1]);
    my_putstr("\tTHE ZOMBIE HOBO\n");
    my_putstr(cs_cmd[0]);
    my_putstr(cs_text[5]);
    my_putstr("Give me your brain please ! I need food !\n");
    my_putstr(cs_cmd[0]);
    my_putstr("It's not like there is much to eat...\n");
}
void stage5(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[1]);
    my_putstr("\tTHE CLOWN BOZO\n");
    my_putstr(cs_cmd[0]);
    my_putstr("There is a clown here. He's not doing anything and doesn't seems to be interested by you. You could just go and let him be ?\n");
    my_putstr("Or ... Save the children from years of therapy !\n");
    my_putstr("Let's be the good guys for once ! :)\n");
}
void stage6(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[1]);
    my_putstr("\tTHE BEER TRAP (or guet-apinte)\n");
    my_putstr(cs_cmd[0]);
    my_putstr("This is THE place to be... The CARRE ! Your friends are waving at you. You should go see them right ?\n");
}
void stage7(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[1]);
    my_putstr("\tTHE SMOKER\n");
    my_putstr(cs_cmd[0]);
    my_putstr(cs_text[5]);
    my_putstr("Hey ! T'as pas une cloppe ? Stp jte rembourse !\n");
    my_putstr(cs_cmd[0]);
    my_putstr("He's speaking nonsense. He sould be the one giving you a cigarette !\n");
}
void stage8(void)
{
    my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[1]);
    my_putstr("\tTHE COPPY PASTERS\n");
    my_putstr(cs_cmd[0]);
    my_putstr(cs_text[5]);
    my_putstr("COME ON MY FRIEND ! I NEED SOME CODE ! GIVE ME SOME !\n");
    my_putstr(cs_cmd[0]);
    my_putstr("Run, or CRUSH E V E R Y   LAST ONE OF THEM HAhahAHAhaHaAaAHaA !\n");
}
void stage9(void)
{
my_putstr(cs_cmd[1]);
    my_putstr(cs_cmd[3]);
    my_putstr(cs_text[1]);
    my_putstr("\tTHE ULTIMATE CHALLENGE\n");
    my_putstr(cs_cmd[0]);
    my_putstr(cs_text[5]);
    my_putstr("You did well to be able to face me...\n");
    my_putstr(cs_cmd[0]);
    my_putstr("Be careful ! It's the infamous grinder of souls !...\n");
    my_putstr(cs_text[1]);
    my_putstr(cs_cmd[3]);
    my_putstr("\tTHE MOULINETTE\n");
    my_putstr(cs_cmd[0]);
    my_putstr("Destroy it ! And unravel the truth of it's existence !");
}

void start_messages(int stage)
{
    switch ( stage )
{
    case 0:
        stage0();
        break;
    case 1:
        stage1();
        break;
    case 2:
        stage2();
        break; 
    case 3:
        stage3();
        break;
    case 4:
        stage4();
        break;
    case 5:
        stage5();
        break;
    case 6:
        stage6();
        break;
    case 7:
        stage7();
        break;
    case 8:
        stage8();
        break;
    case 9:
        stage9();
        break;
    default:
        my_putstr(cs_text[0]);
        my_putstr(cs_bg[0]);
        my_putstr("It seems you've entered the deepest limbo ...");
        my_putstr(cs_cmd[0]);
        my_putstr("\n");
}
}
