#include <stdio.h>

void__attribute__((constructor)) hare(void);

/**
 * hare - prints a string before the main
 */

void hare(void)
{
printf("You're beat! and yet, you must allow,");
printf("\nI bore my house upon my back!\n");
}
