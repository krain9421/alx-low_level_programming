#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring
* @s: string whose length to be checked
* @accept: prefix substring
*
* Return: integer length of substring
*/

unsigned int _strspn(char *s, char *accept)
{
	char *find = NULL;
	char *c;
	unsigned int len = 0;

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
			len++;
		}
		else
		{
			return (len);
		}
		s++;
		
	}

	return (len);
}

