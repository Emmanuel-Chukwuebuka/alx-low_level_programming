#include "main.h"

/**
 * str_concat - to concatenate two strings
 * @s1: first str
 * @s2: second str
 * Return: null, else point to  new string
 */

char *str_concat(char *s1, char *s2)
{
	char *new_concat_str;
	int counter, concat_counter = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (counter = 0; s1[counter] || s2[counter]; counter++)
		len++;

	new_concat_str = malloc(sizeof(char) * len);

	if (new_concat_str == NULL)
		return (NULL);

	for (counter = 0; s1[counter]; counter++)
		new_concat_str[concat_counter++] = s1[index];

	for (counter = 0; s2[counter]; counter++)
		new_concat_str[concat_counter++] = s2[counter];

	return (new_concat_str);
}

