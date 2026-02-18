#include<stdio.h>
int main()
{
	int i,c=0,c1=0,p,q,j;
	printf("enter any two number");
	scanf("%d%d", &p,&q);
	for(i=1; i<=p; i++)
	{
		if(p%i==0)
		c=c+1;
	}
	for(j=1; j<=q; j++)
	{
	if(q%j==0)
	c1=c1+1;
    }
    if(c==2 && c1==2 && p-q==2 || q-p==2)
    printf("Twin prime");
    else
    printf("not Twin prime");
}
