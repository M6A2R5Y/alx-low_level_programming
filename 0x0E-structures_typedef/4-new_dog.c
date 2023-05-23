#include <stdlib.h>
#include "dog.h"
/*
 * new_dog - creates a new dog struct and initializes its members
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: pointer to the newly created dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* Check if name and owner are NULL. If they are, return NULL. */
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	/* Allocate memory for a new dog. */
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	/* Copy the name and owner strings. */
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);
	/* Set the age. */
	new_dog->age = age;
	/* Return the new dog. */
	return new_dog;
}
