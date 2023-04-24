#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase,
 *              followed by a new line
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
    char ch;

    /* Iterate over the lowercase alphabet */
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch); /* Print the current character */
    }

    putchar('\n'); /* Print a newline character */

    return 0;
}
