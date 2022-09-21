#include "main.h"

/**
* _strcat - function appends the src string to the dest string
* @dest: string to appeend to
* @src: string to copy from
*
* Return: string
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while(src[j])
	{
		dest[i] = src[j];
		i++;;
		j++;
	}

	return (dest);
}

