#include<stdio.h>
int main()
{
	int avg,sum=0,i;
	int student[10];
	printf("enter marks:");
	for(i=0; i<=9; i++)
	{
		scanf("%d", &student[i]);
	}
	for(i=0; i<=9; i++)
	{
	   sum=sum+student[i];
	   avg=sum/10;
	   printf("Average marks:%d\n",avg);
	   return 0;
	}
}
