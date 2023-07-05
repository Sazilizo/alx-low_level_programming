#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: input string
 * @s2:input string
 * @n: input
 * Return: pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenS1, lenS2, i;
	char *dest;

	i = 0;
	while (s1 != NULL)
	{
		s1++;
		lenS1++;
	}
	lenS2 = strlen(s2);
	if (n >= lenS2)
		dest = malloc(sizeof(char) * (n + lenS1 +1));
	else
		dest = malloc(sizeof(char) * (lenS1 + lenS2 + 1));

	while (i <= lenS1)
	{
		dest[i] = s1[i];
		i++;
	}
	printf("%s\n", dest);
	while (i <= lenS1 + lenS2)
	{
		*dest++ = *s2++;
		i++;
	}
	return (dest);
}
