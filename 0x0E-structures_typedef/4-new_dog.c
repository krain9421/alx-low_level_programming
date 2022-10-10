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
	struct dog *dog_new;
	int lname = 0;
	int lowner = 0;
	int i;

	while (name[lname])
	{ lname++; }

	while (owner[lowner])
	{ lowner++; }
	dog_new = malloc(sizeof(struct dog));
	if (dog_new == NULL)
	{
		free(dog_new);
		return (NULL);
	}
	dog_new->name = malloc(lname + 1);
	if (dog_new->name == NULL)
	{
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}
	dog_new->owner = malloc(lowner + 1);
	if (dog_new->owner == NULL)
	{
		free(dog_new->name);
		free(dog_new->owner);
		free(dog_new);
		return (NULL);
	}
	for (i = 0; i <= lname; i++)
		dog_new->name[i] = name[i];
	for (i = 0; i <= lowner; i++)
		dog_new->owner[i] = owner[i];

	dog_new->age = age;
	return (dog_new);
}

