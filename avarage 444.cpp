#include <stdio.h>
int main ()
{
	int a,b,c,sum,avg;
	printf("enter any three number");
	scanf("%d %d %d", &a,&b,&c);
	sum=a+b+c;
	avg=sum/3;
	printf("avarage of three no. is" "%d",avg);
}
