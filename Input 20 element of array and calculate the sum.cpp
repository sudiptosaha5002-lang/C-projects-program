//Input 20 element of array and calculate the sum
#include<stdio.h>
#include<math.h>
int main()
{
	int arr[20], i, sum=0;
	printf("enter element into the array");
	for(i=0; i<20; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<20;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d", sum);
}
