#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - return number of elements
 * @h: struct
 * Return: num of elems, size_t type
 */

size_t listint_len(const listint_t *h)
{
	size_t numElems;

	numElems = 0;
	while (h != NULL)
	{
		h = h->next;
		numElems++;
	}

	return (numElems);
}
