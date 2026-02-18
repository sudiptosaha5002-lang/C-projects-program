#include<stdio.h>
int main()
{
    int i,c=0,c1=0,n,r,rev=0,j;
    printf("enter any number");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
    	if(n%i==0)
    	c=c+1;
	}
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}	
		for(j=1; j<=rev; j++)
		{
			if(rev%j==0)
			c1=c1+1;
		}
		if(c==2 && c1==2)
		printf("Twisted prime");
		else
		printf("Not Twisted prime");
	
}
