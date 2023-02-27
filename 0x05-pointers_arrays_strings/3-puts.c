#include "main.h"
#include <stdio.h>

/**
 * _puts() - writes to standard o/p with newline
 * @*str: string to print out
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
