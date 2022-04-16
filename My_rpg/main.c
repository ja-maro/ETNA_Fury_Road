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

void my_loot( Item_t **item) {
   int i;
   int n= 1;
   time_t t;

   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 1 random numbers from 0 to 7 */
   for( i = 0 ; i < n ; i++ ) {
      int number =  rand() % 100;
      if (number >= 0 && number <= 49) {
        int number =  rand() % 2;
        if (number == 0) {
           my_putstr(item[0] -> name);
        }
        else {
           my_putstr(item[1] -> name);
      }
      }
      else if (number > 49 && number <= 79) {
        int number =  rand() % 2;
        if (number == 0) {
            my_putstr(item[2] -> name);
        }
        else {
            my_putstr(item[3] -> name);
      }
      }
      else if (number >79 && number <= 94) {
        int number =  rand() % 2;
        if (number == 0) {
            my_putstr(item[4] -> name);
        }
        else {
            my_putstr(item[5] -> name);
        }
      }
      else if (number >94 && number <= 98) {
        int number =  rand() % 2;
        if (number == 0) {
            my_putstr(item[6] -> name);
        }
        else {
            my_putstr(item[7] -> name);
        }

      }
      else if (number >98 && number == 99) {
        int number =  rand() % 2;
        if (number == 0) {
            my_putstr(item[8] -> name);
        }
        else {
            my_putstr(item[9] -> name);
        }
      }
   }
}

void use_item(Player_t *player, Item_t *item)
{
    if (item->hp > 0) {
        player->hp += item->hp;
        my_putstr("You picked up a ");
        my_putstr(item->name);
        my_putstr("it adds: ");
        my_putnbr(item->hp);
        my_putstr(" to your health\n");
        my_putstr("\n");
    }
    if (item->mp > 0) {
        player->mp += item->mp;
        my_putstr("You picked up a ");
        my_putstr(item->name);
        my_putstr("it adds: ");
        my_putnbr(item->mp);
        my_putstr(" to your magic points\n");
        my_putstr("\n");
    }
    if (item->str > 0) {
        player->str += item->str;
        my_putstr("You picked up a ");
        my_putstr(item->name);
        my_putstr("it adds: ");
        my_putnbr(item->str);
        my_putstr(" to your strength\n");
        my_putstr("\n");
    }
    if (item->inte > 0) {
        player->inte += item->inte;
        my_putstr("You picked up a ");
        my_putstr(item->name);
        my_putstr("it adds:");
        my_putnbr(item->inte);
        my_putstr(" to your intelligence\n");
        my_putstr("\n");
    }
    if (item->def > 0) {
        player->def += item->def;
        my_putstr("You picked up a ");
        my_putstr(item->name);
        my_putstr("it adds:");
        my_putnbr(item->def);
        my_putstr(" to your defense\n");
        my_putstr("\n");
    }
    if (item->res > 0) {
        player->res += item->res;
        my_putstr("You picked up a ");
        my_putstr(item->name);
        my_putstr("it adds:");
        my_putnbr(item->res);
        my_putstr(" to your resistance\n");
        my_putstr("\n");
    }
    if (item->spd > 0) {
        player->spd += item->spd;
        my_putstr("You picked up a ");
        my_putstr(item->name);
        my_putstr("it adds:");
        my_putnbr(item->spd);
        my_putstr(" to your speed\n");
        my_putstr("\n");
    }
    if (item->luck > 0) {
        player->luck += item->luck;
        my_putstr("You picked up a ");
        my_putstr(item->name);
        my_putstr("it adds:");
        my_putnbr(item->luck);
        my_putstr(" to your luck\n");
        my_putstr("\n");
    }
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

int main()
{
    char *input;
    int player_max_hp;
    /* int enemy_max_hp; */
    int stage = 0;
    const int LAST_STAGE = 9;
    Enemy_t **enemies = init_enemy();
    /* Boss_t **bosses = init_boss(); */
    Player_t **players = init_player();
    Player_t *curr_player = malloc(sizeof(Player_t));
    Enemy_t *curr_enemy;
    Item_t **items = init_item();


    curr_player = players[0];
    player_max_hp = curr_player->hp;

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
    return 0;
}
