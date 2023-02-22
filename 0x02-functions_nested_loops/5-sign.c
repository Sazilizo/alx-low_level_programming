#include "main.h"
#include <stdio.h>
/**
 * print_sign -prints the sign before the number
 * &n - the number to chech
 * Return: 1 if positve, -1 neg and 0 if n == 0
 */

int print_sign(int n)
{

	if( n > 0 )
	{
		printf("+, ");
		return (1);
	}
	else if(n < 0)
	{
		printf("-, ");
		return (-1);
	}
	else{
		printf("0, ");
		return (0);
	}
}
