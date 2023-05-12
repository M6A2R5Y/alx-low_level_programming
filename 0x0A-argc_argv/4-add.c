#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Checks if a string consists only of digits
 * @str: The input string
 *
 * Return: 1 if the string consists only of digits, 0 otherwise
 */
int check_num(char *str)
{
	unsigned int count = 0;
	/* Iterate through the string */
	while (count < strlen(str))
	{
		/* Check if character is not a digit */
		if (!isdigit(str[count]))
		{
			/* Not a valid number */
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - Sums all the valid numbers passed as arguments
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;
	count = 1;
	/* Iterate through the argument vector */
	while (count < argc)
	{
		/* Check if the argument is a valid number */
		if (check_num(argv[count]))
		{
			/* Convert string to integer */
			str_to_int = atoi(argv[count]);
			/* Add to the running sum */
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	/* Print the sum of the valid numbers */
	printf("%d\n", sum);
	return (0);
}
