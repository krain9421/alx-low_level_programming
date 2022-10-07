#include "main.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory
* for an array, using malloc
* @nmemb: number of elements
* @size: size of each element in bytes
*
* Return: pointer to allocated memory
* NULL if malloc fails or nmemb or size is 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *calloc;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	calloc = malloc(size * nmemb);
	/* check if malloc returns NULL */
	if (mem == NULL)
	{
		return (NULL);
	}

	for (; i < size * nmemb; i++)
	{
		*(calloc + i) = NULL;
	}

	return (calloc);
}

