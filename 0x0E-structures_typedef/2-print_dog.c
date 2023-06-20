#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <math.h>
/**
 * print_dog -prints out a dog struct
 * @struct dog *d:dog structutre
 */

void print_dog(struct dog *d)
{

	struct dog *new_dog;

	new_dog = malloc(sizeof(d));

	if (new_dog == NULL)
		exit (98);
	new_dog->name = malloc(sizeof(d->name));
	new_dog->owner = malloc(sizeof(d->owner));

	if (new_dog->name == NULL)
		new_dog->name = NULL;
	if (new_dog->owner == NULL)
		new_dog->owner = NULL;

	new_dog->name = d->name;
	new_dog->age = d->age;
	new_dog->owner = d->owner;


	printf("Name: %s\n",new_dog->name);
	printf("Age: %f\n", new_dog->age);
	printf("Owner: %s\n", new_dog->owner);
}
