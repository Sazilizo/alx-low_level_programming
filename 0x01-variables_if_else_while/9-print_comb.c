#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always0
 */
int main(void)
{
	int dig;

	for (dig = '0'; dig <= '9'; dig++)
	{
	putchar(dig);
	if (dig != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
