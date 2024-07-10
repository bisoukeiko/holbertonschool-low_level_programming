#include <stdlib.h>

/**
 * array_range - create an array of integers contain all the values
 *               from min to max, ordered from min to max
 * @min: The first value of the array
 * @max: The last value of the array
 * Return: pointer to the allocated memory
 *         NULL if min > max or if malloc fails
 */

int *array_range(int min, int max)
{

	int *arr;
	int size;
	int index;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++, min++)
	{
		arr[index] = min;
	}

	return (arr);

}
