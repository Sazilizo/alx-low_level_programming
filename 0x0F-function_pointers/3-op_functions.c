#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers and returns a sum
 * @a: number to add
 * @b: number to add
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts number from another
 * @a: number
 * @b: number
 * Return: int results of numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: number
 * @b:number
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides one number by another
 * @a: number
 * @b: number
 * Return: results of a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates remainder
 * @a: number;
 * @b: number
 * Return: remainder of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
