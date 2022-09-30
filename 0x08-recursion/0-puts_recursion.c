#include "main.h"

/**
 * _puts_recursion - to print a string and a new line
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursions(s + 1);
	}
}
