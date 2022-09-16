#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints all numbers
 * Return: nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
