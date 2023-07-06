#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary string
 * Return: converted number or 0 on failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;

	if (b == NULL)
		return (0);
	ui = 0;
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		ui <<= 1;
		ui += (*b - '0');
		b++;
	}

	return (ui);
}
