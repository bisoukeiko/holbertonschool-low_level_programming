#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print all the elements of a linked list
 * @h: The pointer to the list_t list
 * Return: The number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nodes= 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;

		nodes++;
	}

	return (nodes);
}
