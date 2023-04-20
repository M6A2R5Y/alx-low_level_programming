#include<stdio.h>
int main()
{
	// Using sizeof operator to get the size of each type in bytes and printing it with printf
	printf("The sizeof char is %ld bytes\n", sizeof(char));
	printf("The sizeof int is %ld bytes\n", sizeof(int));
	printf("The sizeof long int is %ld bytes\n", sizeof(long int));
	printf("The sizeof float is %ld bytes\n", sizeof(float));
	printf("The sizeof double is %ld bytes\n", sizeof(double));
	// Return 0 to indicate successful execution of the program
	return 0;
}
