/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** my_revstr
*/

int  my_strlen(char *str);

char *my_revstr(char *str)
{
    char temp;
    int i;
    int lenght;

    i = 0;
    lenght = my_strlen(str) - 1;
    while (i <= lenght / 2)
    {
        temp = str[i];
        str[i] = str[lenght - i];
        str[lenght - i] = temp;
        i += 1;
    }
    return (str);
}

