#include <stdio.h>
int main(void)
{
	int n;
	int a[5];
	int *p;
	/* assign 1024 to the third element of the array a */
	a[2] = 1024;
	/* make pointer p point to the address of n */
	p = &n;
	/* store the value 98 at the address p + 5, which is equivalent to the address of a[2] */
	(p + 5) = 98;
	/*  ...so that this prints 98\n */
	/* print the third element of array a, which now contains the value 98 */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
