#include<stdio.h>
int main()
{
	int arr[300],n,m,i,s,t;
	printf("how many number do you want to insert");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("in which place do you want to insert your number");
	scanf("%d", &t);
	m=n+1;
	while(m!=t-1)
	{
		arr[m]=arr[m-1];
		m--;
	}
	printf("which number do you want to insert");
	scanf("%d", &s);
	arr[t-1]=s;
	for(i=0; i<n; i++)
	{
		printf("%d", arr[i]);
	}
}
