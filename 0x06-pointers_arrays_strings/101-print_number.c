#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integers parms
 * Return: 0
 */

void print_number(int n)
{
unsigned int n1;

n1 = n;
if (n < 0)
{
putchar('_');
n1 = -n;
}
if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
putchar((n % 10) + '0');
}
