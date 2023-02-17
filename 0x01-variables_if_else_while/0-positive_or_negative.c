#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assign number to n, print "negative","positive" or "zero" depending on number
 *
 * If : number is greater than 0 print positive
 * Else if : Number is less than 0 print negative
 * else : print 0
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
