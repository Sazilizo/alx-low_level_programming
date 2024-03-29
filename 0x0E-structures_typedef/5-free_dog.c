#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -frees dog memory
 * @d:dog struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
