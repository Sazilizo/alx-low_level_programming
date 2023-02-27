#include "main.h"

/**
 * rev_string - reverses a string
 * @*s: string to be reversed
 * Return:void
 */
void rev_string(char *s)
{
	int reverse= s[0];
	int iter = 0;
	int i;

	while (s[iter] != '\0')
	iter++;
	for ( i = 0; i < iter; i++)
	{
		iter--;
		reverse =s[i];
		s[i]=s[iter];
		s[iter] = reverse;
	}
}
