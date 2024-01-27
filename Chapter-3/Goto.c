/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a ; 
	
	found:
	scanf ("%d",&a);
	
	if ( a > 10 )
	printf("a = %d\n",a);
	else 
	goto found;

	return 0;
}


