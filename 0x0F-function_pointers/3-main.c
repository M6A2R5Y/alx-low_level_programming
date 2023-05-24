#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;
	/* Check if the number of arguments is correct. */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* Convert the first argument to an integer. */
	num1 = atoi(argv[1]);
	/* Get the operation from the second argument. */
	op = argv[2];
	/* Convert the third argument to an integer. */
	num2 = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		/* Check if the operator is valid */
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		/* Check for division or modulo by zero */
		printf("Error\n");
		exit(100);
	}
	/* Perform the requested operation and print the result */
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
