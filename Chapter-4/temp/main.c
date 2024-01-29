/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define NUMBER '0'

int main()
{
	int type;
	double op2;
	char s[MAXVAL];

	while ( (type = getop(s)) != EOF){
	switch (type){
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop();
			push ( pop() - op2 );
			break;
		case '/':
			op2 = pop();
			if ( op2 != 0 )
				push ( pop()/op2);
			else
				printf("Divide by zero error!\n");
			break;
		case '\n':
			printf("\t%.8g\n",pop());
			break;
		default :
			printf("Invalid command!%s\n",s);
			break;
	}
	}		

	return 0;
}


