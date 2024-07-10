#include <stdlib.h>

/**
 * create_array - create an array of chars,
 *                and initialize it with a specific char
 * @size: size of array
 * @c: input for array
 * Return: pointer of array
 *         NULL if size = 0, if program fails
 */

char *create_array(unsigned int size, char c)
{

	char *arr;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}


	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		arr[index] = c;
	}

	return (arr);

}
