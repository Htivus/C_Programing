/* WELCOME TO C PROGRAMMING SUVITH */

#include "stack.h"

#define BUFFSIZE 100

char buf[BUFFSIZE];
int bufp = 0;

int getch(void){
	return (bufp > 0) ? buf[--bufp]: getchar();
}


void ungetch( int c){
	if (bufp >= BUFFSIZE)
		printf("Error : too many characters\n");
	else
		buf[bufp++] = c;
}


