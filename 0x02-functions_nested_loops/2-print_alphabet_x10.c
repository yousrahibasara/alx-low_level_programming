#include "main.h"

/**
  * print_alphabet_x10 - Write a function that prints 10 times the alphabet
  * Return: void
  */

void print_alphabet_x10(void)
{

char c;
int i = 0;

while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
i++;
}
}

