#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	size_t count;
	ssize_t printedl;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	count = read(fd, buffer, letters);
	printedl = write(STDOUT_FILENO,buffer,count);

	free(buffer);
	close(fd);

	return(printedl);
}
