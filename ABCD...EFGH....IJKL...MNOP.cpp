#include<stdio.h>
int main()
{
	int i,j,k=65;
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=4; j++)
		{
			printf("%c", k);
			k++;
		}
		printf("\n");
	}
}
