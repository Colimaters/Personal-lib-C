/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(test_my_putnbr_base, null_test, .init = cr_redirect_stderr)
{
    const char * const to_print = "VOUAV\n";
    const char * const expected = "VOUAV10\n";

    my_putnbr_base(0, NULL);
    cr_assert_stderr_eq_str("my_putnbr_base() : base was NULL\n");
}
