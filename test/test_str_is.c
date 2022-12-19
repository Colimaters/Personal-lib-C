/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(str_is, test_str_isnum)
{
    cr_assert_eq(str_isnum(NULL), false);
    cr_assert_eq(str_isnum("aa"), false);
    cr_assert_eq(str_isnum("AA"), false);
    cr_assert_eq(str_isnum("--"), false);
    cr_assert_eq(str_isnum("00"), true);
    cr_assert_eq(str_isnum("99"), true);
}

Test(str_is, test_str_isalpha)
{
    cr_assert_eq(str_isalpha(NULL), false);
    cr_assert_eq(str_isalpha("aa"), true);
    cr_assert_eq(str_isalpha("zz"), true);
    cr_assert_eq(str_isalpha("AA"), true);
    cr_assert_eq(str_isalpha("ZZ"), true);
    cr_assert_eq(str_isalpha("--"), false);
    cr_assert_eq(str_isalpha("00"), false);
    cr_assert_eq(str_isalpha("99"), false);
}

Test(str_is, test_str_isalphanum)
{
    cr_assert_eq(str_isalphanum(NULL), false);
    cr_assert_eq(str_isalphanum("aa"), true);
    cr_assert_eq(str_isalphanum("zz"), true);
    cr_assert_eq(str_isalphanum("AA"), true);
    cr_assert_eq(str_isalphanum("ZZ"), true);
    cr_assert_eq(str_isalphanum("--"), false);
    cr_assert_eq(str_isalphanum("00"), true);
    cr_assert_eq(str_isalphanum("99"), true);
}