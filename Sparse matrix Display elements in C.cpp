#include<stdio.h>
int main()
{
   int arr[10][10];
   int i,j,row,col,c=0;
   printf("enter Row:");
   scanf("%d",&row);
   printf("enter Column:");
   scanf("%d",&col);
   for(i=0; i<row; i++)
   {
   	for(j=0; j<col; j++)
   	{
   		scanf("%d",&arr[i][j]);
   		
   		if(arr[i][j]!=0)
   		{
   			c++;
		}
	}
   }
   
   printf("Original matrix are:");
   for(i=0; i<row; i++)
   {
   	for(j=0; j<col; j++)
   	{
   		printf("%d",arr[i][j]);
	}
   }
   
   printf("Sparse Matrix are:\n");
   printf("Row\tcol\tvalue\n");
   printf("%d\t,%d\t,%d\n",row,col,c);
   for(i=0; i<row; i++)
   {
   	for(j=0; j<col; j++)
   	{
   		if(arr[i][j]!=0)
   		{
   			printf("%d\t,%d\t,%d\n",i,j,arr[i][j]);
		}
	}
   }
}

