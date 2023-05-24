#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a pointer to a function.
 * @name: The name to be printed.
 * @f: A pointer to a function that takes a char pointer as an argument and returns void.
 */
void print_name(char *name, void (*f)(char *))
{
	/*  Check if the name is NULL */
	if (name == NULL)
	{
		return;
	}
	/* Call the function to print the name */
	f(name);
}
