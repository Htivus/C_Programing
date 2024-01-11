#include <stdio.h>

int main()
{
	 int c, prev_c;

        printf("Enter the text and press Ctrl D \n ");
	
        while ( (c = getchar()) != EOF)
        {
                if (c == ' ')
                {
			if (prev_c != ' ')
			{
				putchar(c);
			}
                }
		else 
		{
			putchar(c);
		}
		prev_c = c;

        }
	
	printf("\n Ctrl D to exit");
	
        return 0;

}
