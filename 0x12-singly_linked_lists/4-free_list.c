#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list -frees memory from list
 * @head: beginning of list (list)
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

}
