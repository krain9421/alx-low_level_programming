#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to previously allocated memory
* @old_size: size in bytes allocated for ptr
* @new_size: size in bytws of new memory block
*
* Return: pointer to new mem block
* NULL if new_size == 0 or ptr
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_new;
	unsigned int i = 0;

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		ptr_new = malloc(new_size);
		if (ptr_new == NULL)
			return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size > old_size && (ptr != NULL))
	{
		ptr_new = malloc(new_size);
		if (ptr_new == NULL)
			return (NULL);
		for (; i < old_size; i++)
			*(ptr_new + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (ptr_new);
}

