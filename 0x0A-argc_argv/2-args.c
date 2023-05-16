#include "main.h"
#include <stdio.h>

/**
 * main - print all the args content
 * @argc: argument count
 * @argv: argument vector
 * return: always 0
 */

int main(int argc, char *argv[1])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}