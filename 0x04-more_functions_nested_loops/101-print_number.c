#include <stdio.h>
#include "main.h"

/**
* print_number - print an integer
* @n: the integer to prints
* Return: nothing
*/

void print_number(int n)

{

unsigned int d = n;

if (n < 0)
{
n *= -1;
d = n;
putchar('_');
}
d /= 10;
if (d != 0)
printf_number(d);
putchar((unsigned int) n % 10 + '0');
}
