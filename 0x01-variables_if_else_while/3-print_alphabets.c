#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase,
 *              followed by the alphabet in uppercase,
 *              followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int ch;

    /* Print the lowercase alphabet */
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch); /* Print the current character */
    }

    /* Print the uppercase alphabet */
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        putchar(ch); /* Print the current character */
    }

    putchar('\n'); /* Print a newline character */

    return 0;
}
