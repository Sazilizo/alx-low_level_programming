#include "main.h"
#include <stdio.h>

/**
 * _strchr - entry point
 * @s: memory address
 * @c: ipnut
 * Return: Always 0 (sucess)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
