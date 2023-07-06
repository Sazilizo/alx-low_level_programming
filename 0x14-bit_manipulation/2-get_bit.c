#include <stdio.h>
#include "main.h"
/**
 * get_bit - prints bit at a specific index
 * @n: input number
 * @index: index at
 * Return: value at index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= 63)
	{
		return (-1);
	}
	mask = (n >> index) & 1;

	return (mask);
}
