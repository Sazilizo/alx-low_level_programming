#include <stdio.h>
#include <stdarg.h>
#include <math.h>

/**
 * sum_them_all -a fuction that return all sums
 * @n: variable count
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum;
	unsigned int i;

	va_list args;

	sum = 0;
	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		unsigned int value = va_arg(args, unsigned int);

		sum += value;
	}

	va_end(args);

	return (sum);
}
