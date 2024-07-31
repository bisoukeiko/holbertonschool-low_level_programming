#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node of a dlistint_t linked list
 * @head: The pointer to the head of list_t list
 * @index : The index of the node
 * Return: The address of the node which index point
 *         NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int index_n = 0;

	while (index_n < index)
	{

		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			head = head->next;
			index_n++;
		}
	}

	return (head);

}
