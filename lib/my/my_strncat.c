/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int long1 = 0;
    int i;

    while (dest[long1] != '\0')
        ++long1;

    for (i = 0 ; i < nb && src[i] != '\0' ; i++)
        dest[long1 + i] = src[i];
    dest[long1 + i] = '\0';

    return dest;
}

