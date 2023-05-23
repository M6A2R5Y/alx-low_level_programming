#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

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
