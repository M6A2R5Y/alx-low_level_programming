#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Description: This function writes the character 'c' to the standard output.
 * Return: On success, the number of bytes written is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

#endif /* MAIN_H */
