#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Print a char
 * @ap: A list of arguments pointing to the character to be printed
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}


/**
 * print_integer - Print a integer
 * @ap: A list of arguments pointing to the integer to be printed
 */
void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}


/**
 * print_float - Print a float
 * @ap: A list of arguments pointing to the float to be printed
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}


/**
 * print_string - Print a string
 * @ap: A list of arguments pointing to the string to be printed
 */
void print_string(va_list ap)
{

	char *str;

	str = va_arg(ap, char*);

	if (str == NULL)
	{
		str = "(nil)";
	}

	printf("%s", str);

}


/**
 * print_all - print anything
 * @format: a list of types of arguments passed to the function
 * @...: A variable number of strings paramters
 * Return: nothing
 */

void print_all(const char * const format, ...)
{

	const char *str;
	va_list ap;

	print_t func[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	int index, index_f;
	char *separator = "";

	str = format;
	va_start(ap, format);

	index = 0;

	while (str != NULL && *(format + index) != '\0')
	{
		index_f = 0;
		while (func[index_f].type != '\0')
		{
			if (*(format + index) == func[index_f].type)
			{
				printf("%s", separator);
				func[index_f].func(ap);
				separator = ", ";
				break;
			}

			index_f++;
		}
		index++;
	}

	va_end(ap);
	printf("\n");
}
