#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
     
	/* int initializes the number n*/
     	int n;

     	srand(time(0));
     	n = rand() - RAND_MAX / 2;

    	/* Check if the number is positive */
    	if (n > 0)
    	{
        	printf("%d is positive\n", n);
    	}
    	/* Check if the number is negative */
    	if (n < 0)
    	{
        	printf("%d is negative\n", n);
    	}
    	/* Check if the number is zero */
    	if (n == 0)
    	{
        	printf("%d is zero\n", n);
    	}

    	return (0);
}
