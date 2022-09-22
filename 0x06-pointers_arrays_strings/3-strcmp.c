#include "main.h"

/**
* _strcmp - function compares two strings
* @s1: index string
* @s2: string to compare with
*
* Return: less than, equal to or
* greater than zero if S1 is
* lexicographically less than,
* equal to or greater than S2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int cmp = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{}

		else
		{
			cmp = s1[i] - s2[i];
			return (cmp);
		}
		i++;
	}

	return (cmp);
}

