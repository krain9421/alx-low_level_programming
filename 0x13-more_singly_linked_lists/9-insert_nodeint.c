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
	listint_t *temp = *head;
	listint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	while (temp != NULL)
	{
		if (i == idx)
		{
			new->next = temp;
			temp = new;
			return (new);
		}
		else
			temp = temp->next;

		i++;
	}
	return (NULL);
}

