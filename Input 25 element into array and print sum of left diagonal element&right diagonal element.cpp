#include<stdio.h>
int main()
{
	int arr[5][5], i, j, ldSum=0, rdSum=0;
	printf("enter 25 element into an array\n");
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(i=0; i<5; i++)
	{
		ldSum=ldSum+arr[i][i];
		rdSum=rdSum+arr[i][4-i];
	}
	
	printf("sum of left diagonal element %d\n", ldSum);
	printf("sum of right diagonal element %d\n", rdSum);
}
