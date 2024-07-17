#include <stddef.h>
/**
 * print_name - print a name
 * @name: name
 * @f: A pointer to a function that prints a name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);

}
