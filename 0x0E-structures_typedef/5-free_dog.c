#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog to free
 *
 * Description: This function frees the memory allocated for a struct dog.
 * It frees the memory for the name and owner strings, and then frees
 * the memory for the struct dog itself.
 * If d is NULL, the function does nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		/* d is NULL, do nothing. */
		return;
	}
	/* Free the name and owner strings. */
	free(d->name);
	free(d->owner);
	/* Free the dog structure. */
	free(d);
}
