/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

Test(test_my_printf, null_str, .init = cr_redirect_stderr)
{
    const char * const to_print = NULL;
    const char * const expected = "my_printf() : str was NULL\n";
    my_printf(to_print);
    cr_assert_stderr_eq_str(expected);
}

Test(test_my_printf, simple_str, .init = cr_redirect_stdout)
{
    const char * const str = "VOUAV\n";
    my_printf(str);
    cr_assert_stdout_eq_str(str);
}

Test(test_my_printf, false_flag, .init = cr_redirect_stdout)
{
    const char * const to_print = "VOUAV%%\n";
    const char * const expected = "VOUAV%\n";

    my_printf(to_print);
    cr_assert_stdout_eq_str(expected);
}

Test(test_my_printf, one_flag, .init = cr_redirect_stdout)
{
    const char * const to_print = "VOUAV%\n";
    const char * const expected = "VOUAV%\n";

    my_printf(to_print);
    cr_assert_stdout_eq_str(expected);
}

Test(test_my_printf, s_flag, .init = cr_redirect_stdout)
{
    const char * const to_print = "VOUAV%s\n";
    const char * const expected = "VOUAVF1\n";

    my_printf(to_print, "F1");
    cr_assert_stdout_eq_str(expected);
}

Test(test_my_printf, d_flag, .init = cr_redirect_stdout)
{
    const char * const to_print = "VOUAV%d\n";
    const char * const expected = "VOUAV-2007\n";

    my_printf(to_print, -2007);
    cr_assert_stdout_eq_str(expected);
}

Test(test_my_printf, i_flag, .init = cr_redirect_stdout)
{
    const char * const to_print = "VOUAV%i\n";
    const char * const expected = "VOUAV2007\n";

    my_printf(to_print, 2007);
    cr_assert_stdout_eq_str(expected);
}

Test(test_my_printf, o_flag, .init = cr_redirect_stdout)
{
    const char * const to_print = "VOUAV%o\n";
    const char * const expected = "VOUAV12\n";

    my_printf(to_print, 10);
    cr_assert_stdout_eq_str(expected);
}

Test(test_my_printf, u_flag, .init = cr_redirect_stdout)
{
    const char * const to_print = "VOUAV%u\n";
    const char * const expected = "VOUAV10\n";

    my_printf(to_print, 10);
    cr_assert_stdout_eq_str(expected);
}

Test(test_my_printf, x_flag, .init = cr_redirect_stdout)
{
    const char * const to_print = "VOUAV%x\n";
    const char * const expected = "VOUAVa\n";

    my_printf(to_print, 10);
    cr_assert_stdout_eq_str(expected);
}

Test(test_my_printf, X_flag, .init = cr_redirect_stdout)
{
    const char * const to_print = "VOUAV%X\n";
    const char * const expected = "VOUAVA\n";

    my_printf(to_print, 10);
    cr_assert_stdout_eq_str(expected);
}

Test(test_my_printf, b_flag, .init = cr_redirect_stdout)
{
    const char * const to_print = "VOUAV%b\n";
    const char * const expected = "VOUAV1010\n";

    my_printf(to_print, 10);
    cr_assert_stdout_eq_str(expected);
}

Test(test_my_printf, S_flag_with_np_char, .init = cr_redirect_stdout)
{
    char * str = smalloc(4);
    str[0] = 7;
    str[1] = 24;
    str[2] = 127;
    const char * const to_print = "VOUAV%S\n";
    const char * const expected = "VOUAV\\7\\30\\177\n";

    my_printf(to_print, str);
    cr_assert_stdout_eq_str(expected);
}

Test(test_my_printf, S_flag_normal, .init = cr_redirect_stdout)
{
    const char * const to_print = "VOUAV%S\n";
    const char * const expected = "VOUAVF1\n";

    my_printf(to_print, "F1");
    cr_assert_stdout_eq_str(expected);
}

Test(test_my_printf, c_flag, .init = cr_redirect_stdout)
{
    const char * const to_print = "VOUAV%c\n";
    const char * const expected = "VOUAVF\n";

    my_printf(to_print, 'F');
    cr_assert_stdout_eq_str(expected);
}

Test(test_my_printf, t_flag, .init = cr_redirect_stdout)
{
    const char * const tab[] = {
        "M",
        "A",
        "X",
        NULL
    };
    const char * const to_print = "%t\n";
    const char * const expected = "M\nA\nX\n\n";

    my_printf(to_print, tab);
    cr_assert_stdout_eq_str(expected);
}

Test(test_my_printf, p_flag)
{
    const char * const to_print = "VOUAV%p\n";
    const char * const expected = "VOUAVa\n";

    cr_assert_eq(my_printf(to_print, expected), 0);
}