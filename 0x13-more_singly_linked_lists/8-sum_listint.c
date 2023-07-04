#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums up all the data in the linked list
 * @head: structure/linked list
 * Return: sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	temp = head;
	sum = 0;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
