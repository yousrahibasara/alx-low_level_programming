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
int i = 0;
char *str, *sep = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%d", sep, va_arg(list, int));
break;
case 'i':
printf("%s%i", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
}
printf("\n");
va_end(list);
}


