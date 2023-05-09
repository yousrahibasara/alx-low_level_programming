#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: the number of line to draw
 * Return: empty
 */

void print_line(int n)

{

int a;

if (n <= 0)
{
putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
putchar(95);
}
putchar('\n');
}
}
