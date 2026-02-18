#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any three number");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b && a>c)
	{
		if(b>c)
		printf("b is second largest");
		else
		printf("c is second largest");
	}
	if(b>a && b>c)
	{
		if(a>c)
		printf("a is second largest");
		else
		printf("c is second largest");
	}
	if(c>a && c>b)
	{
		if(a>b)
		printf("a is second largest");
		else
		printf("b is second largest");
	}
}
