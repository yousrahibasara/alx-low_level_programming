#include <stdio.h>
#include "main.h"

/**
* print_number - print an integer
* @n: the integer to prints
* Return: nothing
*/

void print_number(int n)

{

unsigned int k = n;

if (n < 0)
{
n *= -1;
k = n;
putchar('_');
}
k /= 10;
if (k != 0)
print_number(k);
putchar((unsigned int) n % 10 + '0');
}
