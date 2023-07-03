#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint -prints all elements of lists
 * @h: struct
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numNodes;

	numNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numNodes++;
	}

	return (numNodes);
}

