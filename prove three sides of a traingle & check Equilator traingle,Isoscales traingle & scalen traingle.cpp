#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three sides of a traingle");
	scanf("%d%d%d", &a,&b,&c);
	if(a+b>c && b+c>a && c+a>b)
	{
		printf("traingle is possible");
		if(a==b && b==c && c==a)
		printf("equilator traingle");
		else if(a==b || b==c || c==a)
		printf("isoscales traingle");
		else
		printf("scalen traingle");
	}
	else
	printf("traingle is not possible");
}
