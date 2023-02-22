#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int iter = 0;
	char c;

	while(iter < 10)
	{
		for(c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	iter++;
	_putchar('\n');
	}
}
