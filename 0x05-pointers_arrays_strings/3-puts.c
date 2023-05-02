#include <unistd.h>

/**
 * _puts - prints a string to stdout, followed by a new line
 * @str: is a pointer to the string to print
 *
 * Return: none
 */
void _puts(char *str)
{
    /* While the current character is not a null terminator, write it to stdout */
    while (*str != '\0')
    {
        /* Write the character to stdout */
        write(STDOUT_FILENO, str, 1);
        /* Move the pointer to the next character */
        str++;
    }
    /* After the loop is finished, write a newline character to stdout */
    write(STDOUT_FILENO, "\n", 1);
}
