#include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter terms");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		sum=sum+1/i;
	}
	printf("%d", sum);
}
