#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a
 * variable of type struct dog
 * @d: New Dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
