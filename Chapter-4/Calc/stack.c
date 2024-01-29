#include <stdio.h>
#include <ctype.h>
#include "stack.h"

static int sp = 0;
static double val[MAXVAL];

void push(double f) {
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("Error: Stack full, cannot push %g\n", f);
}

double pop() {
    if (sp > 0)
        return val[--sp];
    else {
        printf("Error: Stack empty, cannot pop\n");
        return 0.0;
    }
}

int getop(char s[]) {
    int i, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t');

    s[1] = '\0';

    if (!isdigit(c) && c != '.')
        return c;

    i = 0;

    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()));

    if (c == '.')
        while (isdigit(s[++i] = c = getch()));

    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}

