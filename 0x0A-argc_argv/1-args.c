#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* Ignore the argv parameter to avoid unused variable warning */
	(void)argv;
	/* Print the number of arguments passed (excluding the program name) */
	printf("%d\n", argc - 1);
	return (0);
}
