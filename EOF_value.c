#include <stdio.h>

void EOF_not_val()
{
        printf("\nEnter Ctrl D  to signal EOF\n");

        int c = getchar() != EOF;

        printf("\nThe val of c = getchar() != EOF is %d \n",c);
}

void EOF_val()
{
	 printf("\nValue of EOF is %d\n",EOF);
}
int main()
{
	printf("EOF program:\n");
	EOF_val();
	EOF_not_val();
	return 0;
}
