/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** my_strncpy
*/

#include <criterion/criterion.h>

char *my_strncpy(char *dest , char  const *src , int n)
{
    int i;

    for (i = 0 ; i < n ; i++)
        dest[i] = src[i];

    if (n > 1) {
        dest[i] = '\0';
    }

    return (dest);
}

