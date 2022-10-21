#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_list - function that frees a list_t list
* @head: pointer to the list to be freed
*
* Return: void
*/

void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *next;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}

