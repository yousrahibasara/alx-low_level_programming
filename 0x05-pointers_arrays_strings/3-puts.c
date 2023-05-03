#include "main.h"
/**
 * _put - prints a string, followed by a nex line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}

