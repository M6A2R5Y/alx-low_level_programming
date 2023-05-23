#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog.
 * @d: Pointer to struct dog to print.
 *
 * Description: This function prints the details of a struct dog, including its name, age, and owner.
 * If the pointer to struct dog is NULL, the function returns immediately.
 * If the name or owner field of the struct dog is NULL, it is treated as "(nil)" and printed accordingly.
 * The name, age, and owner fields of the struct dog are printed using printf.
 */
void print_dog(struct dog *d)
{
	/* Check if d is NULL. If it is, do nothing. */
	if (d == NULL)
	{
		return;
	}
	/* Check if the name and owner members are NULL. If they are, set them to "(nil)". */
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	/* Print the name, age, and owner of the dog. */
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
