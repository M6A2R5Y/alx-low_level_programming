#include "main.h"
#include <stdio.h>
/*
 * Sets the value of a pointer to a char.
 *
 * Parameters:
 *   s: a pointer to a pointer to a char. This is the pointer whose value will be set.
 *   to: a pointer to a char. This is the value to which the pointer s will be set.
 *
 * Returns: nothing.
 */
void set_string(char **s, char *to)
{
	/* Assign the value of the to pointer to the pointer pointed to by s. */
	*s = to;
}
