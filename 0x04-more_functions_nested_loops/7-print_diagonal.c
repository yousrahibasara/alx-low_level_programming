#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal line
 * Return: the numbers of times to print diagonal lines
 */

void print_diagonal(int n)
{

int a, b;

if (n <= 0)
{
putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
putchar(32);
}
putchar(92);
putchar('\n');
}
}
}
