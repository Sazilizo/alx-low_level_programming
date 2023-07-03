#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint -  adds a new node to head
 * @head: struct
 * @n: struct val
 * Return: address of new elem or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;

	*head = temp;
	return (*head);
}

