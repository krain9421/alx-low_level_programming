#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - function that frees
 *  a dlistint_t list.
 * @head: pointer to the list to be freed
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp = head;
	dlistint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
