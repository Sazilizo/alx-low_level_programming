#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - prints a single char to screen
 * @c: input char
 * Return: 1 success -1 failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
