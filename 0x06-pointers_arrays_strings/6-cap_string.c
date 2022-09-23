#include "main.h"

/**
* cap_string - function that capitalizes
*  all words of a string
* @src: string to be capitalized
*
* Return: string
*/

char *cap_string(char *src)
{
	int i = 0;
	int j;
	char sprt[13] = {32, '\t', '\n', 44, ';', 46, '!', '?',
		'"', '(', ')', '{', '}'};

	while (src[i])
	{
		while (!(src[i] >= 97 && src[i] <= 122))
		{
			i++;
		}
		for (j = 0; j < 13; j++)
		{
			if (i == 0 || (src[i - 1] == sprt[j]))
			{
				src[i] -= 32;
				break;
			}
		}
		i++;
	}

	return (src);
}

