#include "main.h"

/**
 * swap_int() - function to swap to pointer vals
 *
 * @*a - pointer int to be swapped
 * @b - second pointer int to be swapped
 * Return:void
 */
void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}
