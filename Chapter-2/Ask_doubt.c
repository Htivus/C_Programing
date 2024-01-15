/* WELCOME TO C PROGRAMMING SUVITH */

/*why does scanf scan next line and how internally does it work .. how does printf statemennt is ignored and scanf takes input for the second string sooner? */

#include <stdio.h>
#include <stdlib.h>

void string_cat( char s[], char t[])
{
	int i = 0;
	int j = 0;
	
	while ( s[i] != '\0') i++;
	
	while ( (s[i] = t[j]) != '\0'){
		i++;
		j++;
	}
} 

int main()
{
	printf("Enter two strings to concatenate:");
	
	char s[100], t[20];

	scanf("%s ",s);
	printf("Second string \n");

	scanf("%s\n",t);

	string_cat(s,t);

	printf("Result: %s\n",s);
	
	return 0;
}


