#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: structure
 * @str: strin value
 * Return: address of the newly created
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *temp;
	unsigned int len;

	temp = *head;
	len = 0;
	while (str[len])
		len++;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);

	end->str = strdup(str);
	end->len = len;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = end;

	return (end);
}

