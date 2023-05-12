#ifndef MAIN_H
#define MAIN_H
/*
 * Function: _putchar
 * ----------------------------
 * Writes a character to stdout
 *
 * c: the character to be written
 *
 * Returns: On success, the character written. On error, -1 is returned.
 */
int _putchar(char c);
/*
 * Function: _islower
 * ----------------------------
 * Checks if a character is lowercase
 *
 * c: the character to be checked
 *
 * Returns: 1 if lowercase, 0 otherwise
 */
int _islower(int c);

/*
 * Function: _isalpha
 * ----------------------------
 * Checks if a character is alphabetic
 *
 * c: the character to be checked
 *
 * Returns: 1 if alphabetic, 0 otherwise
 */
int _isalpha(int c);

/*
 * Function: _isupper
 * ----------------------------
 * Checks if a character is uppercase
 *
 * c: the character to be checked
 *
 * Returns: 1 if uppercase, 0 otherwise
 */
int _isupper(int c);

/*
 * Function: _isdigit
 * ----------------------------
 * Checks if a character is a digit
 *
 * c: the character to be checked
 *
 * Returns: 1 if a digit, 0 otherwise
 */
int _isdigit(int c);

/*
 * Function: _strlen
 * ----------------------------
 * Computes the length of a string
 *
 * s: the input string
 *
 * Returns: the length of the string
 */
int _strlen(char *s);

/*
 * Function: _puts
 * ----------------------------
 * Writes a string to stdout
 *
 * s: the input string
 */
void _puts(char *s);

/*
 * Function: _strcpy
 * ----------------------------
 * Copies a string from source to destination
 *
 * dest: the destination string
 * src: the source string
 *
 * Returns: the pointer to the destination string
 */
char *_strcpy(char *dest, char *src);

/*
 * Function: _atoi
 * ----------------------------
 * Converts a string to an integer
 *
 * s: the input string
 *
 * Returns: the converted integer value
 */
int _atoi(char *s);

/*
 * Function: _strcat
 * ----------------------------
 * Concatenates two strings
 *
 * dest: the destination string
 * src: the source string
 *
 * Returns: the pointer to the destination string
 */
char *_strcat(char *dest, char *src);

/*
 * Function: _strncat
 * ----------------------------
 * Concatenates two strings up to n characters
 *
 * dest: the destination string
 * src: the source string
 * n: maximum number of characters to concatenate
 *
 * Returns: the pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n);

/*
 * Function: _strncpy
 * ----------------------------
 * Copies a string from source to destination up to n characters
 *
 * dest: the destination string
 * src: the source string
 * n: maximum number of characters to copy
 *
 * Returns: the pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)

/*
 * Function: _memset
 * ----------------------------
 * Fills a block of memory with a specified value.
 *
 * s: Pointer to the memory block.
 * b: Value to be set.
 * n: Number of bytes to be set.
 *
 * Returns: The pointer to the memory block.
 */
char *_memset(char *s, char b, unsigned int n);
/*
 * Function: _memcpy
 * ----------------------------
 * Copies a block of memory from source to destination.
 *
 * dest: The destination memory block.
 * src: The source memory block.
 * n: Number of bytes to be copied.
 *
 * Returns: The pointer to the destination memory block.
 */
char *_memcpy(char *dest, char *src, unsigned int n);
/*
 * Function: _strchr
 * ----------------------------
 * Locates the first occurrence of a character in a string.
 *
 * s: The input string.
 * c: The character to be located.
 *
 * Returns: The pointer to the located character in the string.
 */
char *_strchr(char *s, char c);
/*
 * Function: _abs
 * ----------------------------
 * Computes the absolute value of an integer.
 *
 * n: The integer value.
 *
 * Returns: The absolute value of n.
 */
int _abs(int n);
#endif
