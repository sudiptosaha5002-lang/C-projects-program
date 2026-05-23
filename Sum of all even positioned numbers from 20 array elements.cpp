#include<stdio.h>
int main()
{
	int i, s=0, x[20];
	printf("Enter 20 elements into an array:");
	for(i=0; i<20; i++)
	{
		scanf("%d", &x[i]);
	}
	for(i=0; i<20; i=i+2)
	{
		s=s+x[i];
	}
	printf("Sum of Even position elements from 20 Array elements:%d",s);
}
