/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** my_strstr
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int start = 0;

    while (str[i] != '\0' && to_find[j] != '\0')
    {
        if (str[i] == to_find[j])
        {
            if (j == 0)
                start = i;
            j = j + 1;
        }
        else
            j = 0;
        i = i + 1;
    }

    if (to_find[j] == '\0')
        return (&str[start]);
    else
        return (0);
}
