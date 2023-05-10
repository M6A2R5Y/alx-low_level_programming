#include "main.h"
#include <stdio.h>
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		/* Base case: reached 1, not prime */
		return 0;
	}
	if (n % divisor == 0)
	{
		/* Base case: found a divisor, not prime */
		return 1;
	}
	/* Recursive call with the next divisor */
	return is_divisible(n, divisor - 1);
}
int is_prime_number(int n)
{
	if (n <= 1)
	{
		/* Base case: numbers less than or equal to 1 are not prime */
		return 0;
	}
	/* Check divisibility starting from n-1 */
}
