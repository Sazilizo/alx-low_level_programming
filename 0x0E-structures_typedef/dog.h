#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - astruct containing information about the dog
 * @name:name of the dog
 * @age: age of dog
 * @owner: do owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
