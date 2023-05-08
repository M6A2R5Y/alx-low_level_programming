#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;
	/* Loop over the main diagonal */
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}
	/* Loop over the secondary diagonal */
	for (i = 0; i < size; i++)
	{
		sum2 += *(a + i * size + (size - i - 1));
	}
	/* Print the sums using printf */
	printf("Sum of main diagonal: %d\n", sum1);
	printf("Sum of secondary diagonal: %d\n", sum2);
}
