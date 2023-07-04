#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at the index;
 * @head: structure
 * @index: index for node to return
 * Return:node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	i = 0;

	while (temp != NULL)
	{
		while (index > i)
		{
			temp = temp->next;
			i++;
		}
		return (temp);
	}
	return (temp);
}
