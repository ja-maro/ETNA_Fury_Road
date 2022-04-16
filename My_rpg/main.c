/*
** ETNA PROJECT, 15/04/2022 by charda_p, maro_j, pondav_j
** File description:
**      Our very own CLI RPG !
*/

#include "main_header.h"

void heal_self(Player_t *player, int max_hp)
{
    player->hp += max_hp / 2;
    player->hp = (player->hp > max_hp ? max_hp : player->hp);
    my_putstr("No, you're going to be late ! Start running !\n");
    my_putstr("Wait ... they're following you ?!\n");
}

void player_attack(Player_t *player, Enemy_t *enemy)
{
    time_t t;
    enemy->hp -= player->str;
    my_putstr(enemy->def_msg);
    my_putstr("\n");
    srand((unsigned) time(&t));
    if (rand()%100 < player->luck) {
        enemy->hp -= player->str;
        my_putstr("\nCritical !\n");
    }
}

void enemy_attack(Player_t *player, Enemy_t *enemy)
{
    player->hp -= enemy->str;
    my_putstr(enemy->name);
    my_putstr(": ");
    my_putstr(enemy->atk_msg);
    if (enemy->str > 0) {
        time_t t;
        srand((unsigned) time(&t));
        if (rand()%100 < enemy->luck) {
            player->hp -= enemy->str;
            my_putstr("\nCritical !\nYou lose ");
            my_putnbr(enemy->str * 2);
        }
        else {
            my_putstr("\nYou lose ");
            my_putnbr(enemy->str);
        }
        my_putstr(" minutes.\n");
    }
}

void boss_attack(Player_t *player, Boss_t *boss)
{
    player->hp -= boss->str;
    my_putstr(boss->name);
    my_putstr(" strikes !\nYou lose ");
    my_putnbr(boss->str);
    my_putstr(" minutes.\n");
}

void player_boss_attack(Player_t *player, Boss_t *boss)
{
    time_t t;
    boss->hp -= player->str;
    /*my_putstr(boss->def_msg);
    my_putstr("\n");*/
    srand((unsigned) time(&t));
    if (rand()%100 < player->luck) {
        boss->hp -= player->str;
        my_putstr("\nCritical !\n");
    }
}

int main()
{
    char *input;
    int player_max_hp;
    /* int enemy_max_hp; */
    int stage = 0;
    const int LAST_STAGE = 9;
    Enemy_t **enemies = init_enemy();
    Boss_t **bosses = init_boss();
    Player_t **players = init_player();
    Player_t *curr_player = malloc(sizeof(Player_t));
    Enemy_t *curr_enemy;
    Boss_t *curr_boss = malloc(sizeof(curr_boss));

    curr_player = players[0];
    player_max_hp = curr_player->hp;
    curr_boss = bosses[0];

    my_putchar('\n');

    /* readline loop */
    while (stage < LAST_STAGE && curr_player->hp > 0) {
        
        curr_enemy = enemies[stage];
        /* enemy_max_hp = curr_enemy->hp; */
        if (stage == 0)
            rpg_intro();

        my_putstr("\n");
        my_putnbr(curr_player->hp);
        my_putstr(" minutes left.\n\n");
        start_messages(stage);

        while (curr_enemy->hp > 0) {
            my_putstr("\t[a] act \t \t[r] run :\t");
            input = my_readline();
            while (input == NULL ||(my_strcmp(input, "a") != 0 && my_strcmp(input, "r") != 0)) {
                my_putstr("\t[a] act \t \t[r] run :\t");
                input = my_readline();
            }
            if (my_strcmp(input, "a") == 0) {
                player_attack(curr_player, curr_enemy);
                if (curr_enemy->hp <= 0)
                    break;
            } else if (my_strcmp(input, "r") == 0) {
                heal_self(curr_player, player_max_hp);
            }
            free(input);
            enemy_attack(curr_player, curr_enemy);
            my_putnbr(curr_player->hp);
            my_putstr(" minutes left.\n");
            if (curr_player->hp < 0) {
                my_putstr("\n");
                end_messages(11);
                break;
            }
        }
        if(curr_player->hp < 0)
            break;
        my_putstr("\n");
        /* end messages */
        end_messages(stage);
        ++stage;
    }

    while (stage == LAST_STAGE && curr_player->hp > 0 && curr_boss->hp > 0) {
        my_putstr("\n");
        my_putnbr(curr_player->hp);
        my_putstr(" minutes left.\n\n");
        start_messages(stage);


         while (curr_boss->hp > 0) {
            my_putstr("\t[a] act \t \t[r] run :\t");
            input = my_readline();
            while (input == NULL ||(my_strcmp(input, "a") != 0 && my_strcmp(input, "r") != 0)) {
                my_putstr("\t[a] act \t \t[r] run :\t");
                input = my_readline();
            }
            if (my_strcmp(input, "a") == 0) {
                player_boss_attack(curr_player, curr_boss);
                if (curr_boss->hp <= 0)
                    break;
            } else if (my_strcmp(input, "r") == 0) {
                heal_self(curr_player, player_max_hp);
            }
            free(input);
            boss_attack(curr_player, curr_boss);
            my_putnbr(curr_player->hp);
            my_putstr(" minutes left.\n");
            if (curr_player->hp < 0) {
                my_putstr("\n");
                end_messages(11);
                break;
            }
        }



    }
    if (curr_player->hp > 0)
        end_messages(stage);
    return 0;
}
