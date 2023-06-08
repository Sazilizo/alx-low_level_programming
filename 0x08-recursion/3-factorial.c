#include <stdio.h>
#include "main.h"


/**
 * factorial - calculate the factorial of a number
 * @n: number feeder
 * @return: factorial of n
 */

int factorial(int n)
{
	if (n < 0) return (-1);
	if (n == 0) return (1);
	else return n * factorial(n - 1);
}
