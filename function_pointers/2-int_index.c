#include <stddef.h>
/**
 * int_index - searche for an integer
 * @array: pointer to array
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp function
 *         does not return 0
 *         -1 if no element matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int index;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}

	return (-1);

}
