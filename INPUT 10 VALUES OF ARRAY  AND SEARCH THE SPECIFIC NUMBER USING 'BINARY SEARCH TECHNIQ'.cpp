#include<stdio.h>
int main()
{
	int arr[10], i, n, f=0, l=0, u=9, mid;
	printf("enter 10 values of array\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("enter the number to be searched\n");
	{
		scanf("%d", &n);
	}
	
	while(l<=u)
	{
		mid=(l+u)/2;
		if(arr[mid]<n)
		l=mid+1;
		if(arr[mid]>n)
		u=mid-1;
		if(arr[mid]==n)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	printf("SEARCH SUCCESSFULL");
	else
	printf("SEARCH NOT SUCCESSFUL");
}
	
	
