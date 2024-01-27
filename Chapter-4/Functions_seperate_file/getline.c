/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>


int Getline(char line[], int lim)
{
	int i,c;

	for ( i = 0; i < lim - 1 && (c  = getchar()) != '\n' && c != EOF ; i++)
	{
		line[i] = c;
	}

	if ( c == '\n' )
	line[i++] = c ;

	line[i] = '\0'; 

	return i;
}


