/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(char_is, test_char_isnum)
{
    cr_assert_eq(char_isnum('a'), false);
    cr_assert_eq(char_isnum('A'), false);
    cr_assert_eq(char_isnum('-'), false);
    cr_assert_eq(char_isnum('0'), true);
    cr_assert_eq(char_isnum('9'), true);
}

Test(char_is, test_char_isupper)
{
    cr_assert_eq(char_isupper('a'), false);
    cr_assert_eq(char_isupper('A'), true);
    cr_assert_eq(char_isupper('Z'), true);
    cr_assert_eq(char_isupper('-'), false);
    cr_assert_eq(char_isupper('0'), false);
    cr_assert_eq(char_isupper('9'), false);
}


Test(char_is, test_char_islower)
{
    cr_assert_eq(char_islower('a'), true);
    cr_assert_eq(char_islower('z'), true);
    cr_assert_eq(char_islower('A'), false);
    cr_assert_eq(char_islower('Z'), false);
    cr_assert_eq(char_islower('|'), false);
    cr_assert_eq(char_islower('0'), false);
    cr_assert_eq(char_islower('9'), false);
}


Test(char_is, test_char_isalpha)
{
    cr_assert_eq(char_isalpha('a'), true);
    cr_assert_eq(char_isalpha('z'), true);
    cr_assert_eq(char_isalpha('A'), true);
    cr_assert_eq(char_isalpha('Z'), true);
    cr_assert_eq(char_isalpha('-'), false);
    cr_assert_eq(char_isalpha('0'), false);
    cr_assert_eq(char_isalpha('9'), false);
}


Test(char_is, test_char_isalphanum)
{
    cr_assert_eq(char_isalphanum('a'), true);
    cr_assert_eq(char_isalphanum('z'), true);
    cr_assert_eq(char_isalphanum('A'), true);
    cr_assert_eq(char_isalphanum('Z'), true);
    cr_assert_eq(char_isalphanum('-'), false);
    cr_assert_eq(char_isalphanum('0'), true);
    cr_assert_eq(char_isalphanum('9'), true);
}
