#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single digit numbers of base 10
 *              starting from 0, followed by a new line,
 *              using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Print all single digit numbers of base 10 using putchar */
    for (n = 48; n < 58; n++)
    {
        putchar(n); /* Print the current number */
    }

    putchar('\n'); /* Print a newline character */

    return 0;
}
