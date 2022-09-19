#include "main.h"

/**
* puts2 - function prints only one character out of 2 in a string
* @str: input string
*
* Return: void
*/

void puts2(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(*(str + j));
	}
}

