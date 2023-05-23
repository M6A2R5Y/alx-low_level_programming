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
	dog_t *newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}
	int nameLen = strlen(name);
	int ownerLen = strlen(owner);
	newDog->name = malloc(sizeof(char) * (nameLen + 1));
	newDog->owner = malloc(sizeof(char) * (ownerLen + 1));
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	strncpy(newDog->name, name, nameLen + 1);
	strncpy(newDog->owner, owner, ownerLen + 1);
	newDog->age = age;
	return newDog;
}
