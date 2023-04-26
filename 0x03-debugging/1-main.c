#include <stdio.h>

/**
* main - Causes an infinite loop and avoids it
* Return: 0
*/
int main(void)
{	
	int i;

        // print message warning of infinite loop
        printf("Infinite loop incoming :(\n");
        // initialize i to 0
        i = 0;
        // while loop commented out to avoid infinite loop
        // while (i < 10)
	//
	//putchar(i);
	// }
	// print message indicating the infinite loop was avoided
	printf("Infinite loop avoided! \\o/\n");
	// return 0 to indicate successful program execution
	return (0);
}
