#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, char *src) {
    // Find the end of dest
    char *ptr = dest + strlen(dest);
    
    // Copy src to dest, overwriting the terminating null byte
    while (*src != '\0') {
        *ptr++ = *src++;
    }
    
    // Add a terminating null byte to dest
    *ptr = '\0';
    
    // Return a pointer to dest
    return dest;
}
