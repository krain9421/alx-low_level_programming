#include "main.h"

/**
* _strncpy - function copies src to dest
* @dest: string to copy into
* @src: string to copy from
* @n: max number of bytes to be copied from src
*
* Return: string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

