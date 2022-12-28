/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(test_my_strlen, regular_test)
{
    cr_assert_eq(my_strlen(NULL), 0);
    cr_assert_eq(my_strlen("F1"), 2);
    cr_assert_eq(my_strlen(""), 0);
}
