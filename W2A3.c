#include <stdio.h>
#include <string.h>
int main()
{
	char s[500];
	int c=1,i;
	printf("Enter the string:\n");
	scanf("%[^\n]s",&s);
	for(i=0;s[i]!='\0';++i)
	{
		if (s[i]==' '&&s[i+1]!=' ')
		{
			c++;
		}
	}
	printf("Number of words in given string:%d\n",c);
	return 0; 
}
