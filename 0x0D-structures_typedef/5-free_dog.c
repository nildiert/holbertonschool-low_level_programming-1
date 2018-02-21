#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees dogs
 *
 * @d: dog info
 *
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);

	return;
}
