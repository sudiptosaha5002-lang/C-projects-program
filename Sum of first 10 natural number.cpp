#include <stdio.h>
int main()
{
	int i, sum=0;
	printf("enter any number");
	scanf("%d", &i);
	for(i=1; i<=10; i=i+1)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
