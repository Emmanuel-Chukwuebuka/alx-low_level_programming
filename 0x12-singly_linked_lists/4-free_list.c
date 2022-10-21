#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free the provided list_t list
 * @head: pointer to the start of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_list, *next_list;

	current_list = head;
	while (current_list != NULL)
	{
		next_list = current_list->next_list;
		free(current_list->str);
		free(current_list);
		current_list = next_list;
	}

}
