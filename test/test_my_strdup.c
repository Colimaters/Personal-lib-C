/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(test_my_strdup, null_test)
{
    cr_assert_eq(my_strdup(NULL), NULL);
}

Test(test_my_strdup, regular_test)
{
    char *dest = NULL;
    char *src = smalloc(3);

    src[0] = 'F';
    src[1] = '1';
    src[2] = '\0';

    cr_assert_neq(src, dest);
    cr_assert_eq(str_compare(src, dest), false);
    dest = my_strdup(src);
    cr_assert_neq(src, dest);
    cr_assert_eq(str_compare(src, dest), true);
    free_str(2, src, dest);
}