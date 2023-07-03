#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees up all the memory
 * @head: struct to free
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *memory;

	memory = head;
	while (memory != NULL)
	{
		temp = memory->next;
		free(memory);
		memory = temp;
	}
}
