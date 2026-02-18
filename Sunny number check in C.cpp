#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sq=0,r=0;
	printf("enter any number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		r=n+1;
		sq=int(sqrt(r));
	}
	if(sq*sq==r)
	    printf("Sunny Number");
	else
	    printf("Not Sunny Number");
}
