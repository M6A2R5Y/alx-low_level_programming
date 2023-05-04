#ifndef MYSTRING_H
#define MYSTRING_H

/* Concatenate two strings */
char *_strcat(char *dest, char *src);

/* Concatenate two strings, but at most n bytes from src */
char *_strncat(char *dest, char *src, int n);

/* Copy n characters from src to dest */
char *_strncpy(char *dest, char *src, int n);

/* Compare two strings */
int _strcmp(char *s1, char *s2);

/* Reverse an array of integers */
void reverse_array(int *a, int n);

/* Convert all lowercase letters in a string to uppercase */
char *string_toupper(char *s);

/* Capitalize each word in a string */
char *cap_string(char *s);

/* Encode a string using the "leet" code */
char *leet(char *s);
/**
 * rot13 - encodes a string into rot13
 * @s: string to be encoded
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s);

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: void
 */
void print_number(int n);
/**
 * infinite_add - adds two numbers
 * @n1: first number to be added
 * @n2: second number to be added
 * @r: buffer to store result
 * @size_r: size of buffer
 *
 * Return: pointer to result or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * print_buffer - prints a buffer
 * @b: buffer to be printed
 * @size: size of buffer
 *Return: void
 */
void print_buffer(char *b, int size);
#endif /* MYSTRING_H */
