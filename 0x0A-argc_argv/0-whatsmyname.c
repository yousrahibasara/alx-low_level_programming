#include "main.h"
#include <stdio.h>

/**
 * whatsmyname - print its name
 * @argc: argument count
 * @argv: argument vector
 * return: always 0
 */

int whatsmyname(int argc, char *argv[1])
{
(void) argc;
printf("%s\n", argv[0]);

return (0);
}
