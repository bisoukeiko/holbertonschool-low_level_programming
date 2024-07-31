#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Return the sum of all the data (n) of a dlistint_t linked list
 * @head: The pointer to the head of list_t list
 * Return: The sum of all the data (n) of a dlistint_t linked list
 *         0, If the list is empty
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;

	while (head != NULL)
	{

		sum += head->n;

		head = head->next;
	}

	return (sum);

}
