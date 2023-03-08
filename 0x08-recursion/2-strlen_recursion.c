#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion- prints len of str
 * @s: input string
 * Return: s len
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
