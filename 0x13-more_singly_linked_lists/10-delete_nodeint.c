#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index- deletes a node at index in a list
 * @head: linked list/structure
 * @index: index to remove at
 * Return: 1 success : -1 failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del;
	unsigned int i;

	temp = *head;
	if (temp == NULL)
		return (-1);

	del = NULL;
	i = 0;

	while (temp != NULL && index > i)
	{
		del = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	if (del == NULL)
		*head = temp->next;
	else
	{
		del->next = temp->next;
	}

	free(temp);

	return (1);
}
