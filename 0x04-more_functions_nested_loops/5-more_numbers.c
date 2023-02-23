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
	char n;

	for(n = 0; n <= 14; n++)
	{
		while(n < 10)
		{
			_putchar(n);
			n++;
		}
	_putchar(n);
	}
	_putchar('\n');
}
