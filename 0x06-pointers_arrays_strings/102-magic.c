#include <stdio.h>

int main(void)
{
	/* Declare integer variables n, m, and pointer p*/
	int n;
	int m[5];
	int *p;
	/* Assign the integer value 1024 to the element at index 2 of array m */
	m[2] = 1024;
	/* Assign the address of n to the pointer p */
	p = &n;
	/* Assign the integer value 98 to the memory location pointed to by p */
	/* New line of code */
	p = 98;
	/* Print the value stored in element at index 2 of array m */
	printf("m[2] = %d\n", m[2]);
	/* Return 0 to indicate successful execution of the function */
	return (0);
}
