#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

/**
 * _puts_recursion - prints a string with newline
 * @s: input
 * Return: void
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
		_putchar(*s);
		s++;
	}
	_puts_recursion(s);
}
