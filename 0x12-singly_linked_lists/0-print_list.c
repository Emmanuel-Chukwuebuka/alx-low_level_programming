#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of the list
 * @h: points to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *temporal;
	unsigned int i;

	temporal = h;
	for (i = 0; temporal; i++)
	{
		printf("[%u] %s\n", temporal->len, temporal->str);
		temporal = temporal->next;
	}
	return (i);
}
