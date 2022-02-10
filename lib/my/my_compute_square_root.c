/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int i = 1;

    if (nb < 0)
        return (0);
    if (nb == 0)
        return (0);
    else if (nb == 1)
        return (1);
    else
    {
        while (i*i != nb){
            if (i > nb)
                return (0);
            i++;
        }
    }
    return (i);
}
