#include <stdio.h>
#include "main.n"

/**
 * puts2 - prints characters
 * @str: parameter used
 * Return: nothing
 */

void puts2(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		if (a % 2 == 0)
			putchar(*(str + a));
		a++;
	}
	putchar(10);
}
