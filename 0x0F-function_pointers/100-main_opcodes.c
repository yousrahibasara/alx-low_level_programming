#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the opcodes of its own main function.
 * @argc: ...
 * @argv: ..
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int bytes, index;
int (*address)(int, char **) = main;
unsigned char opcode;
if (argc != 2)
{
printf("EROOR\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);
if (index == bytes - 1)
printf(" ");
address++;
}
printf("\n");
return (0);
}
