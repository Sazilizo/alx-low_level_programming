#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: input value;
 * @index: index to set at
 * Return: 1 or -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);

	*n = (~(1 << index) & *n);
	return (1);
}
