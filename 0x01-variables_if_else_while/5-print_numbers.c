#include <stdio.h>

/**
 * main - print from number 0 - 9
 *
 * Return: true
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
