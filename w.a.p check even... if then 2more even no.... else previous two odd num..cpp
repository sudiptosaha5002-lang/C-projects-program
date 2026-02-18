#include <stdio.h>
int main()
{
	int a,p,q;
	printf("enter any number");
	scanf("%d", &a);
	if(a%2==0)
	{
		p=a+2;
		q=p+2;
		printf("%d %d", p,q);
	}
	else
	{
		p=a-2;
		q=p-2;
		printf("%d,%d", p,q);
	}
}
