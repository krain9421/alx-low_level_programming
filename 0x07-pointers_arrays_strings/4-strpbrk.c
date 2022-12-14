#include "main.h"

/**
* _strpbrk - function that searches a
* string for any of a set of bytes
* @s: string to be searched
* @accept: prefix substring
*
* Return: string
*/

char *_strpbrk(char *s, char *accept)
{
	char *find = NULL;
	char *c;

	while (*s)
	{
		c = accept;
		do {
			if (*c == *s)
			{
				find = s;
				return (find);
			}
		} while (*c++);
		s++;
	}

	return (NULL);
}

