#include <stdio.h>

int power (int n, int m)
{
	int ans = 1;
	while (m != 0)
	{
		ans = ans * n;
	        m--;	
	}	

	return ans;
}


int main ()
{
	printf("Enter n to the power m , first n space m. \n");

	int m, n;

	scanf ("%d %d ", &n, &m);

	printf ("Ans : %d\n", power(n, m));

	return 0;
}
