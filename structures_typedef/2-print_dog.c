#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer of strust dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("(nil)\n");
		}


		if (d->age > 0)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("(nil)\n");
		}


		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("(nil)\n");
		}

	}

	return;
}
