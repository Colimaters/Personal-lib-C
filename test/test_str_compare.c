/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(test_str_compare, basic)
{
    cr_assert_eq(str_compare("", ""), true);
    cr_assert_eq(str_compare("F1", "F1"), true);
    cr_assert_eq(str_compare("f1", "F1"), false);
    cr_assert_eq(str_compare("vouavoauvou", "F1"), false);
    cr_assert_eq(str_compare("F1", "vouavoauvou"), false);
}

Test(test_str_compare, error_str)
{
    cr_assert_eq(str_compare(NULL, "vouav"), false);
    cr_assert_eq(str_compare("NULL", NULL), false);
}

Test(test_str_compare, specific_case)
{
    cr_assert_eq(str_compare(NULL, NULL), true);
}