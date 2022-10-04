#include "main.h"

/**
 * _strdup - returns to an allocated space in memory
 * @str: copied string
 * Return: NULL else, return pointer
 */

char *_strdup(char *str)
{
	char *copy;
	int counter, len;

	if str ==NULL)
		return (NULL);

	for (counter = 0; str[counter]; counter++)
		len++;
	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (counter = 0; str[counter]; counter++)
	{
		copy[counter] = str[counter];
	}

	copy[len] = '\0';

	return (copy);
}
