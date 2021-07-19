#ifndef DOG_H
#define DOG_H

/* STRUCTURES */
/**
 * struct dog - dog information
 * @name: Dog's Name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* PROTOTYPES */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
