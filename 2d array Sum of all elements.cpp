#include<stdio.h>
int main()
{
    int arr[10][5];
	int i,j,row,col,sum=0;
	printf("enter row:");
	scanf("%d",&row);
	printf("enter column:");
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum=sum+arr[i][j];
		}
	}
	printf("the sum of all elements in the array:%d",sum);
}

