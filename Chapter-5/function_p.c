/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
return a+b;
}

int (*ptr)(int, int);

int main()
{	
	ptr = &add;
	printf("Ans: %d\n",ptr(10,20));
	return 0;
}


