#include<stdio.h>
int main()
{
	int i,n,product=1;
	printf("enter any number");
	scanf("%d", &n);
	while(n!=0)
	{
		i=n%10;
		n=n/10;
		product*=i;
	}
	printf("%d", product);
}
