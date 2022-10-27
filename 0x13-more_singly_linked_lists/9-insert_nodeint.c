#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* insert_nodeint_at_index - function that inserts a new node
* at a given position
* @head: double pointer to linked list
* @idx: index of desired node
* @n: integer element to add
*
* Return: address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i = 0;
	unsigned int count = 0;
	listint_t *temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	else if (idx < count)
	{
		while (*head != NULL)
		{
			if (i == idx)
			{
				new->next = *head;
				*head = new;
				return (new);
			}
			i++;
			head = &(*head)->next;
		}
	}
	return (NULL);
}

