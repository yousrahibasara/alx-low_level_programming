#include "main.h"

/**
 * print_sign - prints the sign of anumber
 * @n: the number to be checked
 * Return: 1 for positive num, -1 for positive num or zero for anything esle
 */

int print_sign(int n)
{
if (n > 0)
{
putchar(43);
return (1);
}
else if (n < 0)
{
putchar(45);
return (-1);
}
else
{
putchar(48);
return (0);
}
}
