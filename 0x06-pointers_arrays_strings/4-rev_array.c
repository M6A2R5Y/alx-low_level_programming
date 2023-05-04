#include <stdio.h>
void reverse_array(int *a, int n)
{
	int i, j, tmp;
	/* loop through half of the array */
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		/* swap the i-th and j-th elements of the array */
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}		
