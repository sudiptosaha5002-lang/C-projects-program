#include<stdio.h>
#include<math.h>
int main()
{
	int i,q,n;
	float a,p,r;
	i=1;
	while(i<=10)
	{
		printf("\nEnter value of Principal(p), \nNumber of years(n), \nAnnual rate(r), \nTimes of interest in a Year(q)");
		scanf("%f,%d,%f,%d",&p,&n,&r,&q);
		a=p*pow(1+(r/q),n*q);
		printf("Amount %d,%.2f",i,a);
		i=i+1;
	}
}
