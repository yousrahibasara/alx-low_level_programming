#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point
  *Discription: 'get the last digiti of a number'
  *Return: always 0
  */
int main(void)
{
int n;
int ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld > 5)
{
printf("Last digit of 98 is 8 and is greater than 5", n, ld);
}
else if (ld == 0)
{
printf("Last digit of -98 is 98 and is 0", n, ld);
}
else
{
printf("Last digit of 980 is 0 and less than 6 and not 0", n, ld);
}
return (0);
}

