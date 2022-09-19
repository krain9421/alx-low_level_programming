#include "main.h"

/**
* rev_string - function that reverses a string
* @s: string to be reversed
*
* Return: void
*/

void rev_string(char *s)
{
	int i = 0;
	int j;
	char *stmp = s;
	char tmp;

	while (*stmp != '\0')
	{
		i++;
		stmp++;
	}

	for (j = 0; j < i; j++)
	{
		i--;
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}

