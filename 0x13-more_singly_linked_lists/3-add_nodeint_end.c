#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_nodeint_end - function that adds a new node
* at the end of a list_t list
* @head: double pointer to the list
* @n: integer element to be added
*
* Return: address of the new element
* NULL if failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
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

