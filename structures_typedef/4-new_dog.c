#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - count the length og string
 * @str: pointer of string
 * Return: length
 */

int _strlen(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		continue;
	}

	return (index + 1);
}

/**
 * _strcpy - copie the string
 * @str1: pointer of string for copie
 * @str2: pointer of string to be copied
 * Return: length
 */

char *_strcpy(char *str1, char *str2)
{
	int index;

	for (index = 0; str2[index] != '\0'; index++)
	{
		str1[index] = str2[index];
	}

	str1[index] = '\0';

	return (str1);
}

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
	int len = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	len = _strlen(name);

	ptr->name = malloc(sizeof(char) * len);

	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	len = _strlen(owner);

	ptr->owner = malloc(sizeof(char) * len);

	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	ptr->name = _strcpy(ptr->name, name);
	ptr->age = age;
	ptr->owner = _strcpy(ptr->owner, owner);

	return (ptr);

}
