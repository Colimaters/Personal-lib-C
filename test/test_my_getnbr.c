/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(test_my_getnbr, regular_test)
{
    cr_assert_eq(my_getnbr(NULL), 0);
    cr_assert_eq(my_getnbr("42"), 42);
    cr_assert_eq(my_getnbr("-42"), -42);
    cr_assert_eq(my_getnbr("ujyfcgksbey42skfhslfzue"), 42);
    cr_assert_eq(my_getnbr("---++++++++--42"), -42);
    cr_assert_eq(my_getnbr("---++++++++--42-"), -42);
}

/*
long my_getnbr(const char * const str)
{
    int i = 0;
    int neg = 0;
    int mul = 1;
    long res = 0;

    if (!str)
        return (my_putstr_err("my_getnbr() : str was NULL\n"), 0);
    for (; !char_isnum(str[i]); ++i)
        str[i] == '-' ? ++neg : neg;
    for (; char_isnum(str[i]); ++i);
    for (--i; char_isnum(str[i]); --i, mul *= 10)
        res = (str[i] - 48) * mul + res;
    if (neg % 2 == 1)
        res *= -1;
    return (res);
}
*/