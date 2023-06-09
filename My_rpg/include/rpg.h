/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** rpg
*/

#ifndef RPG_H_
#define RPG_H_
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct Player {
    const char *name;
    int hp;
    int mp;
    int str;
    int inte;
    int def;
    int res;
    int spd;
    int luck;
} Player_t;


typedef struct Enemy_s
{
    char *name;
    char *atk_msg;
    char *def_msg;
    int hp;
    int mp;
    int str;
    int inte;
    int def;
    int res;
    int spd;
    int luck;
}Enemy_t;

typedef struct Boss_s
{
    char *name;
    int hp;
    int mp;
    int str;
    int inte;
    int def;
    int res;
    int spd;
    int luck;
}Boss_t;

typedef struct Item_S
{
    char *name;
    int hp;
    int mp;
    int str;
    int inte;
    int def;
    int res;
    int spd;
    int luck;
}Item_t;

#endif /* !RPG_H_ */
