/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** my_compute_power_rec
*/

int raised(int nb, int p)
{
    int result;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    if (nb == 0)
        return (1);
    else
    {
        result = (nb * raised(nb, p-1));
    }
    if (result >= 2147483648 || result <= -2147483648)
        return (0);
    return (result);
}

int my_compute_power_rec(int nb, int p)
{
    raised (nb, p);
    return (raised(nb, p));
}
