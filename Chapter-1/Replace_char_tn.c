#include <stdio.h>

int main()
{
	int c;

        printf("Enter the text and press Ctrl D \n ");

        while ((c=getchar()) != EOF)
        {
                if (c == '\t')
                {
                        printf("\\t");
                }
                else if (c == '\n')
                {
                        printf("\\n");
                }
                else if (c == '\\')
                {
                	printf("\\");        
                }
         	else
	 	putchar(c);	
        }

	printf("\n");

        return 0;
}
