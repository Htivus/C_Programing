/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int locate ( char s1[], char s2[])
{
	int i=0, j=0;
	
	while(j < strlen(s2))
	{
		int temp = s2[j];
		
		i = 0;
		while ( i < strlen(s1))
		{
			if ( s1[i] == temp)
				return i;
			i++;
		}
		j++;
	}
	return -1;
}

int main()
{
	printf("Enter two strings : \n");
	
	char s1[100], s2[100];

	scanf("%s",s1);
	scanf("%s",s2);

	printf("string2 char located at position %d in string1\n",locate(s1,s2)+1);
	return 0;
}


