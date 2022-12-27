/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/listing_function.h"

static short count(int nb)
{
    short c = 0;

    if (nb == 0)
        return 1;
    if (nb < 0) {
        ++c;
        nb = -nb;
    }
    while (nb > 0) {
        nb /= 10;
        ++c;
    }
    return (c);
}

char *int_to_str(int nb)
{
    int c = count(nb);
    char *str = smalloc(c + 1);
    int tmp = nb;

    if (!str)
        return (my_putstr_err("int_to_str() : str was NULL\n"), NULL);
    if (nb == 0)
        str[0] = '0';
    if (nb < 0) {
        str[0] = '-';
        tmp = -nb;
    }
    for (; tmp > 0; tmp /= 10) {
        str[--c] = tmp % 10 + '0';
    }
    return (str);
}
