#include <stdio.h>

voi first(void)__attribute__((constructor));


/**
 * first - print a sentence
 * function is executed
 */

void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

