#include <stdio.h>
/**
* main - main function, program starts here
*
* Description: Prints all possible different combinations of three digits
* Return: 0 if program runs successfully
*/
int main(void)
{
	int n1 = 48;
	int n2 = 49;
	int n3 = 50;

	for (; n1 < 56; n1++)
	{
		n2 = 49;
		for (; n2 < 57; n2++)
		{
			int k = 0;

			for (; k < 8; k++)
			{
				if (n2 >= n3 + k || n1 >= n2)
				{}
				else
				{
					putchar(n1);
					putchar(n2);
					putchar(n3 + k);
					if (n1 == 55 && n2 == 56 && k == 7)
					{}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
