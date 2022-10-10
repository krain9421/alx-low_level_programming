#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* print_dog - function prints a struct dog
* @d: struct dog pointer
*
* Return: void
*/

void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	else if (d != 0)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

