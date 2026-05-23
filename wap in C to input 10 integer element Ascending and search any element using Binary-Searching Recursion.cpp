#include<stdio.h>
int f=0,p;
int binarySearch(int arr[], int l, int u, int n)
{
	int mid;
	if(l<=u)
	{
		mid=(l+u)/2;
		if(arr[mid]==n)
		{
			f=1;
			p=mid;
		}
		else if(arr[mid]>n)
		{
			binarySearch(arr, l, mid-1, n);
		}
		else
		{
			binarySearch(arr, l, mid+1, n);
		}
	}
}
int main()
{
	int arr[10], i, n;
	printf("Enter 10 elements into an Array:");
	for(i=0; i<10 ; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("enter the number to search:");
	scanf("%d", &n);
	binarySearch(arr, 0, 9, n);
	if(f==1)
	{
		printf("Number %d found at position %d:",n,p);
	}
	else
	{
		printf("Number not found!!");
	}
	return 0;
}
