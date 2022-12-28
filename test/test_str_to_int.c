/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(test_str_to_int, regular_test)
{
    cr_assert_eq(str_to_int(NULL), 0);
    cr_assert_eq(str_to_int("12"), 12);
    cr_assert_eq(str_to_int("-12"), -12);
    cr_assert_eq(str_to_int("0"), 0);
}
