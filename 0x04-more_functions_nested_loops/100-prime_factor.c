#include <stdio.h>

/**
* main - program starts here
*
* Return: 0 if program runs successfully
*/

int main(void)
{
	long pnumber, div;

	pnumber = 612852475143;

	while (div < pnumber / 2)
	{
		if ((pnumber % 2) == 0)
		{
			pnumber = pnumber / 2;
			continue;
		}

		for (div = 3; div < (pnumber / 2); div += 2)
		{
			if ((pnumber % div) == 0)
			{
				pnumber = pnumber / 2;
			}
		}
	}
	printf("%ld\n", pnumber);

	return (0);
}
