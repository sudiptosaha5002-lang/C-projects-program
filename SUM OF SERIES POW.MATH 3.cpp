#include <stdio.h>
#include <math.h>
int main()
{
	int i, sum=0, n;
	printf("enter terms");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		sum=sum+(i^2);
	}
	printf("%d",sum);
}
