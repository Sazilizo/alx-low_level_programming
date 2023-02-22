#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _ialpha -checks letter case and returns 1 0r 0
 *&c - variable with letter
 * Return: 1 if alhpa 0 otherwise
 */

int _isalpha(int c)
{
	if( isalpha(c))
	{
		return (1);
	}
	else{
		return (0);
	}
}
