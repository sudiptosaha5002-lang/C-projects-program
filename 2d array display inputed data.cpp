#include<stdio.h>
int main()
{
	int arr[5][5];
	int i,j,row,col;
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
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}
