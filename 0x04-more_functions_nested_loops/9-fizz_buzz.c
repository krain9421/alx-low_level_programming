#include <stdio.h>

/**
* main - program starts here
* Description: Fizz-Buzz
*
* Return: 0 if program runs successfully
*/

int main(void)
{
	int i = 0;

	for (; i < 101; i++)
	{
		int m3 = i % 3;
		int m5 = i % 5;

		if (m3 == 0 && m5 != 0)
		{
			puts("Fizz ");
		}
		else if (m5 == 0 && m3 != 0)
		{
			puts("Buzz ");
		}
		else
		printf("%d ", i);
	}

	return (0);
}

