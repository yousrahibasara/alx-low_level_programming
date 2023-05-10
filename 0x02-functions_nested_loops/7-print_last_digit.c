#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the number to be treated
 * Return: value of the last digit of number
 */

int print_last_digit(int n)

{

int l;

l = n % 10;
if (l < 0)
{
putchar(-l + 48);
return (-l);
}
else
{
putchar(l + 48);
return (l);
}
}
