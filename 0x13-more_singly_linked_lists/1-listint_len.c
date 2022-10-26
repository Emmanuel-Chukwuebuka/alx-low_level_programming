#include "lists.h"

/**
 * listint_len - to returns the number of elements in a linked listint_t list.
 * @h: the pointer to the linked list
 *
 * Return: the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
