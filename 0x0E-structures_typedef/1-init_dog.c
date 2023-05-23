#include <stdlib.h>
#include "dog.h"

/*
 * This function initializes a variable of type struct dog.
 *
 * Parameters:
 *
 * d: pointer to struct dog to initialize
 * name: name to initialize
 * age: age to initialize
 * owner: owner to initialize
 * 
 * Returns: void
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	/* Set the name, age, and owner members of the struct dog. */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
