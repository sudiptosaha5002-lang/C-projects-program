#include<stdio.h>
int main()
{
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(j=65; j<65+i; j++)
		{
			printf("%c",(char)j);
		}
		printf("\n");
	}
}
