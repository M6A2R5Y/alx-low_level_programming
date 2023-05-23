#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/*
 * print_dog - prints a struct dog
 * @d: struct dog to print
 *
 * Description: This function prints the information in a variable of type `struct dog`.
 *
 * Check if d is NULL. If it is, do nothing.
 * Check if the name and owner members are NULL. If they are, set them to "(nil)".
 * Print the name, age, and owner of the dog.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		/* d is NULL, do nothing. */
		return;
	}
	/* Check if the name and owner members are NULL. If they are, set them to "(nil)". */
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
