#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates and sums its parameters.
 * @n: the total number of parameters used in the function
 * Return: sum of all parameters used.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum_all = 0;
	unsigned int a;
	va_list valist;

	va_start(valist, n);
	for (a = 0; a < n; a++)
		sum_all += va_arg(valist, int);
	va_end(valist);
	return (sum_all);
}
