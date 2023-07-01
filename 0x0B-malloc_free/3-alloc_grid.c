#include <stdio.h>
#include <stdlib.h>


/**
 * alloc_grid - creates a 2d array
 * @height: height of arr
 * @width: width of arr
 * Return: always 0 (success)
 */

int **alloc_grid(int width, int height)
{
	int **pArray;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	pArray = malloc(height * sizeof(int *));
	if (pArray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pArray[i] = calloc(width, sizeof(int));
		if (pArray[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(pArray[j]);
			}
			free(pArray);
			return (NULL);
		}
	}

	return (pArray);

}
