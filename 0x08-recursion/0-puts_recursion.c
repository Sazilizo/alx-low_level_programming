#include <stdio.h>
#include "main.h"


/**
 * _puts_recursion - prints single characters to screen
 * @s: feeder string
 * @Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') return;
	else _putchar(*s++);
	_puts_recursion(s++);
}
