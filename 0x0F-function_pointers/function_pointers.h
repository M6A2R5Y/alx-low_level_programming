#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
#include <stdlib.h>
/**
 * Function: print_name
 * --------------------
 * Prints a name using a function pointer.
 *
 * name: Pointer to a character array representing the name.
 * f: Pointer to a function that takes a character pointer as an argument and performs a specific action on it.
 */
void print_name(char *name, void (*f)(char *));
/**
 * Iterates over an array and performs an action on each element.
 * 
 * @param array     Pointer to the array.
 * @param size      The size of the array.
 * @param action    Pointer to a function that takes an int as an argument and returns void.
 */
void array_iterator(int *array, size_t size, void (*action)(int));
/**
 * Searches for an integer in an array using the provided comparison function.
 * 
 * @param array     Pointer to the array.
 * @param size      The size of the array.
 * @param cmp       Pointer to a function that takes an int as an argument and returns an int.
 * @return          The index of the first occurrence of the integer in the array, or -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int));

/**
 * Writes a single character to the standard output.
 * 
 * @param c     The character to be written.
 * @return      On success, returns the character written. On failure, returns -1.
 */
int _putchar(char c);

#endif
