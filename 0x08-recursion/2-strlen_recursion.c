#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - counts the number of characters in string
 * @s: string feeder
 * @return: length of the string
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	
}
