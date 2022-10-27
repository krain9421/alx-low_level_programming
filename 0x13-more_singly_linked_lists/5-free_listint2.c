#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_listint2 - function that frees a listint_t list
* @head: double pointer to the list to be freed
*
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = *head;
		(*head) = &(*head)->next
		free(tmp);
	}
	*head = NULL;
}

