#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - prints out the number of elements in a linked list
 * @h: structure;
 * Return: len
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t len;

	temp = h;
	len = 0;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	return (len);
}
