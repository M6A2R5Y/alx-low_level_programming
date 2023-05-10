#include "main.h"
#include <stdio.h>
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		/* Error case: negative exponent */
		return (-1);
	}
	if (y == 0)
	{
		/* Base case: any number raised to the power of 0 is 1 */
		return (1);
	}
	/* Recursive call with y-1 */
	return (x * _pow_recursion(x, y - 1));
}
