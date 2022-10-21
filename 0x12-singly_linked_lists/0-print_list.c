#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_list - function that prints all the
* elements of a list_t list
* @h: pointer to the list
*
* Return: number of nodes in the list;
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		count++;
	}
	return (count);
}

