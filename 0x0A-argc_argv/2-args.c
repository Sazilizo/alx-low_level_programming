#include <stdio.h>

/**
 * main -Entry point
 * @argc: number of args
 * @argv: array of args
 * Return: always (0) success
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i != argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
