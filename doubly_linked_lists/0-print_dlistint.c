#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Print all the elements of a dlistint_t list
 * @h: The list_t list
 * Return: The number of elements in h
 */

size_t print_dlistint(const dlistint_t *h)
{

	size_t node = 0;

	while (h != NULL)
	{

		printf("%d\n", h->n);
		node++;

		h = h->next;

	}

	return (node);

}
