#include<stdio.h>
int main()
{
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i*2-1; j=j+2)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
