#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name passed a arg
 * @name: name to print
 * @f: is acallback function to the function to print name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
