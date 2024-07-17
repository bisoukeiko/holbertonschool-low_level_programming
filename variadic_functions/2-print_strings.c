#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings, followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 * @...: A variable number of strings paramters
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int index;

	va_list ptr;
	char *str;

	va_start(ptr, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(ptr, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && index < n - 1)
		{
			printf("%s", separator);
		}

	}

	va_end(ptr);

	printf("\n");
}
