#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: A variable number of paramters
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int index;

	va_list ptr;

	va_start(ptr, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ptr, int));

		if (index < n - 1)
		{
			printf("%s", *separator);
		}

	}

	va_end(ptr);

	printf("\n");
}
