#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet in reverse,
 *              followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch;

    /* Print the lowercase alphabet in reverse */
    for (ch = 'z'; ch >= 'a'; ch--)
    {
        putchar(ch); /* Print the current letter */
    }

    putchar('\n'); /* Print a newline character */

    return 0;
}
