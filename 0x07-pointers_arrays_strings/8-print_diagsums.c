#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: pointer to the first element of the array representing the matrix
 * @size: size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;
	sum1 = 0;
	sum2 = 0;
	/* Loop over the main diagonal */
	for (y = 0; y < size; y++)
	{
		sum1 += a[y * size + y];
	}
	/* Loop over the secondary diagonal */
	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}
	/* Print the sums of the diagonals */
	printf("%d, %d\n", sum1, sum2);
}
