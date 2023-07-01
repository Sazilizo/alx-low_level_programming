#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c : input value
 *
 * Return: array or NULL if empty
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
