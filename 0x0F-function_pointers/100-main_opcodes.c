#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect,
 *         or 2 if the number of bytes is negative.
 */
int main(int argc, char *argv[])
{
	/* Check if the user has provided the correct number of arguments. */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	/* Get the number of bytes to print. */
	int num_bytes = atoi(argv[1]);
	/*Check if the number of bytes is negative. */
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	/* Get the address of the main function. */
	void *main_addr = (void *)main;
	/* Print the opcodes of the main function. */
	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *(unsigned char *)(main_addr + i));
	}
	printf("\n");
	return 0;
}
