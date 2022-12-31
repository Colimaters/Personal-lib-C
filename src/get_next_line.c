/*
** Colimaters PROJECT, 2020
** Lib
** File description:
** functions for my src
*/

#include "../include/listing_function.h"

char *gnl(int fd, short flag)
{
    char *line = NULL;
    char *tmp = NULL;
    ssize_t ret = 0;
    int c = 0;

    if (fd < 0)
        return (my_putstr_err("gnl() : fd was NULL\n"), NULL);
    line = smalloc(2);
    tmp = smalloc(2);
    if (!line || !tmp)
        return (my_putstr_err("gnl() : line or tmp was NULL\n"), NULL);
    do {
        ret = read(fd, tmp, 1);
        line = my_strcat(line, tmp, 1);
        ++c;
    } while (tmp[0] != '\n' && ret > 0);
    free(tmp);
    (flag) ? (line[c - 1] = '\0') : (0);
    if (!line[0] && ret == 0) {
        free(line);
        return (NULL);
    }
    return (line);
}