#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the name of the file.
 * It uses the predefined macro __FILE__ to retrieve the name of the current file.
 * The name is then printed using the printf function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
