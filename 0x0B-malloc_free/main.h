#ifndef MAIN_H
#define MAIN_H

/* Creates an array of characters with the given size and initializes each element with the specified character */
char *create_array(unsigned int size, char c);

/* Writes a character to the standard output */
int _putchar(char c);

/* Duplicates a string by dynamically allocating memory and copying the contents */
char *_strdup(char *str);

/* Concatenates two strings and returns a newly allocated string with the result */
char *str_concat(char *s1, char *s2);

/* Allocates a two-dimensional array of integers with the specified width and height */
int **alloc_grid(int width, int height);

/* Frees the memory allocated for a two-dimensional grid */
void free_grid(int **grid, int height);

/* Concatenates all command-line arguments into a single string with newline separators */
char *argstostr(int ac, char **av);

#endif
