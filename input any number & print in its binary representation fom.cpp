#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,sum=0,p=0;
	printf("enter any number");
	scanf("%d", &n);
	while(n!=0)
	{
		r=n%2;
		sum=sum+r*(int)(pow(10,p));
		p+=1;
		n=n/2;
	}
	printf("%d",sum);
}
