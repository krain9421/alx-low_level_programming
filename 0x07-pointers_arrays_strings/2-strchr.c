#include "main.h"

/**
* _strchr - function that locates a character in a string
* @s: string to be checked
* @c: character to check for
*
* Return: pointer to the first occurrence of the character c in the string s
*/

char *_strchr(char *s, char c)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j += i;
		}
		i++;
	}

	if (j == 0)
	{
		return ('\0');
	}
	else
	{
		return (s + j);
	}
}

