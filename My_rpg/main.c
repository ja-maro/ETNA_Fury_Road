/*
** ETNA PROJECT, 15/04/2022 by charda_p, maro_j, pondav_j
** File description:
**      Our very own CLI RPG !
*/

#include "main_header.h"

void init_curr_player(Player_t *src, Player_t *current)
{
    current->hp = src->hp;
    current->mp = src->mp;
    current->str = src->str;
    current->inte = src->inte;
    current->def = src->def;
    current->res = src->res;
    current->spd = src->spd;
    current->luck = src->luck;
}

void heal_self(Player_t *player, int max_hp)
{
    player->hp += max_hp / 2;
    player->hp = (player->hp > max_hp ? max_hp : player->hp);
    my_putstr("No, you're going to be late ! Start running !\n");
    my_putstr("Wait ... they're following you ?!\n");
}

void player_attack(Player_t *player, Enemy_t *enemy)
{
    enemy->hp -= player->str;
    my_putstr("You punch them !\n");
}

void enemy_attack(Player_t *player, Enemy_t *enemy)
{
   time_t t;
   srand((unsigned) time(&t));
   if (rand()%2 == 0) {
       player->hp -= enemy->str;
       my_putstr("You've been hit !\n");
   }
   else {
       player->hp -= enemy->str * 2;
       my_putstr("You've been critically hit !\n");
   }
}

int main()
{
    char *input;
    int player_max_hp;
    int enemy_max_hp;
    int stage = 0;
    const int LAST_STAGE = 9;
    Enemy_t **enemies = init_enemy();
    /* Boss_t **bosses = init_boss(); */
    Player_t **players = init_player();
    Player_t *curr_player = malloc(sizeof(Player_t));
    Enemy_t *curr_enemy;

    /* init_curr_player(players[0], curr_player); */
    curr_player = players[0];
    player_max_hp = curr_player->hp;
    my_putstr("Nom du joueur : ");
    my_putstr(curr_player->name);
    my_putstr("\n");

            my_putnbr(60);
            my_putchar('\n');
            my_putstr("HP left : ");
            my_putnbr(curr_player->hp);
            my_putchar('\n');

    /* readline loop */
    while (stage < LAST_STAGE && curr_player->hp > 0) {
        if (player_max_hp > curr_player->hp)
            my_putstr("You are hurt.\n");

        curr_enemy = enemies[stage];
        enemy_max_hp = curr_enemy->hp;
        if (stage == 0)
            rpg_intro();

        my_putstr("\n");
        start_messages(stage);

        while (curr_enemy->hp > 0) {
            my_putstr("The enemy stands in front of you ! \n");
            if (curr_enemy->hp < enemy_max_hp) {
                my_putstr("The enemy seems hurt !\n");
            }
            my_putstr("[a] to attack\t[r] to run :\t");
            input = my_readline();
            while (input == NULL ||(my_strcmp(input, "a") != 0 && my_strcmp(input, "r") != 0)) {
                my_putstr("[a] to attack\t[r] to run :\t");
                input = my_readline();
            }
            if (my_strcmp(input, "a") == 0) {
                player_attack(curr_player, curr_enemy);
                if (curr_enemy->hp <= 0) {
                    my_putstr("You are the victor !\n");
                }
            } else if (my_strcmp(input, "r") == 0) {
                heal_self(curr_player, player_max_hp);
            }
            free(input);
            enemy_attack(curr_player, curr_enemy);
            my_putstr("Minutes left : ");
            my_putnbr(curr_player->hp);
            my_putchar('\n');
            if (curr_player->hp < 0) {
                my_putstr("\nYou've wasted too much time ...\nYou're late now. Florence will not let you in.\n");
                break;
            }
        }
        if(curr_player->hp < 0)
            break;
        my_putstr("Ok, let's go to the school, we're still on time !\n\n");
        ++stage;
    }

    return 0;


}
