#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len -  function that returns the number of elements
 *  in a linked dlistint_t list.
 * @h: pointer to the list
 *
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	for (; h != NULL; h = h->next)
		count++;

	return (count);
}
