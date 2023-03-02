#include <unistd.h>

/**
 * _putchar() - puts a character to the screen
 * @c: character to be outputed
 * Return: always -1 success 
 * Return: -1 failure
 */

int _putchar(char c)
{
	return (write(1, &c ,1);
}
