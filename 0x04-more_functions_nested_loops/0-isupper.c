#include "main.h"
#include <ctype.h>

/**
 * _isupper -function checks for uppercase letter
 * @c - letter to bechecked
 * Return: 1 if c is uper, 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
