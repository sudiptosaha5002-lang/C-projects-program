#include<stdio.h>
#include<math.h>
int main()
{
	int arr[15], i, s1=0, s2=0;
	printf("enter elements into the array");
	for(i=0; i<15; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<15; i++)
	{
		if(arr[15]%2==0)
		s1=s1+arr[i];
		else
		s2=s2+arr[i];
	}
	printf("%d,%d", s1,s2);
}
