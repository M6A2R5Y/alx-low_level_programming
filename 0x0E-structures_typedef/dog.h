#ifndef DOG_H
#define DOG_H

/*
 * struct dog - Structure representing a dog's basic information.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This structure represents a dog's basic information, including its name, age, and owner.
 * Each member variable represents a specific aspect of the dog's information.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
/*
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
/* Initializes a dog structure with the provided name, age, and owner. */

void print_dog(struct dog *d);
/* Prints the details of the given dog structure. */

dog_t *new_dog(char *name, float age, char *owner);
/* Creates a new dog structure
 *
 * and initializes it with the provided name, age, and owner.
 *
 * Returns a pointer to the newly created dog structure.
 *
 */

void free_dog(dog_t *d);
/* Frees the memory allocated for the dog structure. */

char *_strcpy(char *dest, char *src);
/* Copies the string pointed to by src.
 * 
 * including the terminating null byte, to the buffer pointed to by dest.
 *
 * Returns a pointer to the destination string dest. 
 * */

int _strlen(char *s);
/* Calculates the length of the string s, excluding the terminating null byte.
 *
 * Returns the length of the string.
 *
 */

#endif
