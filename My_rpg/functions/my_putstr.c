/*
** ETNA PROJECT, 13/04/2022 by maro_j
** /home/jean-antoine/ETNA/CTW/Piscine
** File description:
**      my_putstr displays, one-by-one, the characters of a string
*/

void my_putchar(char c);

void my_putstr(const char *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        ++str;
    }
}
