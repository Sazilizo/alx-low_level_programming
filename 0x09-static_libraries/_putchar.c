#include <stdio.h>
#include <unistd.h>

/**
 * _putchar() - prints character to screen
 * @c:sinle character to print
 * Return:1 for success -1 failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
