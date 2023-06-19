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

	d->name = name;
	d->age = age;
	d->owner = owner;
}
