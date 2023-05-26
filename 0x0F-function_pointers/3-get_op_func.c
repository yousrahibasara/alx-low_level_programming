#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - ...
 * @s: ...
 * Return: ..
 */

int (*get_op_func(char *s))(int i, int)
{
int i = 0;
while (i < 5)
{
if (strcmp(s, op[i].op) == 0)
return (op[i].f);
i++;
}
return (0);
}
