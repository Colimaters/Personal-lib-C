/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/test_function.h"

void create_file(void) {
    puts("Runs before the test");
    const char * const file_name = "GNL.txt";
    const char * const content = "TRUC\nDEUX\n";
    int fd = creat(file_name, 0777);

    if (fd < 0) {
        printf("ERROR\n");
    }
    long ret = write(fd, content, my_strlen(content));

    if (ret == -1)
        my_putstr_err("my_putchar() : write failed\n");
    close(fd);
}

void create_empty_file(void) {
    puts("Runs before the test");
    const char * const file_name = "GNL2.txt";
    const char * const content = "";
    int fd = creat(file_name, 0777);

    write(fd, content, my_strlen(content));
    close(fd);
}

void delete_file(void) {
    puts("Runs after the test");
    const char * const file_name = "GNL.txt";
    remove(file_name);
}

void delete_empty_file(void) {
    puts("Runs after the test");
    const char * const file_name = "GNL2.txt";
    remove(file_name);
}

Test(test_get_next_line, file_with_flag, .init = create_file, .fini = delete_file)
{
    int fd = open("GNL.txt", O_RDONLY);
    char *line = gnl(fd, 1);

    cr_assert_str_eq(line, "TRUC");
    close(fd);
}

Test(test_get_next_line, file_without_flag, .init = create_file, .fini = delete_file)
{
    int fd = open("GNL.txt", O_RDONLY);
    char *line = gnl(fd, 0);

    cr_assert_str_eq(line, "TRUC\n");
    close(fd);
}

Test(test_get_next_line, empty_file, .init = create_empty_file, .fini = delete_empty_file)
{
    int fd = open("GNL2.txt", O_RDONLY);
    char *line = gnl(fd, 0);

    cr_assert_eq(line, NULL);
    close(fd);
}

Test(test_get_next_line, wrong_fd, .init = create_file, .fini = delete_file)
{
    char *line = gnl(-21, 0);

    cr_assert_eq(line, NULL);
}
