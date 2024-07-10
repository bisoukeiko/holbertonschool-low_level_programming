#include <stdlib.h>

/**
 * malloc_checked - allocate memory with malloc
 *  if malloc fails, the malloc_checked function should cause normal
 *  process termination with a status value of 98
 * @b: size for malloc
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{

	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
