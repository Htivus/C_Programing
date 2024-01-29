/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#include "stack.h"
#include <ctype.h>

int sp = 0;
double val[MAXVAL];

void push( double f){
	if ( sp < MAXVAL)
		val[sp++] = f;
	else
		printf("Stack filled!\n");
}

double pop(){
	if( sp > 0)
		return val[--sp];
	else{
	printf("Stack empty\n");
	return 0.0;
	}
}

int getop(char s[]){
	int i, c;
	
	while ( (s[0] = c = getch()) == ' ' || c == '\t');
	//remove spaces from start
	
	s[1] = '\0';
	
	if ( !isdigit(c) && c!= '.')
		return c;

	i = 0;
		
	if (isdigit(c))
		while ( isdigit(s[++i] = c = getch()));
	
	if (c == '.')
		while (isdigit(s[++i] = c = getch()));

	s[i] = '\0';
	if(c != EOF)
		ungetch(c);

	return NUMBER;	
	
}

