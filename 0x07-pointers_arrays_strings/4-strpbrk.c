#include "main.h"

/**
* _strpbrk - function locates the first occurrence
* in the string s of any of the bytes in the string accept
* @s: string to be checked
* @accept: string occurence
*
* Return: pointer to the byte in s that
* matches one of the bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		/*return s char position if found in accept*/
		/*if not found return NULL*/
		if (_strchr(accept, *s)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}

	return (NULL);
}

