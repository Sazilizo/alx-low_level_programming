#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a new file
 * @filename: pointer to a file to be created with name
 * @text_content: A pointer pointing to content to write
 * Return : 1 success, -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, written, length;

	length = 0;

	if (filename == NULL)
	{
		return (-1);
		perror("Program");
	}
	if (text_content != NULL)
	{
		while (*text_content != '\0')
		{
			text_content++;
			length++;
		}
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	
	if (fd == -1)
		return (-1);
	written = write(fd, text_content, length);
	if(written == -1)
	{
		return (-1);
		perror("Error writting");
	}

	close(fd);

	return (1);
}
