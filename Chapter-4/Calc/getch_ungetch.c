/* WELCOME TO C PROGRAMMING SUVITH */
#include <stdlib.h>
#include "stack.h"

#define BUFSIZE 100

static char buf[BUFSIZE];
static int bufp = 0;

int getch(void) {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
    if (bufp >= BUFSIZE)
        printf("Error: ungetch - too many characters\n");
    else
        buf[bufp++] = c;
}


