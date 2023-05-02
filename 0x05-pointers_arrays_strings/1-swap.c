#include "main.h"
/**
 * swap_int - swaps the values of tow integers
 * @a: inetger to swap
 * @b: inetger to swap
 */
void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;
}

