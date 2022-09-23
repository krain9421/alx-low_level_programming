#include "main.h"

/**
* leet - function that encodes a string into 1337
* @src: string to be encoded
*
* Return: string
*/

char *leet(char *src)
{
	int i = 0;
	int j;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (src[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (src[i] == r[j] || src[i] - 32 == r[j])
			{
				src[i] = n[j];
			}
		}
		i++;
	}

	return (src);
}

