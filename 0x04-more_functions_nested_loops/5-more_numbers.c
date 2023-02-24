#include "main.h"

/**
 * more_numbers - prints numbers to 14 10times
 *
 * &n - number to print
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int n;
	int iter = 0;
	
	while( iter <= 10)
	{
		for(n = 0; n < 15; n++)
		{
			_putchar(n);
		}
	iter++;
	}
	_putchar('\n');
}
