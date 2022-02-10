/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** my_strcapitalize
*/

char *my_strcapitalize(char *str)
{
    int i = 1;

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    while (str[i] != '\0')
    {
        if ((str[i - 1] >= 32 && str[i - 1] <= 47) || str[i - 1] <= ';')
            if (str[i] <= 'z' && str[i] >= 'a')
                str[i] = str[i] - 32;
        i = i + 1;
    }
    return (str);
}
