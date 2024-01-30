/* WELCOME TO C PROGRAMMING SUVITH */
#include <stdio.h>

int strleni( char *s){
	int i;
	for ( i = 0 ; *s != '\0'; i++, s++);
	return i;
}

int main()
{
	char a[100];
	scanf("%s",a);
	printf("The length of the string is : %d\n",strleni(a));
	return 0;
}


