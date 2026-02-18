#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,c=0;
	char s1[100];
	printf("enter a string\n");
	gets(s1);
	for(i=0; s1[i]!='\0'; i++)
	{
		if(s1[i]==' ')
		{
			c=c+1;
		}
	}
	printf("%d", c);
}
