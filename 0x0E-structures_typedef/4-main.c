#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Ghost", 4.75, "Jon Snow");
	if (my_dog == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	printf("My name is %s, I am %.2f, and my owner is %s\n",
		   my_dog->name, my_dog->age, my_dog->owner);
	return (0);
}
