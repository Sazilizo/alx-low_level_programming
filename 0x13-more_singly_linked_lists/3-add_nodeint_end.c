#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head:struct
 * @n: struct memb
 * Return: address of new node or NULL ON FAILURE
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *temp;

	last = malloc(sizeof(listint_t));
	temp = malloc(sizeof(listint_t));
	if (last == NULL)
	{
		return (NULL);
	}
	if (temp == NULL)
		return (NULL);

	last->n = n;
	last->next = NULL;

	if (*head == NULL)
		*head = last;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = last;
	}
	return (last);
}
