#include "main.h"

/**
 * _puts_recursion - Write a string, followed by a new line.
 * @s: the string to write
 * Return: nothing
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}

putchar(*s);
s++;
_puts_recursion(s);
}
