#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list
 * @h: The list_t list
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{

	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;

		node++;
	}

	return (node);
}
