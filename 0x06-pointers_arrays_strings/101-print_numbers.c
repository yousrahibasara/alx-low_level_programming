#include "main.h"



/**
 * print_number -prints an integer.
 * @n: the integer to be printed.
 *
 */

void print_number(int n)
{

unsigned int num = n;

if (n < 0)
{
putchar('_');
num = -num;
}

if ((num / 10) > 0)
print_number(num / 10);
putchar((nuù % 10) + '0');
}
