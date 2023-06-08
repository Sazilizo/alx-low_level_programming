#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion -  raises x to the power of y  and return x
 * @x: base number
 * @y: power number
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
		
}
