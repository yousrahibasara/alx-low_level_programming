#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: ...
 * @argv: ..
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int bytes, i;
char *arr;
if (argc != 2)
{
printf("EROOR\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("EROOR\n");
exit(2);
}
arr = (char *)main;
for (i = 0; i < bytes; i++)
if (i == bytes - 1)
{
printf("%02hhx\n", arr[i]);
break;
}
printf("%02hhx ", arr[i]);
}
