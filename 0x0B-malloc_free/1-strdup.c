#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies astring and writes it in memory
 * @str:input value
 * Return:null if empty, pointerto str if not
 *
 */
char *_strdup(char *str)
{
	int a;
	int i;
	char *s;

	i = 1;
	a = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
