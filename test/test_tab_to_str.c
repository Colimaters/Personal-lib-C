/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(test_tab_to_str, tab_is_null)
{
    cr_assert_eq(tab_to_str(NULL), NULL);
}
Test(test_tab_to_str, regular_test)
{
    const char * const tab[] = {
      "===",
      "---",
      "...",
      NULL
    };
    cr_assert_str_eq(tab_to_str(tab), "===---...");
}

Test(test_tab_to_str, null_in_tab)
{
    const char * const tab[] = {
        "===",
        NULL,
        "...",
        NULL
    };
    cr_assert_str_eq(tab_to_str(tab), "===");
}