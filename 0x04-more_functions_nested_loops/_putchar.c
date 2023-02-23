#include <unistd.h>

/**
 * _putchar - writes a single character to the screen
 *
 * &c - the character
 * Return: Always(0)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
