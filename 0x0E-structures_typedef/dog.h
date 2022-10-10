#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
* struct dog - dog struct
* @name: name of dog
* @age: float age of dog
* @owner: owner of dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

