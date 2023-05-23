#include <stdlib.h>
#include "dog.h"
/*
 * new_dog - creates a new dog struct and initializes its members
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: pointer to the newly created dog struct
 */
/*
 * Get the lengths of the name and owner strings.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1 = _strlen(name);
	int len2 = _strlen(owner);
	/* Allocate memory for a new dog structure. */
	dog_t *dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		/* Failed to allocate memory, return NULL. */
		return (NULL);
	}
	/* Allocate memory for the name and owner strings. */
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		/* Failed to allocate memory for name, free dog and return NULL. */
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		/* Failed to allocate memory for owner, free dog, name and return NULL. */
		free(dog->name);
		free(dog);
		return (NULL);
	}
	/*Copy the name and owner strings into the dog structure. */
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	/* Set the age. */
	dog->age = age;
	/* Return the new dog. */
	return dog;
}
