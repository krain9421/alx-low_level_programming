#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: pointer to number in decimal
* @index: index
*
* Return: 1 if successful
* 0 if error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index > 64)
		return (-1);

	mask = 1 << index;
	*n = ((*n & ~mask) | (0 << index));

	return (1);
}

