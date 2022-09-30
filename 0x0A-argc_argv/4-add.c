#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - program that prints its name,
*  followed by a new line
* @argc: argument count
* @argv: argument strings vector
*
* Return: 0 if run successfully,
* 1 otherwise
*/

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int n;
		int sum = 0;

		argc--;
		while (argc)
		{
			if (isdigit(*argv[argc]))
			{
				char *tmp = argv[argc];

				while (isdigit(*(++tmp)))
				{
				}
				if (!(*tmp))
				{
					n = atoi(argv[argc]);
					sum += n;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}

			else if (!isdigit(*argv[argc]))
			{
				printf("Error\n");
				return (1);
			}
			argc--;
		}
		printf("%d\n", sum);
		return (0);
	}

	printf("0\n");
	return (0);
}

