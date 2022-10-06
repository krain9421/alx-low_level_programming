#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings
* @s1: first string
* @s2: second string
* @n: bytes of s2 to be concatenated
*
* Return: pointer to concatenated string
* NULL if function fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[l1])
	{
		l1++;
	}
	while (s2[l2])
	{
		l2++;
	}
	if (n >= l2)
	{
		n = l2;
	}

	concat = malloc(l1 + n + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		concat[i] = s1[i];

	for (j = l1; j < l1 + n; j++)
		concat[j] = s2[j - l1];

	concat[l1 + n] = '\0';
	return (concat);
}

