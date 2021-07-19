#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function that creates a new dog.
 * @name: Dog to print information
 * @age: Dog to print information
 * @owner: Dog to print information
 * Return: return
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	free(my_dog);

	return (my_dog);
}
