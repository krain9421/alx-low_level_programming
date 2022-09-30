#include "main.h"
#include <stdio.h>

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
	while (argc--)
	printf("%s\n", *argv++);

	return (0);
}

