#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize varible type of struct dog
 *
 * @d: input string
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to the array or null
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
