#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of elements in a linked list_t list
 * @h: The list_t list
 * Return: The number of elements in h
 */

size_t list_len(const list_t *h)
{

	size_t node = 0;

	while (h != NULL)
	{

		node++;

		h = h->next;

	}

	return (node);

}
