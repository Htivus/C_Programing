/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int strrindex(char s[], char t[]);

int main()
{
	char s[MAX], t[MAX];
	int loc;

	printf("Enter the first string \n");
	scanf("%s",s);

	printf("Enter the second string\n");
	scanf("%s",t);
	
	loc = strrindex(s,t);

	printf("The right most occurence of string 2 in 1 is at position %d\n",loc);

	return 0;
}

int strrindex ( char s[], char t[])
{
	int i;
	int j,k;
	int loc = -1;
	
	for ( i = 0 ; s[i] != '\0' && i < MAX ; i++)
	{
		for ( j = 0, k = i; t[j] != '\0' ; k++, j++);
		
		if ( k>0 && t[j] == '\0')
			loc = i;
	} 
	
	return loc;
}
