#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints alphabets in lower and upper
 *
 * Return: always 0
 */
int main(void)
{
	char lower;
	char upper;
	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);
	for (upper = 'A'; upper <='Z'; upper++)
	putchar(upper);
	putchar('\n');
	return (0);
}
