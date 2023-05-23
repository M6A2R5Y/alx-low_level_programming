#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: A pointer to a null-terminated string that contains the dog's name.
 * @age: A float that represents the dog's age in years.
 * @owner: A pointer to a null-terminated string that contains the name of the dog's owner.
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
/* This function initializes a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* This function prints the information in a variable of type struct dog. */
void print_dog(struct dog *d);
/* This function creates a new variable of type struct dog and initializes it with the given name, age, and owner. */
dog_t *new_dog(char *name, float age, char *owner);
/* This function frees the memory allocated for a variable of type struct dog */
void free_dog(dog_t *d);
/* This function copies a string. */
char *_strcpy(char *dest, char *src);
/* This function gets the length of a string.*/
int _strlen(char *s);

#endif
