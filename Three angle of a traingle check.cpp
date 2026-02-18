#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any three angle of a traingle");
	scanf("%d%d%d", &a,&b,&c);
	if((a+b+c)==180)
	printf("Traingle is possible");
	else
	printf("Traingle is not possible");
}
