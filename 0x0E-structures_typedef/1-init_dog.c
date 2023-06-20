#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - initializes a dog struct
 * @name: pointer to name 
 * @age: float age of dog
 * @owner:pointer to dog owner
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{

	struct dog *newD;

	newD = malloc(sizeof(d) + 1);
	newD->name = malloc(sizeof(d->name) + 2);
	if (newD == NULL)
		exit (98);
	if (newD->name == NULL)
		newD->name = NULL;
	if (newD->owner == NULL)
		newD->owner = NULL;

	newD->name = name;
	newD->age = age;
	newD->owner = owner;
}
