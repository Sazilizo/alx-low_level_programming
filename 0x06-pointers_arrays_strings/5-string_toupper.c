#include "main.h"
#include <stdio.h>

/**
 * string_toupper- function turn letters to upper
 * @l: pointer to letters
 * Return: l
 */
char *string_toupper(char *l)
{
	int i;

	i = 0;
	while (l[i] != '\0')
	{
		if (l[i] >= 'a' && l[i] <= 'z')
		{
			l[i] = l[i] - 32;
		}
		i++;
	}
	return (l);
}
