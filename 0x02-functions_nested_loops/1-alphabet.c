#include "main.h"

/**
 * main - prints alphabet game
 *
 * Return: successful (0)
 */
int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
