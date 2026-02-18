#include<stdio.h>
int main()
{
	int i, sum, product, n1, n2;
	printf("all special two digit number from 10 to 99:\n");
	for(i=10; i<=100; i++)
	{
		n1=i/10;
		n2=i%10;
		
		sum = n1 + n2;
		product = n1 * n2;
		
	   if(sum+product == i)
	  {
        printf("%d\n",i);
      }
    }
}

