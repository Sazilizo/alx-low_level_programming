#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints the string in reverse
 * @s: string feeder
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
