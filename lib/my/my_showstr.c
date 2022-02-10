/*
** EPITECH PROJECT, 2020
** my_showstr
** File description:
** my_showstr
*/

void my_putchar(char c);

int my_showstr(char const *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
        if (str[i] < 32 || str[i] > 127)
        {
            my_putchar('\\');
            my_putchar(str[i]);
        }
        else
        {
            my_putchar(str[i]);
        }
        i++;
    }
}
