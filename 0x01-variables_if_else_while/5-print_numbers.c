#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single digit numbers of base 10
 *              starting from 0, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Print all single digit numbers of base 10 */
    for (n = 0; n < 10; n++)
    {
        printf("%d", n); /* Print the current number */
    }

    printf("\n"); /* Print a newline character */

    return 0;
}
