/*
** EPITECH PROJECT, 2020
** BSQ.H
** File description:
** BSQ.H
*/

void test_file(char *tab);
int my_printf(char *primary_string, ...);
int	strnbline(char *str);
int my_putchar(char );
char my_putstr(char *str);
void test_char(char c);
void string_tab(char *string, char **tab, int a, int b);
int malloc_tab(char **tab, char *string);
char **create_tab(char *string);
int	strlencharline(char *str);
int	test_tab(int tmp, char **tab, int width, int lenght);
void square_construction(char **tab, int y, int x);
char	*my_realloc(char *buff, char *fullbuffer, int len);

#ifndef _MY_SQUARE_
# define _MY_SQUARE_

typedef struct s_square
{
    int	i;
    int	count;
    int	count_save;
    int	x_save;
    int	y_save;
    int	y;
    int	x;
    int posx;
    int	posy;
}t_square;

#endif /* _MY_SQUARE_ */

/*
 while(string[i] != '\n')
    {
        my_putchar(string[i]);
        i++;
    }
    my_putchar('\n');
    while (a != strnbline(string))
    {
        my_putstr(tab[a]);
        my_putchar('\n');
        a++;
    }
 */