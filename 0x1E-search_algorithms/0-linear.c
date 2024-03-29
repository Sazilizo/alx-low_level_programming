#include "search_algos.h"

/**
 * linear_search - searches for a value in array using the Linear search.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int temp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			temp = array[i];
			if (temp == value)
				return (i);
			printf("Value checked array[%lu] = [%d]\n", i, temp);
		}
	}
	return (-1);
}
