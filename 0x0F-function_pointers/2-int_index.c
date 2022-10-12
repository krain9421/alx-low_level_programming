#include "function_pointers.h"
#include <stdlib.h>

/**
* int_index - function that searches for an integer
* @array: integer array to be searched
* @size: number of elements in the array
* @cmp: pointer to the function to be called
*
* Return: void
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int compare;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (; i < size; i++)
		{
			compare = cmp(array[i]);
			if (compare)
				return (i);
		}
	}

	return (-1);
}

