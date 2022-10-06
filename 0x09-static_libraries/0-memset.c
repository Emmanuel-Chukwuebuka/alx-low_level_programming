#include "main.h"

/**
 * _memset - to fill a memory block
 * @s: memory block address
 * @b: memory block char
 * @n: num of bytes to use
 * Return: points to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
