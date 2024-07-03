#include "main.h"

/**
 * is_prime_number2 - Determine if a number is prime
 * @n: integer input
 * @p_num: number that iterates until n
 * Return: 1 if the input integer is a prime number 
 *         0 otherwise
 */

int is_prime_number2(int n, int p_num)
{

	if (n == p_num)
	{
		return (1);
	}
	else if (n % p_num == 0)
	{
		return (0);
	}

	return (is_prime_number2(n,  p_num + 1));

}


/**
 * is_prime_number - Determine if a number is prime
 * @n: integer input
 * Return: 1 if the input integer is a prime number 
 *         0 otherwise
 */

int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_number2(n, 2));
	}
}

