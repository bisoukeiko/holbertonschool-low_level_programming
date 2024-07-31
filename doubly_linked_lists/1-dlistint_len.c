#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Return the number of elements in a linked dlistint_t list
 * @h: The list_t list
 * Return: The number of elements in h
 */

size_t dlistint_len(const dlistint_t *h)
{

	size_t node = 0;

	while (h != NULL)
	{

		node++;
		h = h->next;

	}

	return (node);

}
