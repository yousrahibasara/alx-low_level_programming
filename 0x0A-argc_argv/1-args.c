#include "main.h"
#include <stdio.h>

/**
 * check_number - print the number of args
 * @argc: argument count
 * @argv: argument vector
 * return: always 0
 */

int check_number(int argc, char *argv[1])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
