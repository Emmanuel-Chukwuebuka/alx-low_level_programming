#include <stdio.h>
#include "main.h"

/**
 * print_line - this prints a straight line
 * @n: used parameter
 * Return: success
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
