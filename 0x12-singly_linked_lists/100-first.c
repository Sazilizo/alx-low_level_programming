#include <stdio.h>

/**
 * print_first - prints a sentnce before main func
 */
void print_first(void) __attribute__ ((constructor));

void print_first(void)
{
	 printf("You're beat! and yet, you must allow,\n");
	 printf("I bore my house upon my back!\n");
}
