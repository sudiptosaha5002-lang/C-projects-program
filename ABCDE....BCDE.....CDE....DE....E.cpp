#include<stdio.h>
int main()
{
	int i,j;
	for(i=65; i<=69; i++)
	{
		for(j=i; j<=69; j++)
		{
			printf("%c",(char)j);
		}
		printf("\n");
	}
}
