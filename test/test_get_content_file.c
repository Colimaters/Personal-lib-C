/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** function for my src
*/

#include "../include/test_function.h"

Test(test_get_content_file, file_not_exist)
{
    cr_assert_eq(get_content_file(NULL), NULL);
    cr_assert_eq(get_content_file("nexistepas.png"), NULL);
}

Test(test_get_content_file, file_exist)
{
    system("rm vouav1.txt ; touch vouav1.txt");
    cr_assert_str_eq(get_content_file("vouav1.txt"), "");
    system("rm vouav1.txt");
}

Test(test_get_content_file, file_is_dir)
{
    system("rmdir vouav_dir ; mkdir vouav_dir");
    cr_assert_eq(get_content_file("vouav_dir"), NULL);
    system("rmdir vouav_dir");
}
