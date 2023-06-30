#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beinning
 * @head: structure
 * @str: strin value
 * Return: address of the newly created
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	list_t *temp;
	unsigned int len;

	len = 0;

	while (str[len])
		len++;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);

	first->str = strdup(str);
	first->len = len;
	first->next = *head;

	temp = first;
	while (temp != NULL)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (first);
}
