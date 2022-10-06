#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - function that allocates memory using malloc
* @b: byte size of memory
*
* Return: Pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		return ((int *) (98));
	}

	return (mem);

}

