#include "main.h"

/**
 * _memcpy - copies bytes from a memory area to a new address
 * @dest: memory area
 * @src: source memory area
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
