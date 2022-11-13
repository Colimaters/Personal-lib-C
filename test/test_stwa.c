/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(test_stwa, basic)
{
    const char *str = "f1;f2;f3;f4";
    char **res = stwa(str, ';');

    cr_assert_str_eq(res[0], "f1");
    cr_assert_str_eq(res[1], "f2");
    cr_assert_str_eq(res[2], "f3");
    cr_assert_str_eq(res[3], "f4");
}

Test(test_stwa, other_separator)
{
    const char *str = "f1;f2;f3;f4";
    char **res = stwa(str, '#');

    cr_assert_str_eq(res[0], "f1;f2;f3;f4");
}

Test(test_stwa, error_str)
{
    cr_assert_eq(stwa(NULL, ';'), NULL);
}