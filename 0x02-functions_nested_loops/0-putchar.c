#include "main.h"

/**
* main - main function, program starts here
*
* Description: Prints "_putchar"
* Return: 0 if program runs successfully
*/

int main(void)
{
int i = 0;
int wrt[8] = {95, 112, 117, 116, 99, 104, 97, 114};
for (; i < 8; i++)
{
_putchar(wrt[i]);
}
_putchar('\n');
return (0);
}
