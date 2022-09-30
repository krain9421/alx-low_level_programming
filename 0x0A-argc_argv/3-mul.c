#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints its name,
*  followed by a new line
* @argc: argument count
* @argv: argument strings vector
*
* Return: 0 if run successfully
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d\n", a * b);
	}
	else if (argc < 3 || argc > 3)
	printf("Error\n");

	return (0);
}

