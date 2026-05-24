//Search any name from 10 Names array using Linear-Searching
//Word\Names
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10][100],x[100];
	int i, f=0;
	printf("enter 10 Names into an Array:");
	for(i=0; i<10; i++)
	{
		scanf("%s",&str[i]);
	}
	printf("enter the name you wants to search:");
	scanf("%s",&x);
	for(i=0; i<10; i++)
	{
		if(strcmpi(str[i],x)==0)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("Name '%s' Found Successfully",x);
	}
	else
	{
		printf("Not Found!!");
	}
}
