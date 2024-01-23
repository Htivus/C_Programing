/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#include <stdlib.h>

unsigned getbits(unsigned  x,int p,int n);
unsigned setbits(unsigned  x, int p, int n, unsigned  y);
unsigned invert(unsigned x,int p, int n);
unsigned rotate(unsigned x, int n);

int main()
{
	int ch;
	
	printf("Enter 1.getbits 2.setbits 3.invert 4.rotate any key to exit \n");

	scanf("%d",&ch);

	switch(ch)
	{
	case 1:
	printf("%u\n",getbits(99,3,2));
	break;

	case 2:
        printf("%u\n",setbits(99,3,2,3));
	break;

	case 3:
        printf("%u\n",invert(99,3,2));
	break;

	case 4:
        printf("%u\n",rotate(99,3));
	break;

	default : return 0;
	}

	return 0;
}

unsigned getbits(unsigned  x, int p, int n)
{
	return (x >> (p + 1 - n)) & ~(~0 << n);//& has higher precedance
}

unsigned rotate(unsigned x, int n)
{
	int size = sizeof(unsigned) * 8;
	
	return (x >> n) | (x << (size - n));
}

unsigned setbits(unsigned  x, int p, int n, unsigned  y)
{
	unsigned mask = (~(~0 << n) << (p + 1 - n));

	return (x & ~mask) | ((y & ~(~0 << n)) << (p + 1 - n));
}

unsigned invert(unsigned x, int p, int n)
{
	unsigned mask = (~( ~0 << n ) << (p + 1 - n));

	return x ^ mask;
}
