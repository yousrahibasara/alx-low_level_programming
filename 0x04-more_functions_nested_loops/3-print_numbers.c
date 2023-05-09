#include "main.h"

/**
 * print_numbers - print the numbers since 0 to 9
 * Return: the numbers since 0 up to 9
 */

void print_numbers(void)
{

int a;

for (a = 0; a <= 9; a++)
{
putchar(a + '0');
}
putchar('\n');
}
