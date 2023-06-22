#include <stdio.h>
#include <stdarg.h>


/**
 * print_all - printfs most data types
 * @format: format specifier for selected data types
 */

void print_all(const char * const format, ...)
{
	int j, i;
	char c;
	float f;
	char *s;
	char *separator;
	va_list args;

	va_start(args, format);
	j = 0;
	separator = "";

	while (format[j] != '\0')
	{
		if (format[j] == 'c')
		{
			c = va_arg(args, int);
			printf("%s%c", separator, c);
		}
		else if (format[j] == 'i')
		{
			i = va_arg(args, int);
			printf("%s%d", separator, i);
		}
		else if (format[j] == 'f')
		{
			f = va_arg(args, double);
			printf("%s%f", separator, f);
		}
		else if (format[j] == 's')
		{
			s = va_arg(args, char*);
			printf("%s%s", separator, s);
			while (!(*s))
				printf("nil");
		}
		separator = ", ";
		j++;
	}
	va_end(args);
	printf("\n");
}
