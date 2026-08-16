
#include<stdio.h>
int main()
{
	int arr[10],i,j,num;
	printf("enter 10 elements into an Array:");
	printf("\n Original Set->");
	for(i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1; i<10; i++)
	{
		num=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>num)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=num;
	}
	printf("\n Sorted Set->");
	for(i=0; i<10; i++)
	{
		printf("%d ",arr[i]);
	}
}


