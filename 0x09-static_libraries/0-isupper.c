#include "main.h"

/**
 * _isupper - to check if it is uppercase or not
 * @c: character used
 * Return: always 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
