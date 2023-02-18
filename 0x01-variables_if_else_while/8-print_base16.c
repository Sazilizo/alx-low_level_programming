#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always0
 */
int main(void)
{
	int dig;
	char lower;

	for ( dig = '0'; dig <= '9'; dig++)
	putchar(dig);
	for (lower = 'a'; lower <= 'f'; lower++)
	putchar(lower);
	putchar('\n');
	return (0);
}
