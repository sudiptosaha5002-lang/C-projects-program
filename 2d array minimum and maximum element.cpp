#include<stdio.h>
int main()
{
    int arr[10][10];
	int i,j,row,col,min,max;
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
	max=arr[0][0];
	min=arr[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
			}
			if(arr[i][j]<min)
			{
				min=arr[i][j];
			}
		}
	}
	printf("Minimum element:%d",min);
	printf("Maximum element:%d",max);
}

