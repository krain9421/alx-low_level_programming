#include "main.h"

/**
* _memcpy - function copies n bytes from memory area src
*  to memory area dest
* @dest: the memory area to be copied into
* @src: the memory area to be copied from
* @n: the number of bytes to be copied
*
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

