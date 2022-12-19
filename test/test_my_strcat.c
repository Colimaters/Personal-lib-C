/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(test_my_strcat, null_test)
{
    cr_assert_eq(my_strcat(NULL, NULL, 0), NULL);
    cr_assert_eq(my_strcat("first", NULL, 0), NULL);
    cr_assert_eq(my_strcat(NULL, "second", 0), NULL);
}

Test(test_my_strcat, regular_test)
{
    cr_assert_str_eq(my_strcat("VOU", "AV", 0), "VOUAV");
}

Test(test_my_strcat, first_flag_test)
{
    char *one = malloc(4);
    char *two = malloc(3);

    one[0] = 'V';
    one[1] = 'O';
    one[2] = 'U';
    one[3] = '\0';
    two[0] = 'A';
    two[1] = 'V';
    two[2] = '\0';
    cr_assert_str_eq(my_strcat(one, two, 1), "VOUAV");
    free_str(1, two);
}

Test(test_my_strcat, second_flag_test)
{
    char *one = malloc(4);
    char *two = malloc(3);

    one[0] = 'V';
    one[1] = 'O';
    one[2] = 'U';
    one[3] = '\0';
    two[0] = 'A';
    two[1] = 'V';
    two[2] = '\0';
    cr_assert_str_eq(my_strcat(one, two, 2), "VOUAV");
    free_str(1, one);
}

Test(test_my_strcat, third_flag_test)
{
    char *one = malloc(4);
    char *two = malloc(3);

    one[0] = 'V';
    one[1] = 'O';
    one[2] = 'U';
    one[3] = '\0';
    two[0] = 'A';
    two[1] = 'V';
    two[2] = '\0';
    cr_assert_str_eq(my_strcat(one, two, 3), "VOUAV");
}