#include <unistd.h>

/**
 * _putchar - entry point
 * @c: charater to print
 * @Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
