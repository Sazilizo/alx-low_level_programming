#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function reverses an array
 * @a: array input
 * @n: input
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
