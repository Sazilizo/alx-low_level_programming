#include <unistd.h>

/**
 * _putchar- prints a single character to screen
 * @c: character input
 * Return: (0)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
