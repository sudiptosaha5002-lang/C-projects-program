#include <stdio.h>
int main()
{
	int n,c=0,i;
	printf("enter any number");
	scanf("%d", &n);
	for(i=1; i>=n; i++)
	{
		if(n%i==0)
		c=c+1;
	}
	if(n%2==0)
	printf("composite");
	else
	printf("not composite");
}
