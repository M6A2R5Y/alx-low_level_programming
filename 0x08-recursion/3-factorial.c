#include "main.h"
#include <stdio.h>
int factorial(int n)
{
	if (n < 0)
	{
		/*  Error case: negative number */
		return -1;
	}
	if (n == 0)
	{
		/* Base case: factorial of 0 is 1 */
		return 1;
	}
	/* Recursive call with n-1 */
	return n * factorial(n - 1);
}
