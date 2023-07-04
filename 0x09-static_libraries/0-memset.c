#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - entry point
 *@s:strin feeder
 *@b: input value
 *@n: input value
 * Return: b
 * 
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

