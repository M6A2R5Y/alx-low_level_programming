#include "main.h"
#include <stdio.h>

/**
 * main - entry point, tests the _isupper function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    char c;

    /* Test with an uppercase letter */
    c = 'A';
    printf("%c: %d\n", c, _isupper(c)); /* should print "A: 1" */

    /* Test with a lowercase letter */
    c = 'a';
    printf("%c: %d\n", c, _isupper(c)); /* should print "a: 0" */

    return (0);
}
