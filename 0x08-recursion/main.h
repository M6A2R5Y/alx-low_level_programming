#ifndef MAIN_H
#define MAIN_H
/* function recursively prints a string s followed by a newline character */
void _puts_recursion(char *s);
/* function writes a character c to the standard output */
int _putchar(char c);
/* function recursively prints a string s in reverse order */
void _print_rev_recursion(char *s);
/* function calculates and returns the length of a string s recursively */
int _strlen_recursion(char *s);
/* function calculates and returns the factorial of an integer n recursively */
int factorial(int n);
/* function calculates and returns the value of x raised to the power of y recursively */
int _pow_recursion(int x, int y);
/*  function calculates and returns the square root of an integer n recursively */
int _sqrt_recursion(int n);
/* function checks if an integer n is a prime number and returns 1 if it is, or 0 otherwise */
int is_prime_number(int n);
/* function checks if a string s is a palindrome (reads the same forwards and backwards) and returns 1 if it is, or 0 otherwise */
int is_palindrome(char *s);
/* declares a function named wildcmp that takes two arguments: s1 and s2, both of which are pointers to characters */
int wildcmp(char *s1, char *s2);
#endif
