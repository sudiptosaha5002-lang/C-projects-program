#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,sum=0,c=0,nd,num1,num2;
	printf("enter number of digits");
	scanf("%d", &nd);
	printf("enter any number");
	scanf("%d", &n);
	num1=n;
	num2=n;
	c=0;
	do
	{
		n=n/10;
		c=c+1;
	}
	while(n>0);
	n=num1;
	do
	{
		r=num1%10;
		sum=sum+pow(r,c);
		num1=num1/10;
	}
	while(num1>0);
	if(sum==num2)
	printf("Armstrong number");
	else
	printf("not armstrong number");
}
