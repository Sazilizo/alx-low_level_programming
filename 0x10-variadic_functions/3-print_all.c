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
	char *s, *separator;
	va_list args;

	va_start(args, format);
	j = 0;
	separator = "";
	while (format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
			c = va_arg(args, int);
			printf("%s%c", separator, c);
			break;
			case 'i':
			i = va_arg(args, int);
			printf("%s%d", separator, i);
			break;
			case 'f':
			f = va_arg(args, double);
			printf("%s%f", separator, f);
			break;
			case 's':
			s = va_arg(args, char*);
			printf("%s%s", separator, s);
			if (!(*s))
				printf("nil");
			break;
			default:
			j++;
			continue;
		}
		separator = ", ";
		j++;
	}
	va_end(args);
	printf("\n");
}
