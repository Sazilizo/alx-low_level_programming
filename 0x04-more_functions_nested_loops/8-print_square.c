#include "main.h"
#include <stdio.h>

/**
 * print_square - function prints squares
 * @c - argument to num of squares
 *
 */

void print_square(int c)
{
	int b , a;

	for (a = 0; a <= c - 1; a++)
	{
  
	    for (b = 0; b <= c - 1 ; b++)
        {
		if (c <= 0)
		{
			_putchar('\n');
		}
		_putchar('#');
	}
		_putchar('\n');
	}
}
