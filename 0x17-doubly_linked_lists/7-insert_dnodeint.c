#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - function that inserts a
 *  new node at a given position.
 * @h: double pointer to linked list
 * @idx: index of desired node
 * @n: integer element to add
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp = *h;
	unsigned int i = 0;
	unsigned int count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*h == NULL)
	{
		temp = new;
		temp->prev = NULL;
		temp->next = NULL;
		return (new);
	}
	
	if (idx == 0)
	{
		temp->prev = new;
		new->next = temp;
		new->prev = NULL;
		temp = new;

		return (new);
	}
	else if (idx > 0 && idx <= count)
	{
		temp = *h;
		for (i = 1; i < idx; i++)
			temp = temp->next;

		new->next = temp->next;
		new->prev = temp;
		temp->next = new;
		return (new);
	}
	return (NULL);
}
