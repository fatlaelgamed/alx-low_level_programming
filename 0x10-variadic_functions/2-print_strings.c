#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *str;

	va_start (strs, n);

	for (i = 0; i < n; i++)
	{
		str = va_args(strs, int);

		if(str == NULL)
			return ("(nil)");
		else
			printf("%s", str);

		if(i != n - 1 && separator != NULL)
			printf("%s", spearator);
	}
	printf("\n");
	va_end(strs);
}
