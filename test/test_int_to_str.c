/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(test_int_to_str, regular_test)
{
    cr_assert_str_eq(int_to_str(12), "12");
    cr_assert_str_eq(int_to_str(1546), "1546");
    cr_assert_str_eq(int_to_str(-10), "-10");
    cr_assert_str_eq(int_to_str(-10000), "-10000");
    cr_assert_str_eq(int_to_str(0), "0");
    cr_assert_str_eq(int_to_str(000000000), "0");
}
