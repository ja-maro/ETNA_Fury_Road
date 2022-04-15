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

    /* readline loop */
    while (stage < LAST_STAGE && curr_player->hp > 0) {
        if (player_max_hp > curr_player->hp)
            my_putstr("Vous êtes blessé.\n");
        
        curr_enemy = enemies[stage];
        enemy_max_hp = curr_enemy->hp;
        /* my_putstr("\033[H\033[J"); */
        if (stage == 0)
            rpg_intro();
        
        printf("%s\n", curr_enemy->name);

        while (curr_enemy->hp > 0) {
            my_putstr("L'ennemi vous fait face ! \n");
            if (curr_enemy->hp < enemy_max_hp) {
                my_putstr("Il est blessé !\n");
            } else {
                my_putstr("Il est indemne !\n");
            }
            input = my_readline();
            while (input == NULL) {
                input = my_readline();
            }
            if (my_strcmp(input, "a") == 0) {
                curr_enemy->hp -= curr_player->str;
                if (curr_enemy->hp <= 0) {
                    my_putstr("Vous l'avez tué !\n");
                } else {
                    my_putstr("Vous attaquez avec violence !\n");
                }
            } else if (my_strcmp(input, "h") == 0) {
                curr_player->hp += player_max_hp / 2;
                curr_player->hp = (curr_player->hp > player_max_hp ? player_max_hp : curr_player->hp);
                my_putstr("Vous vous soignez\n");
            }
            free(input);

            my_putstr("Le monstre riposte !\n");
            curr_player->hp -= curr_enemy->str;

        }
        
        my_putstr("Vers le stage suivant.\n\n");
        ++stage;
    }

    if(curr_player->hp < 0)
        my_putstr("\nVous êtes mort.\n");


    return 0;
}