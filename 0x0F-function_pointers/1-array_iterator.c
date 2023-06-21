#include <stdio.h>

/**
 * array_iterator - iterates and prints an array
 * @array: array to iterate
 * @size: size of the array
 * @action: callback function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
