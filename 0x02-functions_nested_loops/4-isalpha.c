#include "main.h"

/**
* _isalpha - Checks for lowercase character
* @c: The character to check
* Return: 1 if c is a character
* Return 0 if otherwise
*/

int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}

