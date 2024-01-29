/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

#define MAXOP 100
#define NUMBER '0'

int main() {
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '-':
                push(pop() - pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '/':
                op2 = pop();
                if (op2 != 0) {
                    push(pop() / op2);
                } else {
                    printf("Divide by zero error!\n");
                }
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("Error: Unknown command %s\n", s);
                break;
        }
    }
    return 0;
}

