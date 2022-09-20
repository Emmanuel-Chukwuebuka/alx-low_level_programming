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
	if (length % 2 == 1)
		n = length / 2 + 1;
	else
		n = length / 2;
	for (i = n; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
