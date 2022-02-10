/*
** EPITECH PROJECT, 2020
** square_construction
** File description:
** square_construction
*/

#include "../include/bsq.h"

void	display(char **tab, int posx, int posy, int count)
{
    int	i;
    int j;
    int	count_save;

    j = 0;
    count_save = count - 1;
    i = count - 1;
    while (i > 0)
    {
        while (count_save > 0)
        {
            tab[posx][posy - j] = 'x';
            j = j + 1;
            count_save = count_save - 1;
        }
        count_save = count - 1;
        j = 0;
        posx = posx - 1;
        i = i - 1;
    }
}

void	find_square2(char **tab, int *y, int *x, struct s_square *square)
{
    square->x_save = *x;
    square->y_save = *y;
    square->count_save = 1;

    while (*y >= 0 && *x >= 0 && test_tab(square->count_save, tab, *x,
                                                   *y) == 1)
    {
        *y = *y - 1;
        *x = *x - 1;
        square->count_save = square->count_save + 1;
    }
    if (square->count_save >= square->count)
    {
        square->count = square->count_save;
        square->posx = *y + square->count - 1;
        square->posy = *x + square->count - 1;
    }
    *x = square->x_save;
    *y = square->y_save;
    *x = *x - 1;
}

void	find_square(char **tab, int *y, int *x, struct s_square *square)
{
    if (tab[*y][*x] == 'o' && *x != 0)
        *x = *x - 1;
    else if (*x == 0)
    {
        *y = *y - 1;
        *x = square->x;
    }
    else if (tab[*y][*x] == '.')
        find_square2(tab, y, x, square);
    square->i = square->i + 1;
}

int	diplay2(char **tab)
{
    int	a;
    int	b;

    a = 0;
    b = 0;
    while (tab[a][b] != 0)
    {
        if (tab[a][b] == '.')
        {
            tab[a][b] = 'x';
            return (0);
        }
        else if (tab[a][b] == 'o')
            b = b + 1;
        else
        {
            b = 0;
            a = a + 1;
        }
    }
    return (0);
}

void square_construction(char **tab, int y, int x)
{
    struct s_square square;

    square.y = y;
    square.x = x;
    square.count = 0;
    square.i = 0;
    square.count_save = 0;

    while (square.i < (square.y + 1) * (square.x + 1))
        find_square(tab, &y, &x, &square);
    if (square.count > 2)
        display(tab, square.posx, square.posy, square.count);
    else
        diplay2(tab);
    square.i = 0;
    while (square.i <= square.y)
    {
        my_putstr(tab[square.i]);
        my_putchar('\n');
        square.i = square.i + 1;
    }
}
