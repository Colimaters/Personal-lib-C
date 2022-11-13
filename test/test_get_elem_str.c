/*
** Colimaters PROJECT, 2019
** CPE_duostumper_4_2018
** File description:
** parse_str_pos (vestige -> je laisse donc inchangé)
*/

#include "../include/test_function.h"

Test(test_get_elem_str, basic)
{
    const char *str = "f1;f2;f3;f4";

    cr_assert_str_eq(get_elem_str(str, ';', 1), "f1");
    cr_assert_str_eq(get_elem_str(str, '#', 1), "f1;f2;f3;f4");
}

Test(test_get_elem_str, error_str)
{
    const char *str = "f1;f2;f3;f4";

    cr_assert_eq(get_elem_str(NULL, ';', 1), NULL);
    cr_assert_eq(get_elem_str(str, ';', 50), NULL);
}
