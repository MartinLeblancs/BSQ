/*
** EPITECH PROJECT, 2020
** utils
** File description:
** utils
*/

#include "../include/bsq.h"
#include <stdlib.h>
#include <unistd.h>

int	strlencharline(char *str)
{
    int	i;
    int	a;

    i = 0;
    a = 0;
    while (str[i] != '\n')
    {
        i = i + 1;
        a = a + 1;
    }
    i = i + 1;
    a = a + 1;
    while (str[i] != '\n' && str[i] != '\0')
        i = i + 1;
    return (i - a);
}

int	strnbline(char *str)
{
    int	i = 0;
    int count = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '\n')
            count = count + 1;
        i = i + 1;
    }
    if (str[i - 1] == '\n')
        count = count - 1;
    return (count);
}

int	empty_file(char c)
{
    if (c == '\0')
    {
        write(2, "Error file\n", 11);
        return (84);
    }
}

char **create_tab(char *string)
{
    int	i = 0;
    int a = 0;
    int b = 0;
    char **tab;
    int count;

    tab = malloc(sizeof(*tab) * (strnbline(string) + 1));
    while (i < strnbline(string))
    {
        tab[i] = malloc(sizeof(tab) * (strlencharline(string) + 1));
        i = i + 1;
    }

    i = 0;

    while (string[i] != '\n' && string[i] != '\0')
        i = i + 1;
    i = i + 1;
    empty_file(string[i + 1]);
    while (string[i] != '\0')
    {
        count++;
        test_char(string[i]);
        if (string[i] == '\n' || string[i] == '\0')
        {
            if (count - 1 != strlencharline(string))
            {
                write (2, "Error file\n", 11);
                exit (84);
            }
            count = 0;
            tab[a][b] = '\0';
            a = a + 1;
            b = 0;
        }
        else
        {
            tab[a][b] = string[i];
            b = b + 1;
        }
        i = i + 1;
    }

    return (tab);
}

