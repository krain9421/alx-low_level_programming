#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* get_nodeint_at_index - function returns the nth node
* of a listint_t linked list
* @head: pointer to linked list
* @index: index of desired node
*
* Return: node
* NULL if node doesn't exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}
	return (NULL);
}

