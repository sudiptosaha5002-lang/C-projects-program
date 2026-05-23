#include<stdio.h>
int main()
{
	int arr[10], i, j, temp;
	printf("enter 10 values of array\n");
	
	printf("\n Original Set:");
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<9; i++)
	{
		for(j=0; j<(9-i); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\nSorted Set->");
	for(i=0; i<10; i++)
	{
		printf("%d ",arr[i]);
	}
}
