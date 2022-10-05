#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* argstostr - function concatenates all arguments
* @ac: argument count
* @av: argument vector
*
* Return: String pointer
*/

char *argstostr(int ac, char **av)
{
	int height = 0;
	int width = 0;
	int strings_len = ac;
	int i = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* Get the length of all the strings in av */
	while (height < ac)
	{
		while (av[height][width])
		{
			strings_len++;
			width++;
		}
		height++;
	}

	str = malloc(sizeof(char) * strings_len + 1);
	if (str == NULL)
		return (NULL);

	while (height < ac)
	{
		while (av[height][width])
		{
			str[i] = av[height][width];
			i++;
			width++;
		}
		if (str[i] == '\0')
			str[i++] = '\n';

		height++;
	}
	return (str);
}

