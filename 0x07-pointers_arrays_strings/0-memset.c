#include "main.h"

/**
* _memset - function fills memory with a constant byte
* @s: the memory area to  be filled
* @b: the constant
* @n: the number of bytes to be filled
*
* Return: pointer to memory area s
*/

char **_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char **sptr;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	sptr = s;

	return (s);
}

