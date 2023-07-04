#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint- deletes head of node an returns node's data
 * @head:structure
 * Return: head's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nVal;

	temp = *head;

	if (*head == NULL)
		return (0);
	nVal = (*head)->n;

	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (nVal);
}
