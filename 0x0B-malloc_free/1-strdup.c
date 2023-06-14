#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _strdup - create a duplicate of a string
 * @str: string feeder
 * @Return: duplicate string
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = strlen(str) + 1;
	unsigned int i;

        duplicate = malloc(length * sizeof(char));

	if (str == NULL)
		return (NULL);
	
	for (i = 0; i < length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
