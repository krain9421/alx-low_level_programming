#include <stdio.h>
#include <stdlib.h>

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
	int code_num = 0;

	if (argc == 2)
	{
		code_num  = atoi(argv[1]);
		if (bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
		while (i < code_num)
		{
			printf("%02hhx", *((char *)main + i));
			if (i < code_num - 1)
				printf(" ");
			else
				printf("\n");

			i++;
		}

		return (0);
	}
	printf("Error\n");
	exit(2);
}

