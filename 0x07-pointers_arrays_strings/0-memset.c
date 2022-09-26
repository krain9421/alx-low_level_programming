#include "main.h"

/**
* _memset - function fills memory with a constant byte
* @s: the memory area to  be filled
* @b: the constant
* @n: the number of bytes to be filled
*
* Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char **sptr;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	sptr = &s;

	return (sptr);
}

