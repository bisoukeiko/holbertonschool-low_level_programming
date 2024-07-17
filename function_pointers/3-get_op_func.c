#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - select the correct function to perform the operation
 * @s: operator to get correct function for
 * Return: pointer to correct operater
 *         NULL if no match found
 */

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;


	i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);
}
