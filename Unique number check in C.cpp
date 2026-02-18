#include<stdio.h>
int main()
{
	int n,r,num=0,f=0;
	printf("enter any number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		num=n/10;
	while(num!=0)
	{
		if(num%10==r)
		{
			f=1;
			break;
		}
		num=num/10;
	}
		n=n/10;
	}
	if(f==0)
	printf("Unique number");
	else
	printf("not Unique number");
}
