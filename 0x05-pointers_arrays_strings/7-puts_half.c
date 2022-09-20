#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of the given string
 * @str: given parameter
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, length, n;

	length = strlen(str);
	n = (length - 1) / 2;

	for (i = n + 1; i < length; i++)
	{
		_putchar(*(str + 1));
	}
	_putchar('\n');
}
