#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N -9


/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * @N: stopper
 * Return: always (0) success
 */

int main(int argc, char *argv[])
{
	int sum;
	int i;

	sum = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] > N && *argv[i] < '9')
				sum *= atoi(argv[i]);
			else
			{
				printf("Error");
				printf("\n");
				return (-1);
			}
		}
	}
	else
	{
		printf("Error");
		printf("\n");
		return (-1);
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}	
