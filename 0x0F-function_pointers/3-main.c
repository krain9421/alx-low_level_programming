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
	char *op = malloc(sizeof(argv[2]));
	int *num1 = malloc(sizeof(int));
	int *num2 = malloc(sizeof(int));

	if (argc == 4)
	{
		op = argv[2];
		*num1 = atoi(argv[1]);
		*num2 = atoi(argv[3]);
		i = (*get_op_func(op))((*num1), (*num2));
		printf("%d\n", i);
		free(op);
		free(num1);
		free(num2);
		return (0);
	}
	free(op);
	free(num1);
	free(num2);
	printf("Error\n");
	exit(98);
}

