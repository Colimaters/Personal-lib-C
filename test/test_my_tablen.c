/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(test_my_tablen, null_test)
{
    cr_assert_eq(my_tablen(NULL), 0);
}

Test(test_my_tablen, regular_test)
{
    const char * const tab[] = {
        "===",
        "---",
        "...",
        NULL
    };
    cr_assert_eq(my_tablen(tab), 3);
}

Test(test_my_tablen, empty_tab_test)
{
    const char * const tab[] = {
        NULL
    };
    cr_assert_eq(my_tablen(tab), 0);
}
