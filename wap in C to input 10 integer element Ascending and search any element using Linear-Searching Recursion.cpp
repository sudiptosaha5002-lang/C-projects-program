//Search any element Recursion using Linear-Searching(10 integer element array)
//Ascending order
#include<stdio.h>
int LinearSearch(int arr[],int x)
{
	int f,i;
	for(i=0; i<10; i++)
	{
		if(x==arr[i])
		{
			f=1;
			break;
		}
	}
}
int main()
{
   int arr[10],i,x,f;
	printf("Enter 10 elements into an Array:");
	for(i=0; i<10 ; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("enter the number to search:");
	scanf("%d", &x);
	LinearSearch(arr, x);
	if(f==1)
	{
		printf("Number %d found at position %d:",x,i);
	}
	else
	{
		printf("Number not found!!");
	}
	return 0;
}

