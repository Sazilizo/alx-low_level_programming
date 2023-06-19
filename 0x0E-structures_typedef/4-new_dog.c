#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog: creates a new dog instance
 * @name: name of dog
 * @age: dog age;
 * @owner: do owner
 * Return: instance of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog =malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name =malloc(sizeof(name));
	if (dog->name == NULL)
		return (NULL);
	
	dog->owner =malloc(sizeof(owner));
	if (dog->owner == NULL)
		return (NULL);

	dog->name = strcpy(dog->name,name);
	dog->age = age;
	dog->owner = strcpy(dog->owner,owner);
	
	free(dog->name);
	free(dog->owner);

	return (dog);
}