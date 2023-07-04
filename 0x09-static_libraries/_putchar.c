#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * _putchar - prints out a single char
 * @c: character feed
 * Return: always 0;
 *
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
