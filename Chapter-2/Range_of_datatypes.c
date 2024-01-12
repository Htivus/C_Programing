#include <stdio.h>
#include <limits.h>

int main()
{
	int a;
	float b;
	double c;
	char d;
	short int e;
	long int f;

	printf(" int : %ld \n float : %ld \n double : %ld \n char : %ld \n short int : %ld \n long int : %ld \n",sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(f));

	printf("Range of values for different data types:\n");
    	printf("========================================\n");

    	printf("Char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    	printf("Short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    	printf("Int: %d to %d\n", INT_MIN, INT_MAX);
    	printf("Long: %ld to %ld\n", LONG_MIN, LONG_MAX);

	return 0;
}
