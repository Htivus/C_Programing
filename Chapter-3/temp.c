/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int c, i, nwhite, nother, ndigit[10];
	
	if (2> 1)printf("hi");
	nwhite = nother = 0;

	for (i = 0; i < 10; i++)
	ndigit[i] = 0;

	while ( (c = getchar()) != EOF )
	{
		switch (c)
		{
		case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':case '0':
			ndigit[ c - '0' ]++;
			break;

		case ' ':
		case '\t':
		case '\n':
			nwhite++;
			break;

		default :
			nother++;
			break;
		}
	}
	
	printf("\n\ndigits =");
	for (i = 0; i < 10; i++)
		printf(" %d",ndigit[i]);
	printf("\n White space %d , Other %d \n\n", nwhite, nother); 	

	return 0;
}


