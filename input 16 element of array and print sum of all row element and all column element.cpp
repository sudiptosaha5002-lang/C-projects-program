//input 16 element of array and print sum of all row element and all column element.
#include<stdio.h>
#include<math.h>
int main()
{
	int arr[4][4], i, j, rs[4]={0}, cs[4]={0};
	printf("enter 16 elements of the array\n");
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			scanf("%d", &arr[i][j]);
			
		}
	}
	
     printf("sum of each row\n");
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
			{
				rs[i]=rs[i]+arr[i][j];
			}
			printf("%d\n", rs[i]);
	    }
	    
	    
	printf("sum of each column\n");
		for(j=0; j<4; j++)
		{
			for(i=0; i<4; i++)
			{
				cs[j]=cs[j]+arr[i][j];
			}
			printf("%d\n", cs[j]);
		}    
}
