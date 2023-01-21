/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(test_my_revstr, null_test)
{
    cr_assert_eq(my_revstr(NULL), NULL);
}

Test(test_my_revstr, regular_test)
{
    char *dest = NULL;
    char *src = smalloc(3);

    src[0] = 'F';
    src[1] = '1';
    src[2] = '\0';

    dest = my_revstr(src);
    cr_assert_str_eq(dest, "1F");
    free_str(2, src, dest);
}
