#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,c=0,sum=0,num1,num2;
	printf("enter any number");
	scanf("%d", &n);
	num1=n;
	num2=n;
	while(n>0)
	{
		n=n/10;
		c++;
	}
	while(num1>0)
	{
		r=num1%10;
		sum=sum+pow(r,c);
		num1=num1/10;
	}
	if(sum==num2)
	printf("Armstrong number");
	else
	printf("Not Armstrong number");
}

