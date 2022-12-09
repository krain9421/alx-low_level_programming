#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - function that returns
 *  the sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to linked list
 *
 * Return: sum of all data
 * 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
