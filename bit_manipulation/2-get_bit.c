#include "main.h"

/**
 * get_bit - Return the value of a bit at a given index
 * @n: decimal number
 * @index: index starting from 0 of the bit required
 * Return: The value of the bit at index
 *         -1, If an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
