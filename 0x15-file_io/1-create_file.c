#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a new file
 * @filename: pointer to a file to be created with name
 * @text_content: A pointer pointing to content to write
 * Return: 1 success, -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, written, length;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}

	fd = open(filename, 'a');
	written = write(fd, text_content, length);
	if (written == -1 || written == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
