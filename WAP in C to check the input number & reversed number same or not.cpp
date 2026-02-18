#include<stdio.h>
int main()
{
	int n,r,rev=0,num,c=0;
	printf("enter five digit number");
	scanf("%d", &n);
	num=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
		c++;
	}
	if(c!=5)
	{
		printf("Please enter 5 digit number!!");
	}
	if(rev==num)
	{
		printf("Reversed and original number match!");
	}
	else
	{
		printf("Not match");
	}
}
