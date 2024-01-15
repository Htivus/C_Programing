/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long int n = 1;

int rand()
{
	n = (unsigned long int)time(NULL);
	int random = n *(10029384 / 11223) % 32768;
	return random;
}

int main()
{

	printf("Generated  Random Number : %d \n  ",rand());

	return 0;
}


