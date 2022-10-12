#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - function that executes a function
* given as a parameter on each element of an array
* @array: int array to be passed
* @size: size of the array
* @action: function to be called
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}

