#include "main.h"

/**
* _strncat - function appends the src string to the dest string
* @dest: string to append to
* @src: string to copy from
* @n: max number of bytes to be copied from src
*
* Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while(j < n && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

