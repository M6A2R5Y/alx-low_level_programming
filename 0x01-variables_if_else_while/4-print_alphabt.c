#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet,
 *              except the letters 'e' and 'q',
 *              followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch = 'a';

    /* Print the lowercase alphabet, except 'e' and 'q' */
    while (ch <= 'z')
    {
        if (ch != 'e' && ch != 'q')
        {
            putchar(ch); /* Print the current character */
        }
        ch++; /* Move to the next character */
    }

    putchar('\n'); /* Print a newline character */

    return 0;
}
