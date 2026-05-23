//BubbleSort Technique (Sorting 10 character)
//Character/Alphabets
//Ascending order
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,min;
	char str[10],temp;
	printf("enter 10 charcters into an Array:");
	printf("\n Original Set->");
	for(i=0; i<10; i++)
	{
		scanf(" %c",&str[i]);
	}
	for(i=0; i<9; i++)
	{
		for(j=0; j<9-i; j++)
		{
			if(str[j]>str[j+1])
			{
			   temp=str[j];
		       str[j]=str[j+1];
		       str[j+1]=temp;
			}
		}
	}
	printf("\n Sorted Character Set->");
	for(i=0; i<10; i++)
	{
		printf("%c ",str[i]);
	}
}

