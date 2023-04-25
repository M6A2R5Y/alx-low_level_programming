#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * This function writes the character c to the standard output (stdout). It takes a
 * single argument, which is the character to print.
 *
 * Return: On success, the function returns 1. On error, -1 is returned and the
 * errno variable is set appropriately to indicate the error.
 */
int _putchar(char c)
{
    /* Use the write system call to write the character to stdout */
    return (write(1, &c, 1));
}
