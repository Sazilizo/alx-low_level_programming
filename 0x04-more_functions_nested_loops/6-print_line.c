#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line depending on input
 * @c -input for number of lines
 * @n - the iterator
 * Return: void
 */


void print_line(int c)
{
    	int n;

    	for (n = 0; n < c; n++)
    	{
		if (c  <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
