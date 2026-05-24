//Print all Palindrome number from 10 element of Array
#include<stdio.h>
int main()
{
	int arr[10],i,num,r,rev=0;
	printf("Enter 10 integer into Array:");
	for(i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<10; i++)
	{
		num=arr[i];
		rev=0;
		while(arr[i]!=0)
		{
			r=arr[i]%10;
			rev=rev*10+r;
			arr[i]=arr[i]/10;
		}
	    if(rev==num)
	    {
		   printf("\n Palindrome number from the Array:%d\n",num);
	    }
	    else
	    {
		printf("Not Palindrome\n");	
	    }
	}
}
