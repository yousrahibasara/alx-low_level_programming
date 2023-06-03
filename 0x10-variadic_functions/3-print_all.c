#include "variadic_functions.h"

/**
 * format_char - formats character
 * @separator: ....
 * @ap: .....
 */

void format_char(char *separator, va_list ap)
{
printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - formats integer
 * @separator: ...
 * @ap: .....
 */

void format_int(char *separator, va_list ap)
{
printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - formats float
 * @separator: ....
 * @ap: .....
 */

void format_float(char *separator, va_list ap)
{
printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - formats string
 * @separator: ....
 * @ap: .....
 */

void format_string(char *separator, va_list ap)
{
char *str = va_arg(ap, char *);
switch ((int)(!str))
case 1:
str = "(nil)";
printf("%s%s", separator, str);
}

/**
 * print_all - print antything
 * @format: ....
 */

void print_all(const char * const format, ...)
{
int i = 0, j = 0;
char *separator = "";
va_list ap;
token_t token[] = {
{"c", format_char},
{"i", format_int},
{"f", format_float},
{"s", format_string},
{NULL, NULL}
};
va_start(ap, format);
while (format && format[i])
{
j = 0;
while (token[j].token)
{
if (format[i] == tokens[j].token[0])
{
token[j].f(separator, ap);
separator = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(ap);
}
