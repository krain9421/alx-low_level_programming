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
	char *find = NULL;
	char *c;

	while (*s)
	{
		c = accept;
		do {
			if (*c == *s)
			{
				find = s;
				break;
			}
		} while (*c++);

		if (find != NULL)
		{
			return (s)
		}
		else
		{
			s++;
		}
		
	}

	return (NULL);
}

