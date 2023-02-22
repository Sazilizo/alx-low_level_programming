#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower -checks letter case and returns 1 0r 0
 *&c - variable with letter
 * Return: 1 if lower 0 otherwise
 */

int _islower(int c)
{
	if( islower(c))
	{
		return (1);
	}
	else{
		return (0);
	}
}
