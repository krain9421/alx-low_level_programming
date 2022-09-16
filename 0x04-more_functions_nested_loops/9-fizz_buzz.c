#include <stdio.h>

/**
* main - program starts here
*
* Description: Fizz-Buzz
* Return: 0 if program runs successfully
*/

int main(void)
{
	int i = 1;
	int m3, m5;

	for (; i < 101; i++)
	{
		m3 = i % 3;
		m5 = i % 5;

		if (m3 == 0 && m5 != 0)
		{
			printf("Fizz ");
		}
		else if (m5 == 0 && m3 != 0)
		{
			printf("Buzz ");
		}
		else if (m5 == 0 && m3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	return (0);
}

