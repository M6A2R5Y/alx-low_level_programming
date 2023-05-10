#include "main.h"
#include <stdio.h>
int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		/* Base case: found the square root */
		return (guess);
	}
	if (guess * guess > n)
	{
		/* Base case: no natural square root */
		return (-1);
	}
	/* Recursive call with the next guess */
	return (calculate_sqrt(n, guess + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		/* Error case: negative number */
		return (-1);
	}
	/* Start with guess = 0 */
	return (calculate_sqrt(n, 0));
}
