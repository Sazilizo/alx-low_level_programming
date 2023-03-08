#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion- raises a number to the power of another
 * @x: number to raise
 * @y: power to raise to
 * Return: results of x (success) -1 (failure)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
