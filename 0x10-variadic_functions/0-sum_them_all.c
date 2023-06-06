#include "variadic_functions.h"
#include <stdarg.h>
/*
 * sum_them_all()
 *
 * This function takes a variable number of arguments and returns the sum of all of them.
 *
 * Parameters:
 *   n - The number of arguments
 *
 * Returns:
 *   The sum of all the arguments, or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...) 
{	va_list list;
 	int sum = 0;
    	unsigned int i;
   	/*Initialize the va_list variable with the number of arguments*/
   	va_start(list, n);
 	/*Iterate over all the arguments and add them to the sum*/
 	for (i = 0; i < n; i++) 
	{
		/* Get the next argument from the list*/
		int arg = va_arg(list, int);
		/* Add the argument to the sum*/
		sum += arg;
	}
 	/*Terminate the use of the va_list variable*/
 	va_end(list);
 	/*Return the sum*/
 	return sum;
}
