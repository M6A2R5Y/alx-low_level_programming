/*

This program generates a random password for the program 101-crackme.
The password must add up to 2772 when each character is converted to its ASCII value
The password can only contain characters in the range of ASCII values 0 to 77 (inclusive)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	/*  array to store the password */
	int pass[100];
	/* variables to loop, store sum of ASCII values, and store the missing value to reach 2772 */
	int i, sum, n;
	/* initialize sum to zero */
	sum = 0;
	/* seed the random number generator with the current time */
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		/* generate a random number between 0 and 77 (inclusive) */
		pass[i] = rand() % 78;
		/* add the ASCII value of the character to the sum */
		sum += (pass[i] + '0');
		/* print the character */
		putchar(pass[i] + '0');
		/* if the remaining value needed to reach 2772 is less than 78 */
		if ((2772 - sum) - '0' < 78)
		{
			/* calculate the missing value */
			n = 2772 - sum - '0';
			/* add the missing value to the sum */
			sum += n;
			/* print the missing value */
			putchar(n + '0');
			/* exit the loop */
			break;
		}
	}
	return (0);
}
