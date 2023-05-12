#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * This function calculates the absolute value of the given integer 'n'.
 * If 'n' is positive or zero, it returns 'n' as is. If 'n' is negative,
 * it returns the negation of 'n' to make it positive.
 *
 * Return:
 *     - The absolute value of the integer 'n'
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
