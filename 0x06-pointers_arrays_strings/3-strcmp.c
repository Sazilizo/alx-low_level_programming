#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function compares two strings
 *@s1: input value
 *@s2:second string to compare
 *Return: s1 or s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
