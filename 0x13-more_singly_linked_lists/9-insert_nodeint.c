#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at specific index
 * @head: structure/linked list
 * @idx: index;
 * @n: data;
 * Return:address of node or null on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *node;
	unsigned int i;

	i = 0;
	if (idx == 0)
	{
		node = malloc(sizeof(listint_t));
		node->n = n;
		node->next = (*head)->next;
		*head = node;

		return (node);
	}
	temp = *head;

	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));

	node->n = n;
	node->next = temp->next;
	temp->next = node;

	return (node);
}
