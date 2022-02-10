/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** BSQ
*/

#include "../include/bsq.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFF_SIZE (10000)

int bsq(char *string)
{
    char **tab;

    tab = create_tab(string);
    square_construction(tab, strnbline(string) - 1, strlencharline(string) - 1);
}

int main(int ac, char **av)
{
    int file;
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len;
    int count = 0;

    if (ac != 2)
    {
        write (2, "Wrong number of arguments\n", 26);
        return (84);
    }
    file = open(av[1], O_RDONLY);
    if (file == -1) {
        write(2, "File only\n", 10);
        return (84);
    }
    while ((len = read(file , buff + offset , BUFF_SIZE - offset)) > 0)
    {
        offset = offset + len;
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84);

    bsq(buff);
    close(file);

    return 0;
}