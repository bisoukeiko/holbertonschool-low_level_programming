#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - frees dog
 * @d: pointer
 * Return: nothing
 */

void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}

		if (d->owner != NULL)
		{
			free(d->owner);
		}

		free(d);
	}

}
