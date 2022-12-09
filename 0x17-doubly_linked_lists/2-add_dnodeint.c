#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - function that adds a new node
 *  at the beginning of a dlistint_t list.
 * @head: double pointer to the list
 * @n: number to be added
 *
 * Return: address of the new element
 * NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}

	return (new);
}
