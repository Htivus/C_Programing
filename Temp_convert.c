#include <stdio.h>

int convert_to_cel (int fahr)
{
	return 5 * (fahr - 32) / 9; 
}

int main()
{
	int celsius, fahr=0;
	
	int lower = 0;
	int upper = 300;
	int step = 20;

	printf("Fahr   | Celsius \n");

	while (fahr <= upper)
	{
		celsius = convert_to_cel(fahr);
		printf("%5d  | %5d\n",fahr,celsius);
		fahr = fahr + 20;
	}

	return 0;
	
}
