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

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (name == NULL)
	{
		free(ptr);
		free(owner);
		return (NULL);
	}

	if (owner == NULL)
	{
		free(ptr);
		free(name);
		return (NULL);
	}

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);

}
