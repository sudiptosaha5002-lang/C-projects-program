#include<stdio.h>
int main()
{
	int a[3][3],i,j,b[3][3],p[3][3];
	printf("enter the value for first Matrix");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\n Enter the element of %dth row %dth column", i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n entered 1st Matrix is");
	printf("\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	
	printf("enter the value for second Matrix");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\n enter the element of %dth row %dth column", i+1,j+1);
			scanf("%d", &b[i][j]);
		}
	}
	printf("\n entered 2nd Matrix is");
	printf("\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d", b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Sum of given two Mqatrix is");
	printf("\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			p[i][j]=a[i][j]+b[i][j];
			printf("%d", p[i][j]);
		}
		printf("\n");
	}
	
}
