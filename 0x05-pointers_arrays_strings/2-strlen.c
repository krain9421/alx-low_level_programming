#include "main.h"

/**
* _strlen - function returns the length of a string
* @s: string to be checked
*
* Return: Length of s
*/

int _strlen(char *s)
{
	/* variable to hold the length of string */
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}

