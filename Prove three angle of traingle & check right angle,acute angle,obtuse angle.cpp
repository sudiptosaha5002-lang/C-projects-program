#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three angle");
	scanf("%d%d%d", &a,&b,&c);
	if((a+b+c)==180)
	{
		printf("Triangle is possible");
		if(a==90 || b==90 || c==90)
		printf("Right angle Traingle");
		else if(a<90 && b<90 && c<90)
		printf("Acute angle Traingle");
		else
		printf("Obtuse angle Traingle");
	}
	else
	printf("Traingle is not possible");
}
