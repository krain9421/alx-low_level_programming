#include <stdio.h>

/**
* main - program starts here
*
* Return: 0 if run successfully
*/

int main(void)
{
	int sum, t1, t2, next;

	t1 = 0;
	t2 = 1;
	next = t1 + t2;
	sum = 0;

	while (next < 4000000)
	{
		if (next % 2 == 0)
		{
			sum += next;
		}
	}
	printf("%d\n", sum);

	return (0);
}

