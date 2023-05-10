#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Determines if an integer is a prime number.
 * @n: Number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
int i;
{
	if (n <= 1)
	{
		/* Base case: numbers less than or equal to 1 are not prime */
		return (0);
	}
	/* Check divisibility starting from n-1 */
	return (actual_prime(n, i - 1));
}
/**
 * actual_prime - Helper function to recursively check if a number is prime.
 * @n: Number to evaluate.
 * @i: Iterator.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return 1;
	}
	/* Check if n is divisible by i, and i is greater than 0. */
	if (n % i == 0 && i > 0)
	{
		return 0;
	}
	return actual_prime(n, i - 1);
}
