#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concats two strings
 * @s1: string feeder
 * @s2: string to concat
 * Return: concated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2 , j, i;
	char *string;

	len1 = strlen(s1);
	len2 = strlen(s2);
	i = 0;
	j = 0;

	string = malloc((len1 + len2 + 1) *sizeof(char));

	if (string == NULL)
		return (NULL);

	while (s1[j] != '\0')
	{
		string[j] = s1[j];
		j++;
	}

	while (s2[i] != '\0')
	{
		string[j] = s2[i];
		j++;
		i++;
	}

	string[j] = '\0';
	

	return (string);
}


