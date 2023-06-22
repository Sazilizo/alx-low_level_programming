#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -unction that prints numbers, followed by a new line
 * @separator: separates two numbers
 * @n: numbers of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		unsigned int num = va_arg(args, unsigned int);

		printf("%d", num);

		if (i < n - 1 && separator != NULL)
			printf("%c ", *separator);
	}
	va_end(args);
	printf("\n");
}
