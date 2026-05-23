//enter 10 array elements and show all factorial value of each number
#include<stdio.h>
int main()
{
	int i,j,arr[10];
	long int f;
	printf("enter 10 elements into an Array:");
	for(i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<10; i++)
	{
		f=1;
		for(j=1; j<=arr[i]; j++)
		{
			f=f*j;
		}
		printf("%d!=%ld\n",arr[i],f);
	}
}
