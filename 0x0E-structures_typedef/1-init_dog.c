#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to struct dog to initialize.
 * @name: Name to initialize.
 * @age: Age to initialize.
 * @owner: Owner to initialize.
 *
 * Description: This function initializes a struct dog variable with the provided values.
 * If the pointer to struct dog is NULL, it allocates memory for a new struct dog using malloc.
 * The name, age, and owner fields of the struct dog are assigned the provided values.
 *Return: void
 * 
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Check if d is NULL. If it is, allocate memory for a new struct dog. */
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
		{
			/* Could not allocate memory. */
			return;
		}
	}
	/* Set the name, age, and owner members of the struct dog. */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
