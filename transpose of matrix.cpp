#include<stdio.h>
int main()
{
	int a[3][3],i,j,p[3][3];
	printf("enter the value for Matrix");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\n Enter the element of %dth row %dth column", i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n entered Matrix is");
	printf("\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
	printf("Transpose of given Matrix is\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			p[i][j]=a[j][i];
			printf("%d", p[i][j]);
		}
		printf("\n");
	}
}
