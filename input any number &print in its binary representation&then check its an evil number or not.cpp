#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,sum=0,p=0,c=0;
	printf("enter any number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%2;
		if(r==1)
		c++;
		sum=sum+r*(pow(10,p));
		p+=2;
		n=n/2;
	}
	printf("%d",sum);
	if(c%2==0)
	printf("Its an evil number");
	else
	printf("Not evil number");
}
