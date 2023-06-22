#include <stdio.h>
#include <stdarg.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main -entry point
 * @argc: parameter count
 * @argv: array of parameters
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int n1, n2, results;
	int (*get_op)(int, int);

	
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	get_op = get_op_func(argv[2]);

	if (argc != 4 || get_op == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	results = get_op(n1, n2);
	printf("%d\n", results);

	return (0);
}
