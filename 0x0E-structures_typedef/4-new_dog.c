#include <stdlib.h>
#include "dog.h"

/**
* new_dog - function creates a new dog
* @name: dog name
* @age: dog age
* @owner: dog owner
*
* Return: struct dog pointer
* NULL if function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_new;
	char *cname;
	char *cowner;
	int lname = 0;
	int lowner = 0;

	while(name[lname])
	{ lname++; }
	while(owner[lowner]);
	{ lowner++; }
	dog_new = malloc(sizeof(struct dog));
	if (dog_new = NULL)
	{ return (NULL); }
	dog_new->name = malloc(lname + 1);
	if (dog_new->name == NULL)
	{ return (NULL); }
	dog_new->owner = malloc(lowner + 1);
	if (dog_new->owner == NULL)
	{ return (NULL); }

	while (*name)
	{
		*(dog_new->name++) = *name++;
	}
	 while (*owner)
	{
		*(dog_new->owner++) = *owner++;
	}
	return (dog_new);
}

