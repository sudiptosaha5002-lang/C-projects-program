#include<stdio.h>
int main()
{
	int n,r,rev=0,num;
	printf("enter any number");
	scanf("%d", &n);
	num=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==num)
	{
		printf("Palindrome number");
	}
	else
	{
		printf("not palindrome number");
	}
}
