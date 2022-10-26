#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_list - function that frees a listint_t list
* @head: pointer to the list to be freed
*
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}

