#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		/* print the current element */
		printf("%d", a[i]);
		/* check if the current element is the last element */
	        if (i != n - 1)
			/* if it is not the last element, print a comma and a space
 */
			printf(", ");
	        
	}
	/* print a new line at the end
 */
	printf("\n");
}	
