#include "main.h"
/**
 * print_sign - functons prints and check for a number sign
 * @n: integer used for the function
 * Return: successful
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1)
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else 
	{
		_putchar('0');
		return (0);
	}
}
