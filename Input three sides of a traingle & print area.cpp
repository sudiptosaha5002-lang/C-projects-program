#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,area,s;
	printf("enter three sides of a traingle");
	scanf("%d%d%d", &a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%d", area);
}
