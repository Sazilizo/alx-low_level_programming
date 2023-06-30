#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints members of the linked list
 * @h: struct
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
size_t nodes;

	nodes = 0;
	temp = malloc(sizeof(list_t));

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		printf("[%u] %s\n", temp->len, temp->str);

		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
