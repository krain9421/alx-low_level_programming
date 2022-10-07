#include "main.h"
#include <stdlib.h>

/**
* array_range - create an array of integers from min to max
* @min: first value of the array
* @max: last value of the array
*
* Return: int pointer
* NULL if min > max
*/

int *array_range(int min, int max)
{
	int *ranged;
	int i = 0;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ranged = malloc(sizeof(int) * size);
	/*check if malloc returns NULL */
	if (ranged == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ranged + i) = min++;

	return (ranged);
}

