#include <stdlib.h>

/**
 * _calloc - allocate memory for an array, using malloc
 * @nmemb: the number of elements
 * @size: the bytes size
 * Return: pointer to the allocated memory
 *         NULL if nmemb or size is 0 or f malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *arr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < nmemb; index++)
	{
		arr[index] = 0;
	}

	return (arr);
}
