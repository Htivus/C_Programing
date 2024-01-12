/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#include <stdlib.h>

void squeeze(char a[])
{
	int i, j;
	char c = c;
	for (i = j = 0;a[i] != '\0'; i++)
	{
		if(a[i] != c)
		{
			a[j++] = a[i];
		}
	}
	a[j] = '\0';
	
	printf("%s\n ",a);
}


int main() {
    
	char s[25];

	printf("Enter the word\n");
	scanf("%s",s);

	squeeze(s);

    return 0;
}


