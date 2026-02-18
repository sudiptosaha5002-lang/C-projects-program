#include<stdio.h>
int main()
{
	int a,b,f=1,n;
	printf("enter first number");
	scanf("%d", &a);
	printf("enter second number");
	scanf("%d", &b);
	if(a<=b)
	{
		n=a;
	}
	else
	{
		n=b;
	}
	while(n!=0)
	{
		f=f+1;
		if(a%f==0)
		{
			if(b%f==0)
			{
				printf("given numbers are not co-prime");
				break;
			}
		}
		n=n-1;
	}
	if(n==0)
	{
		printf("given numbers are co-prime");
	}
}
