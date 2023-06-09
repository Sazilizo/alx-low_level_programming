#include <stdio.h>

/**
 * main -Entry poitn
 * @argc: number of args passed
 * @argv: array of args passed
 * Return: always (0) success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	printf("\n");

	return (0);
}
