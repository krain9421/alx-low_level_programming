#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node_end - function that adds a new node
* at the end of a list_t list
* @head: double pointer to the list
* @str: string to be added
*
* Return: address of the new element
* NULL if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int n = 0;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	while (str[i++])
		n++;

	new->str = strdup(str);
	new->len = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new->next = NULL;
		temp->next = new;
	}
	return (new);
}

