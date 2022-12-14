#include "main.h"
#include <stdlib.h>

/**
* _strdup - function returns a pointer to a
* newly allocated space in memory which
* contains copy of strings passed
* @str: pointer to string being duplicated
*
* Return: NULL if string is NULL
* pointer to duplicated string on success
*/

char *_strdup(char *str)
{
	char *nstr;
	unsigned int len = 0;
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
	{
		return (NULL);
	}

	while (len--)
	{
		*(nstr + i) = *(str + i);
		i++;
	}
	*(nstr + i) = '\0';

	return (nstr);
}

