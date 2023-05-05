#include "main.h"



/**
 * print_number - print numbers chars
 * @n: integers parms
 * Return: 0
 */

void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
putchar('_');
num = -num;
}

if (num / 10 > 0)
print_number(num / 10);
putchar((n % 10) + '0');
}
