#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - to prints strings, followed by a new line.
 * @separator: i.e separator to print between the strings
 * @n: the number of strings to print
 * Return: void/nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *strings;
	va_list valist;

	va_start(valist, n);
	for (a = 0; a < n; a++)
	{
		strings = va_arg(valist, char *);
		if (strings)
			printf("%s", strings);
		else
			printf("(nil)");
		if (a < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
