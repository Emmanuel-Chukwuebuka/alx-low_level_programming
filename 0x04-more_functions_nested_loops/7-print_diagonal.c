#include <stdio.h>
#include "main.h"

/**
 * print_diagnoal - prints a diagonal shape
 * @n: parameter used
 * Return: true
 */

void print_diagonal(int n)
{
	int length, space;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (sapce = 0; space < length; space++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (length == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
