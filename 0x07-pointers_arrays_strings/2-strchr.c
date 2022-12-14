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
	char *find = NULL;

	do {
		if (*s == c)
		{
			find = s;
			break;
		}
	} while (*s++);

	return (find);
}

