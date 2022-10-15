#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - to prints numbers, followed by a new line.
 * @separator: separator to print between the numbers
 * @n: number of digits to print
 *
 * Return: void/nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	int number;
	va_list valist;

	va_start(valist, n);
	for (a = 0; a < n; a++)
	{
		number = va_arg(valist, int);
		printf("%d", number);
		if (a < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
