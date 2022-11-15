#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - create a new dog
 *@name: string
 *@age: float
 *@owner: string
 *
 *Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i, c_name, c_owner;

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL || !(name) || !(owner))
	{
		free(n_dog);
		return (NULL);
	}

	for (c_name = 0; name[c_name]; c_name++)
		;

	for (c_owner = 0; name[c_owner]; c_owner++)
		;

	n_dog->name = malloc(c_name + 1);
	n_dog->owner = malloc(c_owner + 1);

	if (!(n_dog->name) || !(n_dog->owner))
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	for (i = 0; i < c_name; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';

	for (i = 0; i < c_owner; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';

	n_dog->age = age;

	return (n_dog);
}
