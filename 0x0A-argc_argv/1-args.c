#include "main.h"
#include <stdio.h>

/**
 * main - print the number of args
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[1])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
