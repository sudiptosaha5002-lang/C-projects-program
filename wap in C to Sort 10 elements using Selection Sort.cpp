//Selection Sort Technique (Sorting 10 elements)
//Ascending order
#include<stdio.h>
int main()
{
	int arr[10],i,j,min,temp;
	printf("enter 10 elements into an Array:");
	printf("\n Original Set->");
	for(i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<9; i++)
	{
		min=i;
		for(j=i+1; j<10; j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	printf("\n Sorted Set->");
	for(i=0; i<10; i++)
	{
		printf("%d ",arr[i]);
	}
}
