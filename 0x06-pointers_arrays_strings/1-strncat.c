#include "main.h"
#include <stdio.h>

/**
 * _strncat- functions concats two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] =  '\0';
	return (dest);
}
