#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: points to the start of the linked list
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *temporal;
	unsigned int i;

	temporal = h;
	for (i = 0; temporal; i++)
		temporal = temporal->next;
	return (i);
}
