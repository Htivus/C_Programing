/* Welcome to C programming Suvith */

#include <stdio.h>


int main() {
    
	printf("Enter a year to check for leap year :\n");
	
	int year;
	scanf("%d",&year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("Leap year\n");
	}
	else
	{
		printf("Not a Leap year\n");
	}

	getchar();
    return 0;
}


