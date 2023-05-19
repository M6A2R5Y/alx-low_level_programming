#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c);

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes from s2 to concatenate
 *
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - allocates memory for an array using calloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max);

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space for ptr
 * @new_size: new size in bytes to allocate
 *
 * Return: a pointer to the reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
