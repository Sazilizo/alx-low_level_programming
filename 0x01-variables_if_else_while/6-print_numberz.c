#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	putchar(digit);
	putchar('\n');
	return (0);
}
