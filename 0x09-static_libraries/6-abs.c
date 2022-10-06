#include "main.h"
#include <stdio.h>
/**
 * _abs - computes absolute values
 * @c: integer used
 * Return: always zero
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
