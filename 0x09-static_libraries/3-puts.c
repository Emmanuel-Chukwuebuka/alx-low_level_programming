#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string to the screen
 * @str: string
 * Return: always 0
 */

void _puts(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		putchar(*(str + a));
		a++;
	}
	putchar(10);
}

