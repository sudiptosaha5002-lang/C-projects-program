//Search any element using Linear-Searching(10 integer element array)
//Ascending order
#include<stdio.h>
int main()
{
	int arr[10],i,x,f=0;
	printf("Enter 10 elements into an Array:");
	for(i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Search:");
	scanf("%d",&x);
	for(i=0; i<10; i++)
	{
		if(x==arr[i])
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("search successful and the element %d found at position: %d",x,i);
	}
	else
	{
		printf("search unsuccessful");
	}
}
