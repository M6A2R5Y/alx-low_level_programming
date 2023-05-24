#ifndef CALC_H
#define CALC_H

/**
 * struct op - A struct op.
 * @op:is The operator.
 * @f: is The associated function.
 */
typedef struct op
{
	/* The operator */
	char *op;
	/* The associated function */
	int (*f)(int, int);
}
op_t;
/**
 * op_add - Returns the sum of two numbers.
 * @a:Is The first number.
 * @b:Is The second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b);

/**
 * op_sub - Returns the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b);

/**
 * op_mul - Returns the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b);

/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b);

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b);

/**
 * get_op_func - Selects the correct function to perform the operation asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int);

#endif
