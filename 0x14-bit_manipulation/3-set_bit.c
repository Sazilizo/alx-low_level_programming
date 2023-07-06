#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: input n;
 * @index:: index to look for
 * Return: 1 or -1 on failure;
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
