#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *string = va_arg(args, char*);

		printf("%s", string);

		if (string == NULL)
			printf("(nil)\n");
		if (i < n - 1 && separator != NULL)
			printf("%c ", *separator);
	}

	va_end(args);
	printf("\n");
}
