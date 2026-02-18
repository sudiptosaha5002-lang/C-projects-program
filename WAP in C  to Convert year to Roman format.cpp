#include<stdio.h>
int romanise(int n);
int main()
{
   int year;
   printf("Enter Year:");
   scanf("%d",&year);
   romanise(year);
   return 0;	
}
int romanise(int n)
{
	while(n>0)
	{
		if(n>=1000)
		{
			printf("m");
			n-=1000;
		}
		else if(n>=500)
		{
			printf("d");
			n-=500;
		}
		else if(n>=100)
		{
			printf("c");
			n-=100;
		}
		else if(n>=50)
		{
			printf("l");
			n-=50;
		}
		else if(n>=10)
		{
			printf("x");
			n-=10;
		}
		else if(n>=5)
		{
			printf("v");
			n-=5;
		}
		else if(n>=1)
		{
			printf("i");
			n-=1;
		}
	}
}
