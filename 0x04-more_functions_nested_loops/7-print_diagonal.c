#include <stdio.h>
#include "main.h"

/**
 * print_diagnoal - prints a diagonal shape
 * @n: parameter used
 * Return: true
 */

void print_diagonal(int n)
{
	int a, b;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
