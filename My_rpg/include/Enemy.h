/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** Enemys
*/

#ifndef ENEMYS_H_
#define ENEMYS_H_
#include "rpg.h"

char *Enemy_name[] = {
    "THE COMFY BED",
    "THE PARTNER",
    "THE PUNK GRANNY",
    "THE TRAIN CONTROLLER",
    "THE ZOMBIE HOBO",
    "THE CLOWN",
    "THE BEER TRAP",
    "THE SMOKER",
    "THE COPY PASTERS",
    "THE SURPRISE"
};

char *Enemy_atk_msg[] = {
    "It is just soooo comfy !",
    "Your studies are important, but what do they mean in the face of true love ?",
    "That chihuahua has sharp teeth ! Let's stear clear of the pest !",
    "The access gates won't budge !",
    "You search your bag. Maybe you have something to give to that poor soul ?",
    "He tries to get away ?! Coward !\n",
    "Chug ! Chug ! Chug !",
    "Ten a pa 1 autre ? Allé stp !",
    "MOARE CODE ! MOOOOOOORE !",
    "THE SURPRISE"
};

char *Enemy_def_msg[] = {
    "No ! You must ... resist !",
    "It's the last kiss, then I'll go !",
    "DOUBLE JUMP KICK !",
    "Here's a metro ticket ... IN YOUR FACE !",
    "Sorry, I don't have any change ... BUT I HAVE FISTS !",
    "YOU MONSTER ! TAKE THAT !",
    "My record is one pint in less than 15 seconds !",
    "Here, take one !",
    "Just go check stackoverflow, damnit !",
    "THE SURPRISE"
};

int Enemy_hp[] = {
    30,
    30,
    20,
    40,
    30,
    20,
    30,
    30,
    40,
    100
};

int Enemy_mp[] = {
    10,
    20,
    30,
    40,
    50,
    60,
    70,
    80,
    90,
    100
};

int Enemy_str[] = {
    5,
    5,
    10,
    5,
    10,
    0,
    5,
    5,
    10,
    100
};

int Enemy_inte[] = {
    10,
    20,
    30,
    40,
    50,
    60,
    70,
    80,
    90,
    100
};

int Enemy_def[] = {
    10,
    20,
    30,
    40,
    50,
    60,
    70,
    80,
    90,
    100
};

int Enemy_res[] = {
    10,
    20,
    30,
    40,
    50,
    60,
    70,
    80,
    90,
    100
};

int Enemy_spd[] = {
    10,
    20,
    30,
    40,
    50,
    60,
    70,
    80,
    90,
    100
};

int Enemy_luck[] = {
    10,
    20,
    30,
    40,
    50,
    60,
    70,
    80,
    90,
    100
};

#endif /* !ENEMYS_H_ */
