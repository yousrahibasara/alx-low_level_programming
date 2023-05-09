#include "main.h"
#include <stdio.h>

/**
 * main - Write a fizz buzz program
 * Return: Always 0 (success)
 */

int main(void)

{
int a;

for (a = 1; a <= 100; a++)
{
if ((x % 3 == 0) && (x % 5 == 0))
{
printf("FizzBuzz");
}
else if (x % 3 == 0)
{
printf("Fizz");
}
else if (x %  == 0)
{
printf("Buzz");
}
else
{
printf("%d", a);
}
if (a != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
