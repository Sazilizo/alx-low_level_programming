#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: String feeder
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s++);
	}
	_puts_recursion(s++);
}
