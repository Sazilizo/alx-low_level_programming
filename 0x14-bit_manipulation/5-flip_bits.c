#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: input number
 * @m: input number
 * Return: number of bits you need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bitsToFlip;
	unsigned long int bit;

	bitsToFlip = 0;
	i = 63;
	while (i >= 0)
	{
		bit = (n ^ m) >> i;
		if (bit & 1)
			bitsToFlip++;
		i--;
	}

	return (bitsToFlip);
}
