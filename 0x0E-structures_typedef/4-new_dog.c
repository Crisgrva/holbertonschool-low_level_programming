#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog.
 * @name: Dog to print information
 * @age: Dog to print information
 * @owner: Dog to print information
 * Return: return
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = NULL;

	if (!name || !owner || age < 0)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));

	if (!my_dog)
		return (NULL);

	my_dog->name = strdup(name);

	if (!my_dog->name)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = strdup(owner);

	if (!my_dog->owner)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	my_dog->age = age;
	return (my_dog);
}
