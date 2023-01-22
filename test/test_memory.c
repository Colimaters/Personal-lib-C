/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** function(s) for my src
*/

#include "../include/test_function.h"

Test(test_memory, str_one_test)
{
    char *ptr = smalloc(4);
    ptr[0] = 7;
    ptr[1] = 24;
    ptr[2] = 127;

    free_str(1, ptr);
}

Test(test_memory, str_multiple_test)
{
    char *ptr_o = smalloc(4);
    char *ptr_t = smalloc(4);

    free_str(2, ptr_o, ptr_t);
}

Test(test_memory, tab_one_test)
{
    int len = 4;
    char **ptr = tmalloc(len + 1);

    for (int i = 0; i < len; ++i) {
        ptr[i] = smalloc(4);
    }
    free_tab(1, ptr);
}

Test(test_memory, tab_multiple_test)
{
    int len = 4;
    char **ptr_o = tmalloc(len + 1);
    char **ptr_t = tmalloc(len + 1);

    for (int i = 0; i < len; ++i) {
        ptr_o[i] = smalloc(4);
        ptr_t[i] = smalloc(4);
    }
    free_tab(2, ptr_o, ptr_t);
}

Test(test_memory, int_one_test)
{
    int *ptr = imalloc(4);
    ptr[0] = 7;
    ptr[1] = 24;
    ptr[2] = 127;

    free_int(1, ptr);
}

Test(test_memory, int_multiple_test)
{
    int *ptr_o = imalloc(4);
    int *ptr_t = imalloc(4);

    free_str(2, ptr_o, ptr_t);
}