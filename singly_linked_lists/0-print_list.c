#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements of a list_t list
 * @h: The list_t list
 * Return: The number of nodes in h
 */

size_t print_list(const list_t *h)
{

	int node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");

		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);

		}

		node++;

		h = h->next;

	}

	return (node);

}
