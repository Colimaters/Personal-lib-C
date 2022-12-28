/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(test_my_strcpy, null_test_src)
{
    cr_assert_eq(my_strcpy("DEST", NULL), NULL);
}

Test(test_my_strcpy, null_test_dest)
{
    char *dest = malloc(5);

    dest[0] = 'D';
    dest[1] = 'E';
    dest[2] = 'S';
    dest[3] = 'T';
    dest[4] = '\0';
    cr_assert_str_eq(my_strcpy(NULL, "SOURCE"), "SOURCE");
}

Test(test_my_strcpy, regular_test)
{
    char *dest = malloc(5);

    dest[0] = 'D';
    dest[1] = 'E';
    dest[2] = 'S';
    dest[3] = 'T';
    dest[4] = '\0';
    cr_assert_str_eq(my_strcpy(dest, "SOURCE"), "SOURCE");
}