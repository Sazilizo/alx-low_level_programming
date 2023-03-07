#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Eentry point
 * @dest: input value
 * @src: input
 * @n: input value
 * Return: (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
