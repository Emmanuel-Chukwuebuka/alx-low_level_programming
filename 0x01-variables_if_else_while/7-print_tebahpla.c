#include <stdio.h>

/**
 * main - prints the alphabets in reverse order
 *
 * Return: successful
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}