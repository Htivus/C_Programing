/* Welcome to C programming Suvith */

#include <stdio.h>

void to_lower(char s[])
{
	int i = 0;
	
	for ( i = 0 ; i < 99 ; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] - 'A' + 'a';
		}
		else
		s[i] = s[i];
	}
}

int main()
{
	char s[100];
	scanf("%s",s);

	to_lower(s);

	printf(" \n %s ",s);
	getchar();    


    return 0;
}


