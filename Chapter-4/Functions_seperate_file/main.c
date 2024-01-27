/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#define MAX 1000

int Getline( char line[], int lim);
int strindex( char s[], char p[]);

char pattern[] = "ear";

int main()
{
	int c, found = 0;
	
	char line[MAX];
	
	while ( (c = Getline(line, MAX)) > 0 )
	{
		if (strindex(line, pattern) >= 0)
		{
			printf("%s\n",line);
			found++;
		}
	}
	
	return found;
}


