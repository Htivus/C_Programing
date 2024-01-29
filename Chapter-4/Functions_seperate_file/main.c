/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#define MAX 1000

int Getline( char line[], int lim);
int strindex( char s[], char p[]);
int addline(char final[],char from[], int loc);

char pattern[] = "ear";

int main()
{
	int c, found = 0;
	char final[10000];	
	char line[MAX];
	int loc = 0;

	while ( (c = Getline(line, MAX)) > 0 )
	{
		if (strindex(line, pattern) >= 0)
		{
			loc = addline(final, line, loc);
			found++;
		}
	}
	printf("%s\n",final);
	return found;
}

int addline( char final[], char from[], int loc)
{
	int i = loc, j = 0;

	while ( from[j] != '\n' && i < 10000)
	{
		final[i] = from[j];
		i++;
		j++;
	}
	final[i++]='\n';

	return i;
}

