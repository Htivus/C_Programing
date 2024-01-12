/* WELCOME TO C PROGRAMMING SUVITH */
#include <stdio.h>
#include <ctype.h>

int htoi(const char *s);

int main() {
    
    printf("Result: %d\n", htoi("1a"));  

    return 0;
}

int htoi(const char *s) {
    int result = 0;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        s += 2;

    while (*s != '\0') {
        char currentChar = *s;

        if (isdigit(currentChar)) {
            result = result * 16 + (currentChar - '0');
        } else if ((currentChar >= 'a' && currentChar <= 'f') || (currentChar >= 'A' && currentChar <= 'F')) {
            result = result * 16 + (tolower(currentChar) - 'a' + 10);
        } else {
            // Invalid character encountered
            fprintf(stderr, "Invalid hex character: %c\n", currentChar);
            return -1;
        }

        s++;
    }

    return result;
}



