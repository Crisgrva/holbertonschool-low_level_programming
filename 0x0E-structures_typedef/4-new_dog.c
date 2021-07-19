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
	unsigned int i = 0;
	dog_t *my_dog = NULL;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL || name == NULL || owner == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->name = malloc(strlen(name) + 1);
	my_dog->owner = malloc(strlen(owner) + 1);

	if (my_dog->name == NULL || my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	for (i = 0; i < (strlen(name) + 1); i++)
		my_dog->name[i] = name[i];
	my_dog->name[i] = '\0';
	my_dog->age = age; /* Dont allocate in memory */

	for (i = 0; i < (strlen(owner) + 1); i++)
		my_dog->owner[i] = owner[i];
	my_dog->owner[i] = '\0';

	return (my_dog);
}
