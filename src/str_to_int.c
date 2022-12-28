/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/listing_function.h"

int str_to_int(const char * const str)
{
    int mul = 1;
    int res = 0;

    if (!str)
        return (my_putstr_err("str_to_int() : str was NULL\n"), 0);
    for (unsigned long i = my_strlen(str) - 1; char_isnum(str[i]); --i, mul *= 10)
        res = (str[i] - 48) * mul + res;
    if (str[0] == '-')
        res *= -1;
    return (res);
}

