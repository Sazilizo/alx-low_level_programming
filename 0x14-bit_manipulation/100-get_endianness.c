#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned long int i = 0x01;
	char *byte = (char *) &i;

	return (*byte);
}

