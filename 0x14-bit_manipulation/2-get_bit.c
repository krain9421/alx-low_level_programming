#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_bit - returns the value of a bit at a given index
* @n: number in decimal
* @index: index
*
* Return: value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}

