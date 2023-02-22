#include <unistd.h>

/**
 * _putchar - writes single characters to screen
 *
 * %C - the character to print
 *
 * Return: success (1)
 * on error, return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
