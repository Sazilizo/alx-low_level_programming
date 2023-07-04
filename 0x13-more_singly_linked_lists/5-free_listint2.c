#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees memory
 * @head: structure to free
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *memory;

	memory = *head;
	temp = NULL;
	while (memory != NULL)
	{
		temp = memory->next;
		free(memory);
		memory = temp;
	}

	*head = temp;

}
