#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concantenates two strings
* @s1: first string
* @s2: second string
*
* Return: newly allocated memory
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int size;
	unsigned int i = 0;
	unsigned int j = 0;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	size = len1 + len2;
	nstr = malloc((sizeof(char) * size) + 1);

	if (nstr == NULL)
		return (NULL);

	while (i < len1)
	{
		nstr[i] = s1[i];
		i++;
	}

	while (i <= size)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}

	return (nstr);
}

