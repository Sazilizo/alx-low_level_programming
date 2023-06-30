#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list -frees memory from list
 * @head: beginning of list (list)
 */

void free_list(list_t *head)
{


	while (head != NULL)
	{
		list_t *temp = head;
		head = head->next;
		free(temp);
	}

}
