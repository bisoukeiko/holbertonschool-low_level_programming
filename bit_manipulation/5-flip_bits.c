#include "main.h"

/**
 * flip_bits - Return the number of bits you would need to flip
 *             to get from one number to another
 * @n: decimal number
 * @m: decimal number
 * Return: The number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	int cnt = 0;

	num = n ^ m;

	while (num > 0)
	{
		cnt++;
		num &= (num - 1);
	}

	return (cnt);
}
