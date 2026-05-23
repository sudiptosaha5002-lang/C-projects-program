#include<stdio.h>
int bubbleSort(int arr[])
{
	int temp,i,j;
	for(i=0; i<9; i++)
	{
		int sorted=0;
		for(j=0; j<(9-1-i); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				sorted=1;
			}
		}
		if(sorted)
		{
			return arr[i];
		}
	}
}
int main()
{
   int arr[10],i;	
   printf("enter 10 elememnts into an Array:\n");
   printf("\n Original Set:");
   for(i=0; i<10; i++)
   {
   	 scanf("%d",&arr[i]);
   }
   printf("\n Sorted Set:");
   for(i=0; i<10; i++)
   {
   	 bubbleSort(arr);
   }
}

