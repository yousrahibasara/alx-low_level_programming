#include <stdlib.h>
#include <stdio.h>

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ..
 */

int atoi (const char *__nptr)
{
int (*oprt)(int, int);
if (argc != 4)
{
printf("ERROR\n");
exit(98);
}
oprt = get_op_func(argv[2]);
if (!oprt)
{
printf("ERROR\n");
exit(99);
}
printf("%d\n", oprt(atoi(argv[1], atoi(argv[3]))));
}
