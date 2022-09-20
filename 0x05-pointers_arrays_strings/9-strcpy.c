#include "main.h"

/**
 * _strcpy - used to copy and paste strings
 * @dest: destination
 * @src: source
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a) != '\0')
	{
		*(dest + a) = *(src + a);
		a++;
	}
	*(dest + a) = '\0';

	return (dest);
}
