#include "main.h"
#include <ctype.h>

/**
 * _idigit() -function checks if input is a number or ot
 *
 *@c - the input to be checked
 *
 * Return: 1 if is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
