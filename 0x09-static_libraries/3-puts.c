#include <stdio.h>


/**
 * _puts - prints single chars to screen
 * @s:string feeder
 */


void _puts(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
}
