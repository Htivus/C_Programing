/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100
#define NKEYS 100

struct key {
	char *word;
	int count;
}keys[NKEYS] = {
{"auto", 0},
{"break",0},
{"case",0},
{"void",0}
}; 

int getword(char *, int);
int binsearch(char *,struct key *,int);

int main()
{
	int n;
	char word[MAXWORD];

	while ( getword(word,MAXWORD) != EOF)
	{
		if(isalpha(word[0]))
			if((n = binsearch(word, keys , NKEYS)) >= 0)
				keys[n].count++;
	}

	for ( n = 0; n < NKEYS; n++)
	{
		if(keys[n].count > 0)
			printf("%4d %s\n", keys[n].count, keys[n].word);
	}

	return 0;
}

int binsearch(char *word, struct key collection[], int n)
{
	int cond;
	int l, m, h;

	l = 0;
	h = n - 1;
	
	while ( l <= h ){
		m = l + (h - l)/2;
		if ( (cond = strcmp(word, collection[m].word)) < 0)
			h = m - 1;
		else if ( cond > 0 )
			l = m + 1;
		else 
			return m;
	}
	return -1;
}

int getword( char *word, int lim)
{
	int c, getch(void);
	void ungetch(int);
	char *w = word;

	while (isspace( c = getch()));

	if(c != EOF)
		*w++ = c;

	if(!isalpha(c)){
		*w = '\0';
		return c;
	}
	
	for ( ; --lim > 0; w++){
		if(!isalnum(*w = getch())){
		ungetch(*w);
		break;
	}	
	}
		
	*w = '\0';
	return word[0];
}

#define buffer 100

char buff[buffer];
char bp = 0;

int  getch( )
{
	return ( bp > 0 ) ? buff[--bp] : getchar() ;
}

void ungetch( int c)
{
	if (bp >= buffer)
		printf("ungetch : full buffer");
	else
		buff[bp++] = c;
}
