#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its parameters
 * @n: The number of paramters
 * @...: A variable number of paramters
 * Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	unsigned int index;

	va_list ptr;

	va_start(ptr, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);

}
