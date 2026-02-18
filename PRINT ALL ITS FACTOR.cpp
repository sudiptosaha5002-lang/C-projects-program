#include <stdio.h>
int main()
{
	int n,i,f=1;
	printf("enter any number");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("\n%d",i);
		}
	}
	
}
