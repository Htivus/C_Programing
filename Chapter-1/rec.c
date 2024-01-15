#include <stdio.h>


void water ( int n )
{
	if ( n != 0 ){
		printf("%d\t",n);
		n--;
		water(n);
	}

}

int main()
{
	water(10);
	return 0;
}
