#include<stdio.h>
int main()
{
	int y;
	printf("enter the year:");
	scanf("%d", &y);
	if(y%400==0)
	{
		printf("Leap Year");
	}
	else
	{
		if(y%100!=0)
		{
			if(y%4==0)
			{
				printf("Leap Year");
			}
			else
			{
				printf("Not Leap Year");
			}
		}
	}
}
