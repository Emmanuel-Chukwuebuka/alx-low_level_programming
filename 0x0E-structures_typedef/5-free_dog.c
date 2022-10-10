#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - new dog structure
 * @d: points to the new structure
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
