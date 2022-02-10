/*
** EPITECH PROJECT, 2020
** test
** File description:
** test
*/

#include <unistd.h>
#include "../include/bsq.h"
#include <stdlib.h>

int	test_tab(int count_save, char **tab, int x, int y)
{
    int	i;

    i = 1;
    if (tab[y][x] != '.')
        return (0);
    while (i < count_save)
    {
        if (tab[y][x + i] != '.'  || tab[y + i][x] != '.')
            return (0);
        i = i + 1;
    }
    return (1);
}

void test_char(char c)
{
    if (c != '.' && c != 'o' && c != '\n' && c != '\0')
    {
        write(2, "Error file\n", 16);
        exit(84);
    }
}

