#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i; /* counter */
	int str_count = 0, owner_count = 0;
	dog_t *fido;

	if (name == NULL || owner == NULL)
		return (NULL);
	fido = malloc(sizeof(dog_t));
	if (fido == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		str_count++;

	fido->name = malloc(sizeof(char) * (str_count + 1));
	if (fido->name == NULL)
	{
		free(fido);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		fido->name[i] = name[i];
	fido->name[i] = '\0';

	fido->age = age;

	if (fido->owner != NULL)
	{
		for (i = 0; owner[i] != '\0'; i++)
			owner_count++;
	}
	fido->owner = malloc(sizeof(char) * (owner_count + 1));
	if (fido->owner == NULL)
	{
		free(fido->name);
		free(fido);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		fido->owner[i] = owner[i];
	fido->owner[i] = '\0';
	return (fido);
}
