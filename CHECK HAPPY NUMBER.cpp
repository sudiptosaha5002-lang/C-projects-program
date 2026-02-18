#include<stdio.h>
#include<math.h>
int main()
{
	int r,n,sum=0;
	printf("enter any number");
	scanf("%d",  &n);
	while(n>9)
	{
		sum=0;
		while(n>0)
	    {
	    	r=n%10;
	    	sum=sum+(r*r);
	    	n=n/10;
		}
		n=sum;
		
    }
    if(n==1)
    printf("Happy Number");
    else
    printf("Not happy number");
}
