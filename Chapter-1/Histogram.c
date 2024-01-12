#include <stdio.h>

#define MAX 10

void histogram(int size, int a[])
{
	for ( int i = 0 ; i < size ; i++ )
        {
                int x = a[i];

                while (x != 0)
                {
                        printf("*");
                        x--;
                }

                printf("\n");
        }
}

int main()
{
	int count = 0;
	int digits[MAX];
	
	int n;

	printf("Enter size :\n");

	scanf("%d",&n);

	printf("\n");

	for ( int i = 0 ; i < n; i++ )
	{
		 scanf("%d",&digits[i]);
	}	

	histogram (n, digits);

	return 0;
}
