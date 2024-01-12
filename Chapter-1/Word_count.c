#include <stdio.h> 

#define IN 1
#define OUT 0

int main (int argc, char* argv[])
{
	printf ("Program to count NO. of words\n");

	int c, state, count;

	state = OUT;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n' || c == ' ' || c == '\t')
		{
			state = OUT;
		}
		else if (!state)
		{
			state = IN;
			++count;
		}

		if (state == IN )
		{
			putchar(c);
		}
		else
			putchar(10); //new line
	}

	printf ("Word count : %d \n",count);
}
