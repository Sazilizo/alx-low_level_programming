#include <stdio.h>
#include <math.h>
#define N -9
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of args passed
 * @argv: array of args passed
 * Return: aleays (0) success
 */

int main(int argc, char *argv[])
{
	int sum, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] > N && *argv[i] <= '9')
				sum += atoi(argv[i]);
			else
			{
				printf("Error");
				putchar('\n');
				return (1);
			}
		}
	}
	else
	{
		printf("Error");
		putchar('\n');
		return (1);
	}
	printf("%d", sum);
	putchar('\n');

	return (0);
}
