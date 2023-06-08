#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - counts the number of characters in string
 * @s: string feeder
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);

}
