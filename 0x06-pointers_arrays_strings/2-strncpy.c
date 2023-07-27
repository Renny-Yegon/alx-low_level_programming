#include "main.h"
/**
*_strncpy - a function that copies a string.
*at most n bytes of src are copied.
*if length of src is < n, additional null bytes are written to dest
*to ensure that a total of n bytes are written.
*@dest: pointer to destination string.
*@src: pointer to source string.
*@n: number of bytes to be used.
*
* Return: pointer to destination string.
*/

char *_strncpy(char *dest, char *src, int n) {
    char *dest_start = dest;
    
    while (n > 0 && *src != '\0') {
        *dest++ = *src++;
        n--;
    }
    
    while (n > 0) {
        *dest++ = '\0';
        n--;
    }
    
    return dest_start;
}

int main() {
    char source[] = "Hello, World!";
    char destination[20];
    int n = 10;

    _strncpy(destination, source, n);
    printf("Copied string: %s\n", destination);

    return 0;
}

