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

<<<<<<< HEAD
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int sum = 0;
	if (n == 0)
	{
		return (0);
	}
	unsigned int i;
	va_start(nums, n);
	/* Iterate over the variadic arguments and add them to the sum. */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	/* Use the va_end macro to destroy the va_list object. */
	va_end(nums);
	/* Return the sum. */
	return (sum);
=======
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...) {
  /*
   * va_list - A variable argument list
   * sum - The sum of all the arguments
   * i - A counter
   */
  va_list list;
  int sum = 0;
  unsigned int i;

  /*
   * Initialize the va_list variable with the number of arguments
   */
  va_start(list, n);

  /*
   * Iterate over all the arguments and add them to the sum
   */
  for (i = 0; i < n; i++) {
    /*
     * Get the next argument from the list
     */
    int arg = va_arg(list, int);

    /*
     * Add the argument to the sum
     */
    sum += arg;
  }

  /*
   * Terminate the use of the va_list variable
   */
  va_end(list);

  /*
   * Return the sum
   */
  return sum;
>>>>>>> 0864fbbad109b6e1f2b0cd289eaae6c527b2bbbe
}
