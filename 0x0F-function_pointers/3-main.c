#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - program starts here
* @argc: argument count
* @argv: argument vector
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;
	int n1 = 0;
	int n2 = 0;

	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		i = get_op_func(argv[2])((n1), (n2));
		printf("%d\n", i);

		return (0);
	}
	printf("Error\n");
	exit(98);
}

