#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prits to POSIX STDOUT
 * @filename: filename to read
 * @letters: numbers to read and print
 * Return: numb of read (success) , 0 failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t written;
	ssize_t fd;
	ssize_t read_bytes;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY | O_CREAT);
	if (fd == -1)
	{
		return (0);
		perror("Program");
	}
	buffer = malloc(letters);
	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		return (0);
		perror("Program");
	}
	written = write(STDOUT_FILENO, buffer, read_bytes);

	free(buffer);
	close(fd);
	return (written);
}
