/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
