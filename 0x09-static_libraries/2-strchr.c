#include "main.h"

/**
 * _strchr - locates a a parrticula string char
 * @s: string to check
 * @c: character checked
 * Return: reurns s or nothing
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) ==c)
			return (s +i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
