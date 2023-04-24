#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/* int initializes the number n*/
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else (n < 0)
	{
		printf("%d is negative\n", n); 
	}
	return (0);
}
