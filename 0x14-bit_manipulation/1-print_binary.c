#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints binary rep of a number
 * @n: input number
 */

void print_binary(unsigned long int n)
{
	int i, count;

	unsigned long int bit;

	count = 0;
	i = 63;
	while (i >= 0)
	{
		bit = n >> i;

		if ((bit & 1) == 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		i--;
	}
	if (!count)
		_putchar('0');
}
