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

#endif /* MYSTRING_H */
