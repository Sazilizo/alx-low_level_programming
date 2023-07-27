#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: pointer to a file to append to
 * @text_content: A pointer pointing to content to write
 * Return: 1 success, -1 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, written, length;

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

	op = open(filename, O_WRONLY | O_APPEND);
	written = write(op, text_content, length);
	if (written == -1 || written == -1)
	{
		return (-1);
	}

	close(op);

	return (1);
}
