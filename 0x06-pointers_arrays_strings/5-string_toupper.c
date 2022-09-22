#include "main.h"

/**
* string_toupper - function changes all lowercase letters
* of a string to uppercase
* @src: string to copy from
*
* Return: string
*/

char *string_toupper(char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		if (src[i] >= 97 && src[i] <= 122)
		{
			src[i] = src[i] - 32;
		}
	}

	return (src);
}

