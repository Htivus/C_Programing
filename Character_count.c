#include <stdio.h>

int main()
{
	int blank, tab, newline, count, c;

	printf("Enter the text and press Ctrl D \n ");

	while ((c=getchar()) != EOF)
	{
		if (c == '\t')
		{
			++tab;
		}
		else if (c == '\n')
		{
			++newline;
		}
		else if (c == ' ')
		{
			++blank;
		}
		++count;
	}

	printf("The Number of\nBlank = %d \nTab = %d \nNewline = %d \nChar count = %d \n",blank,tab,newline,count);
	return 0;
}
