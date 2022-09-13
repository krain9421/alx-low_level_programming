#include "main.h"

/**
* _islower - Checks for lowercase character
* @c: The character to check
* Return: 1 if c is lowercase
* Return 0 if otherwise
*/

int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	return (0);
}

