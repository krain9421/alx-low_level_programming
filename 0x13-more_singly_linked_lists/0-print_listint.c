#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_listint - function that prints all the
* elements of a list_t list
* @h: pointer to the list
*
* Return: number of nodes in the list;
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}

	return (count);
}

