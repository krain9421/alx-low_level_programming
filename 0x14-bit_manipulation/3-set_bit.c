#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: pointer to number in decimal
* @index: index
*
* Return: integer result
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index > 64)
		return (-1);

	mask = 1 << index;
	*n = ((*n & ~mask) | (1 << index));

	return (1);
}

