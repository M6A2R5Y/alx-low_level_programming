#include "3-calc.h"
int op_add(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The sum of @a and @b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b);

/**
 * op_sub - Returns the difference between two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The difference between @a and @b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b);

/**
 * op_mul - Returns the product of two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The product of @a and @b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b);

/**
 * op_div - Returns the division of two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The quotient of @a divided by @b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b);

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The remainder of the division of @a by @b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
