#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer of struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(*ptr));

		if (ptr == NULL)
		{
			return (NULL);
		}

		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;
	}

	return (ptr);

}
