//Selection-Sort Technique using Recursion (Sorting 10 elements)
//Ascending order
#include<stdio.h>
int SelectionSort(int arr[])
{
	int temp,i,j,min;
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
   SelectionSort(arr);
   printf("\n Sorted Set:");
   for(i=0; i<10; i++)
   {
   	 printf("%d ", arr[i]);
   }
}

