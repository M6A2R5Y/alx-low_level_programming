#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Generates a random number and prints its last digit along with
 *        information about whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));  /* Seed the random number generator */
	n = rand() - RAND_MAX / 2;  /* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */

	/* Determine the last digit of the random number and print information about it */
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}

	return (0);
}
