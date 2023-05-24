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
	 /* Get the function pointer for the operation. */
	 int (*func)(int, int) = get_op_func(op);
	 /* Check if the function pointer is NULL or if the operation has more than one operand. */
	 if (func == NULL || op[1] != '\0')
	 {
		 printf("Error\n");
		 exit(99);
	 }
	 /* Check if the second operand is 0 for division or modulo operations. */
	 if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	 {
		 printf("Error\n");
		 exit(100);
	 }
	 /* Call the function pointer and print the result. */
	 printf("%d\n", func(num1, num2));
	 return (0);	 
}
