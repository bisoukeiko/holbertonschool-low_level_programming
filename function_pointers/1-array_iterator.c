#include <stddef.h>
/**
 * array_iterator - execute a function given as a parameter
 *                  on each element of an array
 * @array: pointer to array
 * @size: size of the array
 * @action: a pointer to the function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int index;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}

}
