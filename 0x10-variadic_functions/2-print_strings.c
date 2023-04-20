#include  "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, folloed by new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: if separator is NULL, it s not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *str;

va_start(valist, n);

for (i = 0; i < n; i++)
{
str = va_arg(valist, char *);
if (str)
printf("%s", str);
else
printf("(nil)");

if (i < n - 1)
if (separator)
printf("%s", separator);
}

printf("\n");
va_end(valist);
}
