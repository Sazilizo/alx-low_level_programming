#include "main.h"
#include <stdio.h>

/**
 * print_square - function prints squares
 * @c - argument to num of squares
 * @b - width of the square
 * @a - height of the square
 * Return: Void
 *
 */

void print_square(int c)
{
	int b , a;

	for (a = 0; a < c ; a++)
	{
  
	    for (b = 0; b < c ; b++)
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
