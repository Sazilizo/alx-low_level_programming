#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -print all lower alphabetsexcept q and e
 *
 * Return: Always0
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'q' && lower != 'e')
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
