#include "main.h"

/**
 * print_most_numbers - print the numbers since 0 to 9
 * Description: print the numbers excluding 2 and 4
 * Return: the numbers since 0 up to 9
 */

void print_most_numbers(void)
{

int a = 0;

for (; a <= 9; a++)
{
if (a == 2 || a == 4)
{
continue;
}
else
{
putchar(a + '0');
}
}
putchar('\n');
}
