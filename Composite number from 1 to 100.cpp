#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,c=0;
	printf("all composite number from 1 to 100/n");
	for(i=1; i<=100; i++)
	{
		c=0;
		for(j=1; j<=i; j++)
		{
			if(i%j==0)
			c=c+1;
		}
		if(c>2)
		printf("%d", i);
	}
}
